#include <iostream>
using namespace std;

int Input()
{
    int N;
    cout << " Введи число ";
    cin >> N;
    return N;
}

void PrintNo() {
    cout << "Четных цифр нет\n"; //исходное число равно полученному
}

void CountFunc() {
    int N, b, k, a, s;
    k = 1; //разряд числа
    s = 0; //полученное число

    Input();

    b = N; //присваиваю переменной изначальное число, например, 1234

    while (b > 0) {
        a = b % 10; //получаем последнюю цифру данного числа, например, 4 ... затем 3 ... 2 ... 1
        if (a % 2 == 1) {
            s = s + a * k; // 1 итерация: s = 0 + 3 * 1 = 3 ... 2 итерация: s = 3 + 1 * 10 = 13
            k = k * 10; //увеличивает разряд числа
        }
        b = b / 10; //убирает последнюю цифру числа
    }

    if (s == N) { PrintNo(); }
    else { cout << "Новое число равно\n" << s; }

}

int main()
{
    int N, b, k, a, s;
    setlocale(LC_ALL, "rus");

    int l = Input();
    CountFunc();
    
}