// Q1: Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void dispArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}
int getLargest(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    return arr[0];
}
int leastFrequent(int arr[], int n) {
    unordered_map < int, int > hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    int min_count = n + 1, res = -1;
    bool same_count = true; // flag to check if all counts are the same
    for (auto i: hash) {
        if (min_count > i.second) {
            res = i.first;
            min_count = i.second;
            same_count = false;
        } else if (min_count == i.second) {
            same_count = true;
        }
    }

    if (same_count) {
        res = getLargest(arr, n);
    }
    return res;
}
int getThirdMax(int arr[], int n) {
    if (n < 3) {
        return getLargest(arr, n);
    } else {
        return leastFrequent(arr, n);
    }
}

bool elementInRange(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((-231 <= arr[i] && arr[i] <= 231) == false) {
            return false;
        }
    }
    return true;
}
int main() {
    int len;
    cout << "Enter Number of Elements of array : ";
    cin >> len;
    //1 <= nums.length <= 104
    //-231 <= nums[i] <= 231 - 1
    if (len >= 1 && len <= 104) {
        int arr[len];
        cout << "Enter Elememts of Array : " << endl;
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        cout << "Array : ";
        dispArray(arr, len);
        if (elementInRange(arr, len)) {
            int result = getThirdMax(arr, len);
            cout << endl << "Distinct Maximum  : " << result;
        } else {
            cout << endl << "Invalid Inputs - 'Range Error in Elements of Array'";
        }

    } else {
        cout << endl << "Invalid Range - 'Length of array'";
    }
return 0;
}
