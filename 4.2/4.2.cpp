#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{


    double x, xp, xk, dx, A, B, y;

    cout << endl;

    cout << "XP = ";

    cin >> xp;

    cout << endl;

    cout << "XK = ";

    cin >> xk;

    cout << endl;

    cout << "DX = ";

    cin >> dx;

    cout << endl;

    x = xp;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "y" << "    |" << endl;
    cout << "---------------------------" << endl;

    while (x <= xk) {

        A = 2 * abs(5 - x);

        if (x <= -1)
            B = exp(abs(2 + x));
        if ((x > -1) && (x < 1))
            B = pow(sin(1 / (abs(2 + x))), 2);
        if (x >= 1)
            B = pow(cos(x), 2) / (1 + abs(sin(x)));

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;


    system("pause");
    return 0;
}
