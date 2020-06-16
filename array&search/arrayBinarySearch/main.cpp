#include <iostream>

using namespace std;
int binarySearch(int arr[], int l, int r, int key)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, l, mid - 1, key);

        return binarySearch(arr, mid + 1, r, key);
    }

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
