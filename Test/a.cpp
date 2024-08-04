#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>

using namespace std;

int get_ans(int N, const vector<vector<int>> &A)
{
    int maxValue = 0;

    for (int size = 1; size <= N; ++size)
    {
        for (int i = 0; i <= N - size; ++i)
        {
            for (int j = 0; j <= N - size; ++j)
            {
                unordered_set<int> uniqueElements;

                for (int x = i; x < i + size; ++x)
                {
                    for (int y = j; y < j + size; ++y)
                    {
                        uniqueElements.insert(A[x][y]);
                    }
                }

                maxValue = max(maxValue, static_cast<int>(uniqueElements.size()));
            }
        }
    }

    return maxValue;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();
    vector<vector<int>> A(N, vector<int>(N));

    for (int i = 0; i < N; ++i)
    {
        string inputLine;
        getline(cin, inputLine);
        istringstream iss(inputLine);
        for (int j = 0; j < N; ++j)
        {
            iss >> A[i][j];
        }
    }

    int result = get_ans(N, A);
    cout << result << "\n";

    return 0;
}
