#include <iostream>
using namespace std;

const int size = 3;
void initializeboard(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '*';
        }
    }
}
void showboard(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool isValidMove(const char board[3][3], int row, int col)
{
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '*');
}
bool chk_winner(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[i][2] == player))
        {
            return true;
        }
        else if ((board[0][0] == player && board[1][1] == player && board[2][2]) || (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        {
            return true;
        }
        return false;
    }
}

bool isboardfull(const char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '*')
            {
                return false;
            }
        }
    }
    return true;
}
void playgame()
{
    char board[3][3];
    int row, column;
    char cuurrenplayer = 'X';
    initializeboard(board);
    while (true)
    {
        showboard(board);
        cout << "Player " << cuurrenplayer << ", enter your move (row and column): ";
        cin >> row >> column;
        if (cin.fail())
        {
            cin.clear();                                         // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the invalid input
            cout << "Invalid input. Please enter numeric values for row and column." << endl;
            continue; // Go back to the beginning of the loop
        }
        if (isValidMove(board, row - 1, column - 1))
        {
            board[row - 1][column - 1] = cuurrenplayer;
            if (chk_winner(board, cuurrenplayer))
            {
                showboard(board);
                cout << "Player " << cuurrenplayer << " Wins!" << endl;
                break;
            }
            if (isboardfull(board))
            {
                showboard(board);
                cout << "It's a Tie!" << endl;
                break;
            }

            cuurrenplayer = (cuurrenplayer == 'X') ? 'O' : 'X';
        }
        else
        {
            cout << "Invalid Move. Try Again." << endl;
        }
    }
}

int main()
{

    playgame();

    return 0;
}