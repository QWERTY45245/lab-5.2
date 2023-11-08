#include<iostream>
#include<iomanip>
#include<cmath>
#include<Windows.h>
using namespace std;
void S(const double x, const double eps, int &n, double &s);
void A(const double x, const  int n, double &a);
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентнихспіввідношень" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "arctan(x)" << " |"
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        S(x, eps, n, s);
        cout << setw(2) << x << "|" << setw(5) << atan(x) << "|" << setw(5)<< s << "|" << setw(5) << n << "|" << setw(5)<< endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}
void S(const double x, const double eps, int& n, double& s)
{
    n  ++;
    double a = x;
    s = a;
    do {
        n++;
        A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
}
    void A(const double x, const  int n, double& a)
    {
        double f = (2 * n + 1);
        double t = pow(x, 2 * n + 1) / f;
    }
//eps=xk+1