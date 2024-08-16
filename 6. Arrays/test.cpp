#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long getMinimumOperations(const vector<int>& efficiency, const vector<int>& incr) {
    int n = efficiency.size();
    vector<pair<int, int>> layers(n);
    
    for (int i = 0; i < n; ++i) {
        layers[i] = {efficiency[i], i};
    }
    
    sort(layers.begin(), layers.end());
    
    vector<int> target_positions(n);
    for (int i = 0; i < n; ++i) {
        target_positions[layers[i].second] = i;
    }
    
    long min_operations = 0;
    vector<int> current_positions(n, 0);
    
    for (int i = 0; i < n; ++i) {
        int idx = layers[i].second;
        int target_position = target_positions[idx];
        int current_position = current_positions[idx];
        int increment_value = incr[idx];
        
        if (current_position < target_position) {
            long required_increments = (target_position - current_position + increment_value - 1) / increment_value;
            min_operations += required_increments;
            current_positions[idx] += required_increments * increment_value;
        }
        
        // Update subsequent positions if the current one changes
        for (int j = idx + 1; j < n; ++j) {
            current_positions[j] = max(current_positions[j], current_positions[idx]);
        }
    }
    
    return min_operations;
}

int main() {
    vector<int> efficiency = {4, 2, 7};
    vector<int> incr = {3, 2, 1};
    
    long result = getMinimumOperations(efficiency, incr);
    cout << result << endl;
    
    return 0;
}
