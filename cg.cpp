#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int dx, dy;

    cout << "Enter X1 Value: ";
    cin >> x1;
    cout << "Enter Y1 Value: ";
    cin >> y1;
    cout << "Enter X2 Value: ";
    cin >> x2;
    cout << "Enter Y2 Value: ";
    cin >> y2;

    dx = x2 - x1;
    dy = y2 - y1;
    cout << "dx : " << dx << endl;
    cout << "dy : " << dy << endl;
    int STEPS;

    if (abs(dx) >= abs(dy))
    {
        STEPS = abs(dx);
    }
    else
    {
        STEPS = abs(dy);
    }
    double xinc = double(dx) / STEPS;
    double yinc = double(dy) / STEPS;
    int x, y;
    x = x1;
    y = y1;

    for (int i = 0; i <= STEPS; i++)
    {
        cout << "(" << x << "," << y << ")" << endl;
        x += xinc;
        y += yinc;
    }

    return 0;
}