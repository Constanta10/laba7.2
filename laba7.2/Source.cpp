#include <iostream>
using namespace std;

void inputElements(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void reverseArray(int* arr, int* reversedArr, int n) {
    for (int i = n - 1, k = 0; i >= 0; i--, k++) {
        reversedArr[k] = arr[i];
    }
}

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    int* a, * b, n;
    cout << "¬ведите кол-во элементов: ";
    cin >> n;
    b = new int[n];
    a = new int[n];

    cout << "¬ведите элементы: ";
    inputElements(a, n);

    reverseArray(a, b, n);

    cout << "ќбратный массив: ";
    printArray(b, n);

    delete[] a;
    delete[] b;
    return 0;
}