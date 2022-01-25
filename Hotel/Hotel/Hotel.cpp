#include <iostream>

using namespace std;
int main()
{
    string status;
    signed int money;
    int A = 350000, B = 250000, C = 150000, day;
    cout << "Nhap loai phong: ";
    cin >> status;
    cout << "Nhap so ngay thue: ";
    cin >> day;
    if (day > 12)
    {
        if (status == "A")
            money = day * A * 0.9;
        else if (status == "B")
            money = day * B * 0.92;
        else
            money = day * C * 0.92;
    }

    else
    {
        if (status == "A")
            money = day * A;
        else if (status == "B")
            money = day * B;
        else
            money = day * C;
    }

    cout << "So tien phai tra la: " << money;
    return 0;
}

