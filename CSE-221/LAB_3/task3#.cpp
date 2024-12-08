#include <bits/stdc++.h>
using namespace std;

// function to merge two halves and count inversions
long long mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long long count = 0;

    // Merge two halves while counting inversions
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += (mid + 1 - i); // Count inversions
        }
    }

    // Copy remaining elements from the left half, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from the right half, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy sorted elements back to the original array
    for (int z = left; z <= right; z++) {
        arr[z] = temp[z];
    }

    return count;
}

// function to recursively divide the array and count inversions
long long mergeSortAndCount(int arr[], int temp[], int left, int right) {
    long long count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in the left half
        count += mergeSortAndCount(arr, temp, left, mid);

        // Count inversions in the right half
        count += mergeSortAndCount(arr, temp, mid + 1, right);

        // Count split inversions
        count += mergeAndCount(arr, temp, left, mid, right);
    }
    return count;
}

int main() {
    int n1;
    cout << "Enter array length: " << endl;
    cin >> n1;

    int arr[n1], temp[n1];
    for (int i = 0; i < n1; i++) {
        cout << "Enter array elements: " << endl;
        cin >> arr[i];
    }

    long long result = mergeSortAndCount(arr, temp, 0, n1 - 1);
    cout << "Total inversions: " << result << endl;

    return 0;
}
