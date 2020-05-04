#include <iostream>
using namespace std;

void Double(int*&, int&, int);
void print_arr(int*, int);
int main() {
    for (int rep = 0; rep < 3; rep++) {
        int n, x;
        cout << "Enter size: "; cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "arr[" << i + 1 << "] = ";
            cin >> arr[i];
        }
        cout << "Enter value to double (x): "; cin >> x;
        Double(arr, n, x);
        delete[] arr;
        system("pause");
        system("cls");
    }
    return 0;
}

void Double(int*& arr, int& n, int x) {
    cout << "Array before:";
    print_arr(arr, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            n++;
            int* temp = new int[n];
            for (int j = 0; j <= i; j++) {
                temp[j] = arr[j];
            }
            temp[i + 1] = x;
            for (int j = i + 2; j < n; j++) {
                temp[j] = arr[j - 1];
            }
            delete[] arr;
            arr = temp;
            i++;
        }
    }
    cout << endl << "Array after:";
    print_arr(arr, n);
}

void print_arr(int* arr, int n) {
    cout << "\nArray size: " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
