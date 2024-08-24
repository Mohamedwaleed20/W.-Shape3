#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<1||n>99)
    {
        cout << "error";
    }
    int k = 1;
    int space = n-1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        k = k + 2;
        space--;
        cout << "\n";
    }
    k = k - 2;
    space = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        k = k - 2;
        space++;
        cout << "\n";
    }
    return 0;
}
