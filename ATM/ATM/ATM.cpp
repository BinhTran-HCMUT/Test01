#include <iostream>

using namespace std;

int main()
{
    signed int money;
    int count = 0;
    cout << "Nhap so tien can rut: ";
    cin >> money;
    if (money % 50000 != 0)
        cout << "Khong co cach rut tien.";
    else
    {
        money /= 50000;
        for (int i = 0; i <= money / 10; i++)
        {
            money -= (10*i);
            for (int j = 0; j <= money / 4; j++)
            {
                money = money - (4*j);
                for (int k = 0; k <= money / 2; k++)
                {
                    money -= (2*k);
                    count += 1;
                    cout << "Cach thu " << count << ": " << i << " to 500 nghin, " << j << " to 200 nghin, " << k << " to 100 nghin, " << money << " to 50 nghin.\n";
                }
            }
        }
    }
    return 0;
}


