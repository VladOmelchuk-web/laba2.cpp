#include <iostream>

int DigitSum(int K);

int main() {
    for (int rep = 0; rep<5;rep++){
        std::cout << "Enter K: ";
        int k;
        std::cin >> k;
        std::cout << "Sum of digits: " << DigitSum(k) << endl;
        system("pause");
        system("cls");
    }
    return 0;
}

int DigitSum(int K) {
    if (K < 0) K = -K;
    if (K < 10) return K;
    return K % 10 + DigitSum(K / 10);
}
