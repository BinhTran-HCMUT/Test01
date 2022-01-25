#include <iostream>

using namespace std;

int dem_ky_tu(string s, char k) 
{
	int count = 0;
	for (int i = 0; i < s.size(); ++i) 
	{
		if (s[i] == k) 
		{
			count++;
		}
	}
	return count;
}

int main() 
{
	int n;
	string s;
	cout << "Nhap do dai chuoi s: ";
	cin >> n;
	cout << "Nhap chuoi s: ";
	cin >> s;
	if (n % 4 != 0)
	{
		cout << "===";
		return 0;
	}
	else
	{
		if (dem_ky_tu(s, 'A') > n / 4 || dem_ky_tu(s, 'C') > n / 4 || dem_ky_tu(s, 'G') > n / 4 || dem_ky_tu(s, 'T') > n / 4)
		{
			cout << "===";
			return 0;
		}
		else 
		{
			string s1 = "ACGT";
			for (int i = 0; i < s1.size(); i++) 
			{
				int a = n / 4 - dem_ky_tu(s, s1[i]);
				for (int j = 0; j < s.size(); j++) 
				{
					if (s[j] == '?') 
					{
						s[j] = s1[i];
						--a;
					}
					if (a == 0) break;
				}
			}
			cout << s;
			return 0;
		}
	}
}