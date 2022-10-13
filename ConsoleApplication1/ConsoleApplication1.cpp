#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");

    int a;
    cout << "[+] Введите число: ";
    cin >> a;

    if (a >= 0 and a <= 10) {
        cout << "[+]Цифра в диапазоне: 0 - 10";
    }
    else if (a >= 11 and a <= 20) {
        cout << "[+]Цифра в диапазоне: 11 - 20";
    }
    else if (a >= 21 and a <= 30) {
        cout << "[+]Цифра в диапазоне: 21 - 30";
    }
    else if (a >= 31 and a <= 40) {
        cout << "[+]Цифра в диапазоне: 31 - 40";
    }
    else if (a >= 41 and a <= 50) {
        cout << "[+]Цифра в диапазоне: 41 - 50";
    }
    else if (a >= 51 and a <= 60) {
        cout << "[+]Цифра в диапазоне: 51 - 60";
    }
    else if (a >= 61 and a <= 70) {
        cout << "[+]Цифра в диапазоне: 61 - 70";
    }
    else if (a >= 71 and a <= 80) {
        cout << "[+]Цифра в диапазоне: 71 - 80";
    }
    else if (a >= 81 and a <= 90) {
        cout << "[+]Цифра в диапазоне: 81 - 90";
    }
    else if (a >= 91 and a <= 100) {
        cout << "[+]Цифра в диапазоне: 91 - 100";
    }
    else if (a >= 101) {
        cout << "[+]Ошибка! Число больше 100";
    }


    return 0;

}

