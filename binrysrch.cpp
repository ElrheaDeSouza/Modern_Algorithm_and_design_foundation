#include <iostream>
using namespace std;
void bubble(int a[], int n) {
    for (int i = 0; i< n - 1; i++)
    {
        for (int j = 0; j< n - 1 - i; j++)
        {
                if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    cout << "\nSorted array is ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void binarySearch(int a[], int n, int key) {
    int low = 0, mid, high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == a[mid]) {
            cout << "\nElement found at location " << mid + 1;
            break;
        }
        if (key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (low > high)
        cout << "\nElement not found.!!!";
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

    binarySearch(a, n, key);

    return 0;
}
