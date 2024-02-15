#include <iostream>
using namespace std;

void bubble(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    cout << "\nSorted array is ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void binarySearch(int a[], int key, int low, int high) {
    if (low > high) {
        cout << "\nElement not found";
    } else {
        int mid = (low + high) / 2;
        if (a[mid] == key) {
            cout << "\nElement is present at " << mid + 1;
        } else if (a[mid] > key) {
            binarySearch(a, key, low, mid - 1);
        } else {
            binarySearch(a, key, mid + 1, high);
        }
    }
}

int main() {
    int a[20], n, key, i;

    cout << "\nEnter the total number of elements: ";
    cin >> n;

    cout << "\nEnter the elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "\nyour elements are ";
    for (i = 0; i < n; i++)
        cout << a[i] << "  ";

    bubble(a, n);

    cout << "\nEnter the element to be searched: ";
    cin >> key;

    binarySearch(a, key, 0, n - 1);

    return 0;
}

