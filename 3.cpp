#include <conio.h>
#include <iostream>

using namespace std;

int main()
{

    int m, n, max;
    cout << "do adad ra vared konid:\n";
    cout << "adad avval:";
    cin >> m;
    cout << "adad dovvom:";
    cin >> n;
    while (m == 0 || n == 0)
    {
        cout << "adad nmitavanad 0 bashad";
        cin >> m;
        cin >> n;

    }

    if (m > n) max = m;
    else max = n;

    while (true) {

        if (max % m == 0 && max % n == 0) break;
        else ++max;
    }

    cout << "KMM do adad:" << max;
}

