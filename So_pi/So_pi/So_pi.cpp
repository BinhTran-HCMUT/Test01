#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
    // TODO
    const int k;
    cin >> k;
    int arr[k];
    arr[0] = 0;
    arr[1] = 1;
    cout << arr[0] << " " << arr[1] << " ";
    for (int i = 2; i < k; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
    }
    return 0;
}