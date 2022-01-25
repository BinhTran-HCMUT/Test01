#include <iostream>
#include <iomanip>
using  namespace std;

void exchange_A_B()
{
    int a, b, c;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b;
}

void Circle_Perimeter()
{
    const double PI = 3.14;
    double r;
    cout << "Nhap gia tri cua r";
    cin >> r;
    cout << 2 * PI * r;
}

void Celsius_Temperature()
{
    double f, C;
    cout << "Nhap gia tri nhiet do theo Faraday: ";
    cin >> f;
    C = (5.0 / 9) * (f - 32);
    cout << fixed << setprecision(2) << C;
}

int main()
{
    std::cout << "Hello World!\n";
}

