#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <sstream>

using namespace std;

// Function to split a string based on a delimiter
vector<string> split_string(string input_string) {
    vector<string> splits;
    char delimiter = ' ';
    size_t pos = 0;

    while ((pos = input_string.find(delimiter)) != string::npos) {
        splits.push_back(input_string.substr(0, pos));
        input_string.erase(0, pos + 1);
    }
    splits.push_back(input_string); // Add the last segment
    return splits;
}

// Function to calculate the maximum number of distinct integers in sub-squares
int get_ans(int N, vector<vector<int>>& A) {
    int maxValue = 0;

    // Iterate through possible sub-grid sizes
    for (int size = 1; size <= N; ++size) {
        for (int i = 0; i <= N - size; ++i) {
            for (int j = 0; j <= N - size; ++j) {
                unordered_set<int> uniqueElements;
                // Collect distinct elements in the current sub-grid
                for (int x = i; x < i + size; ++x) {
                    for (int y = j; y < j + size; ++y) {
                        uniqueElements.insert(A[x][y]);
                    }
                }
                // Update maxValue
                maxValue = max(maxValue, static_cast<int>(uniqueElements.size()));
            }
        }
    }

    return maxValue;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore(); // To ignore the newline character after integer input
    vector<vector<int>> A(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        string inputLine;
        getline(cin, inputLine);
        vector<string> inputValues = split_string(inputLine);
        for (int j = 0; j < N; j++) {
            A[i][j] = stoi(inputValues[j]);
        }
    }

    int result = get_ans(N, A);
    cout << result << "\n";

    return 0;
}