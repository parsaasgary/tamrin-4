#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int* a, * b;
    int m, n;
    cout << "chand radif:";
    cin >> m;
    cout << "chand soton:";
        cin >> n;
        a = new int[m];
        b = new int[n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i % 2 != 0 && j % 2 != 0)
                    cout << "#";
                if (i % 2 != 0 && j % 2 == 0)
                    cout << "*";
                else if (i % 2 == 0 && j % 2 != 0)
                    cout << "*";
                else if (i % 2 == 0 && j % 2 == 0)
                    cout << "#";
                

            }
            cout << "\n";

    }



}

