#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool step;
    for (int i = 0; i < n - 1; i++) {
        step = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                step = true;
            }
        }
        if (!step) return; // already sorted
    }
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {2, 7, 4, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArr(arr, n);
}