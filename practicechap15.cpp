#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter X1 Value : ";
    cin >> x1;
    cout << "Enter Y1 Value : ";
    cin >> y1;
    cout << "Enter X2 Value : ";
    cin >> x2;
    cout << "Enter Y2 Value : ";
    cin >> y2;
    double m;
    m = (y2 - y1) / (x2 - x1);
    double c;
    c = y1 - (m * x1);

    double y, x;

    if (m <= 1)
    {
        for (int i = x1; i < x2; i++)
        {
            y = m * i + c;
            cout << "(" << i << " , " << y << ")" << endl;
        }
    }
    else
    {
        for (int i = y1; i < y2; i++)
        {
            x = (i - c) / m;
            cout << "(" << x << " , " << i << ")" << endl;
        }
    }

    return 0;
}