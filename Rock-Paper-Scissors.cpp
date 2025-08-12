#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



int computer_choice()
{
    int n;
    n = rand() % 3 + 1;
    return n;
}
int my_choice()
{
    int n;
    do
    {

        cout << "1 = Rock" << endl;
        cout << "2 = Paper" << endl;
        cout << "3 = Scissors" << endl;
        cout << "Chose one from the Above." << endl;
        cin >> n;
        if (n > 3 || n < 1)
        {
            cout << "Only Chose from 1 - 3" << endl;
        }

    } while (n > 3 || n < 1);

    return n;
}
void selected(int n)
{
    if (n == 1)
    {
        cout << "Rock" << endl;
    }
    else if (n == 2)
    {
        cout << "Paper" << endl;
    }
    else
    {
        cout << "Scissors" << endl;
    }
}

void winner(int cc, int mc)
{
    if (cc == 1 && mc == 3)
    {
        cout << "AI Wins (The rock smashes the scissors.)" << endl;
    }
    else if (cc == 1 && mc == 2)
    {
        cout << "You Wins (Paper wraps rock.)" << endl;
    }

    else if (cc == 3 && mc == 2)
    {
        cout << "AI Wins (Scissors cuts paper.) " << endl;
    }
    else if (cc == 3 && mc == 1)
    {
        cout << "You Wins (The rock smashes the scissors.)" << endl;
    }
    else if (cc == 2 && mc == 1)
    {
        cout << "AI Wins (Paper wraps rock.)" << endl;
    }
    else if (cc == 2 && mc == 3)
    {
        cout << "You Wins (Scissors cuts paper.) " << endl;
    }
    else if (cc == mc)
    {
        cout << "Both Players Have Same Choice, Play Again." << endl;
    }
    else
    {
        cout << "Invalid Comparison" << endl;
    }
}

int main()
{

    int cc, mc;
    do
    {
        srand(time(0));
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
        }

        cc = computer_choice();
        mc = my_choice();
        cout << "AI Choice Is : ";
        selected(cc);
        cout << "My Choice Is : ";
        selected(mc);

        winner(cc, mc);

    } while (cc == mc);

    return 0;
}