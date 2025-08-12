#include <iostream>
#include <cmath>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{

    for (int i = 1; i > 0; i++)
    {

        srand(time(0));
        int num1 = rand();
        int num2 = rand();

        int sum = num1 + num2;
        cout << " " << num1 << endl;
        cout << "+" << num2 << endl;

        cout << "Press any key to get answer." << endl;
        _getch();

        cout << " " << num1 << endl;
        cout << "+" << num2 << endl;
        cout << "------" << endl;
        cout << " " << sum;
        cout << "\nPress any key to get next question." << endl;
        _getch();
    }

    return 0;
}

