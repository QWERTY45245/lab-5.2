#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main() {
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Обчислення суми ряду Тейлора за допомогою рекурентних співвідношень" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "arctan(x)" << " |"
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk) {
        S(x, eps, n, s);
        cout << setw(2) << x << "|" << setw(10) << atan(x) << "|" << setw(10) << s << "|" << setw(5) << n << "|" << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}

void S(const double x, const double eps, int& n, double& s) {
    n = 0;
    s = 0;
    double a = x;
    double a2 = 0;
    int s = 1;
    double t = a;

    while (abs(a) >= eps) {
        n++;
        s += t;
        a2 = a;
        s = -s;
        a = a2 * (x * x) * (2 * n - 1) / (2 * n + 1);
        t = s * a;
    }
}

void A(const double x, const int n, double& a) {
    a = ((-1) * a * x * x) / (2 * n + 1);
}

//eps=xk+1