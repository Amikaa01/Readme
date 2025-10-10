#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;   
            case 1:
                mid++;
                break;

            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main() {
    int size;
    cout << "Please enter the size of the array: ";
    cin >> size;

    int arr[1000];
    cout << "Please enter the elements of the array (0s, 1s, and 2s only): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort012(arr, size);
    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
