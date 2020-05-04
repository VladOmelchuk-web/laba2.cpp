#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int PosK(char[], char[], int);
int main() {
    for (int rep = 0; rep < 5; rep++) {
        char s[500], s0[500];
        int k;
        cout << "Enter full string: ";
        if (rep) cin.ignore();
        cin.get(s, 500);
        cout << "Enter substring: ";
        cin.ignore();
        cin.get(s0, 500);
        cout << "Enter K:"; cin >> k;

        cout << "Position: " << PosK(s0, s, k) << endl;
        system("pause");
        system("cls");
    }
    return 0;
}

int PosK(char s0[], char s[], int k) {
    int p = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == s0[0]) {
            bool flag = true;
            for (int j = 0; j < strlen(s0); j++) {
                if (s[i + j] != s0[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                p++;
                if (p == k) return i;
            }
        }
    }
    return 0;
}
