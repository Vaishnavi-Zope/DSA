#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter size of array: ";
    cin >> a;

    int count = 0;
    int* arr = new int[a];

    for (int i = 0; i < a; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] < 0)
            count++;
    }

    cout << "Total number of negative numbers in array is: " << count;

    delete[] arr; // Don't forget to free the dynamically allocated memory
    return 0;
}
