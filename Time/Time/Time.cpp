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

int main()
{
    int hour, min, sec, hourAdd, secAdd, minAdd;
    string status;
    cout << "Nhap gio hien tai, cach nhau boi dau cach ";
    cin >> hour >> min >> sec >> status;
    cout << "Nhap gio cong them, cach nhau boi dau cach ";
    cin >> hourAdd >> minAdd >> secAdd;
    if (status == "PM")
    {
        hour = hour + 12 + hourAdd;
        min += minAdd;
        sec += secAdd;
        min = min + (sec / 60);
        sec %= 60;
        hour = hour + (min / 60);
        min %= 60;
        hour %= 24;
    }
    else
    {
        hour += hourAdd;
        min += minAdd;
        sec += secAdd;
        min = min + (sec / 60);
        sec %= 60;
        hour = hour + (min / 60);
        min %= 60;
        hour %= 24;
    }
    
    if (hour > 12)
    {
        hour -= 12;
        status = "PM";
    }
    else
    {
        status = "AM";
    }

    cout << "Thoi gian sau cung: "<< addUp(hour) << ":" << addUp(min) << ":" << addUp(sec) << " " << status;
    return 0;
}


