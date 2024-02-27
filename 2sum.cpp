#include <bits/stdc++.h>
using namespace std;

pair<int, int> lopp(vector<int> &arr, int target) {
    map<int, int> mpp;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int value = arr[i];
        int need = target - value;
        if (mpp.find(need) != mpp.end()) {
            return {mpp[need], i};
        }
        mpp[value] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    
    pair<int, int> result = lopp(arr, target);

    if (result.first != -1 && result.second != -1) {
        cout << "Indices: " << result.first << " " << result.second << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}
