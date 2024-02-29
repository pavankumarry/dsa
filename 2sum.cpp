#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> findPairs(vector<int>& arr, int target) {
    map<int, int> mpp;
    vector<pair<int, int>> result;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int value = arr[i];
        int need = target - value;
        if (mpp.find(need) != mpp.end()) {
            result.push_back({mpp[need], i});
        }
        mpp[value] = i;
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    
    vector<pair<int, int>> pairs = findPairs(arr, target);

    if (!pairs.empty()) {
        cout << "Indices that sum up to target:" << endl;
        for (const auto& pair : pairs) {
            cout << pair.first << " " << pair.second << endl;
        }
    } else {
        cout << "No pairs found that sum up to target." << endl;
    }

    return 0;
}
