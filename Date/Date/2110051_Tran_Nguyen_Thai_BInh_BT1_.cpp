#include <iostream>
#include <string>

using namespace std;

string addUp(int n)
{
	string k;
	if (n < 10)
		k = "0" + to_string(n);
	else
		k = to_string(n);
	return k;
}

string trinh_bay(int day, int month, int year)
{
	return addUp(day) + "/" + addUp(month) + "/" + to_string(year);
}

int main() {
	int day, month, year;
	cout << "Nhap ngay thang nam, cach nhau boi dau cach ";
	cin >> day >> month >> year;
	if (month > 12)
		cout << "Ngay thang nam khong hop le";
	else if (month != 2)
	{
		if ((month <= 7 && month % 2 == 1) || (month >= 8 && month % 2 == 0))
		{
			if (day > 31)
				cout << "Ngay thang nam khong hop le";
			else if (day == 31)
			{
				if (month == 12)
					cout << trinh_bay(1, 1, year + 1);
				else
					cout << trinh_bay(1, month + 1, year);
			}
			else
				cout << trinh_bay(day + 1, month, year);
		}
		else
		{
			if (day > 30 )	
				cout << "Ngay thang nam khong hop le";
			else if (day == 30)
				cout << trinh_bay(1, month + 1, year);
			else
				cout << trinh_bay(day + 1, month, year);
		}
	}
	else
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			if (day > 29 )
				cout << "Ngay thang nam khong hop le";
			else if (day == 29)
				cout << trinh_bay(1, month + 1, year);
			else
				cout << trinh_bay(day + 1, month, year);
		}
		else if (day > 28 )
			cout << "Ngay thang nam khong hop le";
		else if (day == 28)
			cout << trinh_bay(1, month + 1, year);
		else 
			cout << trinh_bay(day + 1, month, year);
	}
	return 0;
}