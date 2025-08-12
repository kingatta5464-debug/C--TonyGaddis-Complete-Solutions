#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
// #include <conio.h>
#include <algorithm>
#include <fstream>
#include <climits>
#include <vector>

using namespace std;

//*********** 4 ***********/

// void displaygreater(int arr[], int size, int n)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > n)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }

//*********** 8 ***********/

// bool chk_lu_shu_magic_square(int ch_array[][3], int rows)
// {
//     int lu_shu_magic_square[3][3] = {{4, 9, 2}, {3, 4, 5}, {8, 1, 6}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (ch_array[i][j] != lu_shu_magic_square[i][j])
//             {
//                 return false;
//             }
//         }
//     }
// }

//*********** 18 ***********/

// const int size = 3;
// void initializeboard(char board[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             board[i][j] = '*';
//         }
//     }
// }
// void showboard(char board[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// bool isValidMove(const char board[3][3], int row, int col)
// {
//     return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '*');
// }
// bool chk_winner(char board[3][3], char player)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[i][2] == player))
//         {
//             return true;
//         }
//         else if ((board[0][0] == player && board[1][1] == player && board[2][2]) || (board[0][2] == player && board[1][1] == player && board[2][0] == player))
//         {
//             return true;
//         }
//         return false;
//     }
// }

// bool isboardfull(const char board[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (board[i][j] == '*')
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// void playgame()
// {
//     char board[3][3];
//     int row, column;
//     char cuurrenplayer = 'X';
//     initializeboard(board);
//     while (true)
//     {
//         showboard(board);
//         cout << "Player " << cuurrenplayer << ", enter your move (row and column): ";
//         cin >> row >> column;
//         if (cin.fail())
//         {
//             cin.clear();                                         // Clear the error flag
//             cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the invalid input
//             cout << "Invalid input. Please enter numeric values for row and column." << endl;
//             continue; // Go back to the beginning of the loop
//         }
//         if (isValidMove(board, row - 1, column - 1))
//         {
//             board[row - 1][column - 1] = cuurrenplayer;
//             if (chk_winner(board, cuurrenplayer))
//             {
//                 showboard(board);
//                 cout << "Player " << cuurrenplayer << " Wins!" << endl;
//                 break;
//             }
//             if (isboardfull(board))
//             {
//                 showboard(board);
//                 cout << "It's a Tie!" << endl;
//                 break;
//             }

//             cuurrenplayer = (cuurrenplayer == 'X') ? 'O' : 'X';
//         }
//         else
//         {
//             cout << "Invalid Move. Try Again." << endl;
//         }
//     }
// }

//*********** 19 ***********/

const int SIZE = 3;
void initializearray(int array[SIZE][SIZE])
{

    for (int i = 0; i < SIZE; i++)
    {
        cout << "ROW " << i + 1 << " : " << endl;
        for (int j = 0; j < SIZE; j++)
        {

            cin >> array[i][j];
        }
        cout << endl;
    }
}

double gettotal(int array[][SIZE])
{
    int total = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            total += array[i][j];
        }
    }

    return total;
}
double getaverage(int array[][SIZE])
{
    double total = 0;
    double average;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            total += array[i][j];
        }
    }
    average = total / (SIZE * SIZE);
    return average;
}

double getrowtotal(int array[SIZE][SIZE], int row)
{
    double row_total = 0;
    for (int i = row; i == row; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            row_total += array[i][j];
        }
    }
    return row_total;
}
double getcolumntotal(int array[SIZE][SIZE], int column)
{
    double column_total = 0;
    for (int i = column; i == column; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            column_total += array[j][i];
        }
    }
    return column_total;
}

double highest_value_of_row(int array[SIZE][SIZE], int row)
{
    double highest = INT_MIN;
    for (int i = row; i == row; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (highest < array[i][j])
            {
                highest = array[i][j];
            }
        }
    }
    return highest;
}
double lowest_value_of_row(int array[SIZE][SIZE], int row)
{
    double lowest = INT_MAX;
    for (int i = row; i == row; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (lowest> array[i][j])
            {
                lowest = array[i][j];
            }
        }
    }
    return lowest;
}

int main()
{
    //*********** 19 ***********/

    int testdata[SIZE][SIZE];
    initializearray(testdata);
    double total;
    double average;
    double rowtotal, columntotal, highest_in_row, lowest_in_row;
    int row, column;
    total = gettotal(testdata);
    cout<<"Total Of All Values In The Array : "<<total<<endl;

    average = getaverage(testdata);
    cout<<"Average Of All Values In The Array : "<<average<<endl;

    cout << "Enter The Row Number : ";
    cin >> row;

    rowtotal = getrowtotal(testdata, row - 1);
    cout <<"Total Of Row "<<row<<" Is : "<<rowtotal<<endl;

    highest_in_row = highest_value_of_row(testdata, row - 1);
    cout << "Highest value in this row : "<< highest_in_row << endl;

    lowest_in_row = lowest_value_of_row(testdata, row - 1);
    cout << "lowest value in this row : "<< lowest_in_row << endl;

    cout << "Enter The Column : ";
    cin >> column;

    columntotal = getcolumntotal(testdata, column - 1);
    cout <<"Total Of Given Column Is : "<< columntotal<<endl;

    //*********** 18 ***********/

    // playgame();

    //*********** 17 ***********/

    // string user_name;
    // cout << "Enter A Name : ";
    // cin >> user_name;
    // string findg, findb;

    // vector<string> boys_name;
    // vector<string> girls_name;

    // ifstream b_name("boysname.txt"), g_name("girlsname.txt");
    // for (int i = 0; i < 10; i++)
    // {
    //     b_name >> findb;
    //     g_name >> findg;
    //     boys_name.push_back(findb);
    //     girls_name.push_back(findg);
    // }
    // b_name.close();
    // g_name.close();
    // bool ac;

    // for (int i = 0; i < 10; i++)
    // {
    //     if (user_name == boys_name[i])
    //     {
    //         // cout<<user_name<<" Is A Popular Boys Name"<<endl;
    //         ac = true;
    //         break;
    //     }
    //     else if (user_name == girls_name[i])
    //     {
    //         // cout<<user_name<<" Is A Popular Girls Name"<<endl;
    //         ac = false;
    //         break;
    //     }
    //     else
    //     {
    //     }
    // }

    // if (ac == true)
    // {
    //     cout << user_name << " Is A Popular Boys Name" << endl;
    // }
    // else if (ac == false)
    // {
    //     cout << user_name << " Is A Popular Girls Name" << endl;
    // }
    // else
    // {
    //     cout << user_name << " Is not a popular boy or girl name";
    // }

    //*********** 16 ***********/

    // vector<string> teams, winners;
    // int count = 0;
    // string names, name_winner;
    // ifstream fin("teams.txt");
    // for (int i = 0; i < 4; i++)
    // {
    //     fin >> names;
    //     teams.push_back(names);
    // }
    // for (int i = 0; i < teams.size(); i++)
    // {
    //     cout << i + 1 << ". " << teams[i] << endl;
    // }
    // fin.close();
    // string user_selection;
    // cout << "Enter A Team Name From The Above : ";
    // cin >> user_selection;

    // ifstream fread("winners.txt");
    // for (int i = 0; i < 22; i++)
    // {
    //     if (i == 15 || i == 18)
    //     {
    //         continue;
    //     }
    //     fread >> name_winner;
    //     winners.push_back(name_winner);
    // }
    // fread.close();
    // for (int i = 0; i < winners.size(); i++)
    // {

    //     if (user_selection == winners[i])
    //     {
    //         count++;
    //     }
    // }
    // cout << "Number Of Time " << user_selection << " won World Cup : " << count << endl;

    //*********** 14 ***********/

    // const int size = 5;
    // int lottery[size];
    // int user[size];
    // int count = 0;
    // srand(time(0));
    // for (int i = 0; i < size; i++)
    // {
    //     lottery[i] = rand() % 9 + 0;
    //     cout << "Enter " << i + 1 << " Number : ";
    //     cin >> user[i];
    //     while (user[i] > 9 || user[i] < 0)
    //     {
    //         cout << "Numbers Between 0-9 are Accepted" << endl;
    //         cout << "Enter " << i + 1 << " Number Again : ";
    //         cin >> user[i];
    //     }

    //     if (lottery[i] == user[i])
    //     {
    //         count++;
    //     }
    // }
    // cout << "Lottery Numbers : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << lottery[i] << " ";
    // }
    // cout << endl;
    // cout << "User Numbers : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << user[i] << " ";
    // }
    // cout << endl;
    // cout << "Total Matched Digits : " << count << endl;
    // if (count == size)
    // {
    //     cout << "Grand Prize Winner!!" << endl;
    // }

    //*********** 12,13 ***********/

    // const int size = 5;
    // const int rows = 5;
    // const int column = 4;
    // string names[size];
    // char grade[size];
    // int scores[rows][column];
    // int lowest_scores[size];
    // int lowest = INT_MAX;
    // double total_scores[size];
    // double average[size];
    // double total = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     cout << "Name Of Student " << i + 1 << " : ";
    //     cin >> names[i];
    //     for (int j = 0; j < column; j++)
    //     {
    //         cout << "Test " << j + 1 << " Score : ";
    //         cin >> scores[i][j];
    //         while (scores[i][j] > 100 || scores[i][j] < 0)
    //         {
    //             cout << "Scores Can't Be More Than 100 & Less Than 0." << endl;
    //             cout << "Enter Again !" << endl;
    //             cout << "Test " << j + 1 << " Score : ";
    //             cin >> scores[i][j];
    //         }
    //         if (lowest > scores[i][j])
    //         {
    //             lowest = scores[i][j];
    //         }

    //         total += scores[i][j];
    //     }

    //     total_scores[i] = total;
    //     lowest_scores[i] = lowest;
    //     average[i] = (total / 400) * 100;

    //     if (average[i] >= 90)
    //     {
    //         grade[i] = 'A';
    //     }
    //     else if (average[i] >= 80)
    //     {
    //         grade[i] = 'B';
    //     }
    //     else if (average[i] >= 70)
    //     {
    //         grade[i] = 'C';
    //     }
    //     else if (average[i] >= 60)
    //     {
    //         grade[i] = 'D';
    //     }
    //     else
    //     {
    //         grade[i] = 'F';
    //     }

    //     total = 0;
    //     lowest = INT_MAX;
    //     cout << endl;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << i + 1 << ". " << names[i] << " : " << endl;
    //     cout << "Average : " << average[i] << endl;
    //     cout << "Grade : " << grade[i] << endl;
    //     cout << "Lowest Score of " << names[i] << " : " << lowest_scores[i] << endl;
    //     cout << endl;
    // }

    //*********** 11 ***********/

    // const int size = 10;
    // int wrong = 0;
    // double correct = 0;
    // char correct_answers[size];
    // char student_answers[size];
    // char wrong_answers[size];
    // char answers_of_wrong[size];
    // int wrong_question_no[size];
    // ifstream fin("correct-answers.txt"), sin("student-answers.txt");
    // for (int i = 0; i < size; i++)
    // {
    //     fin >> correct_answers[i];
    //     sin >> student_answers[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (student_answers[i] != correct_answers[i])
    //     {
    //         wrong_answers[wrong] = student_answers[i];
    //         answers_of_wrong[wrong] = correct_answers[i];
    //         wrong_question_no[wrong] = i + 1;
    //         wrong++;
    //     }
    //     else
    //     {
    //         correct++;
    //     }
    // }

    // cout << "Total Wrong Answers : " << wrong << endl;
    // cout << "Wrong Question Numbers : " << endl;
    // for (int i = 0; i < wrong; i++)
    // {
    //     cout << wrong_question_no[i] << " Student Ans : " << wrong_answers[i] << " Correct Ans : " << answers_of_wrong[i] << endl;
    // }
    // cout << endl;
    // int percentage = (correct / size) * 100;
    // cout << "Correct : " << correct << endl;
    // cout << "Percentage : " << percentage << "%" << endl;
    // if (percentage >= 70)
    // {
    //     cout << "PASSED" << endl;
    // }
    // else
    // {
    //     cout << "FAILED" << endl;
    // }

    //*********** 10 ***********/

    // const int size = 20;
    // int correct = 0;
    // int falsee = 0;
    // int incorrect_question_numbers[size];
    // char correct_answers[size] = {'a', 'd', 'b', 'b', 'c', 'b', 'a', 'b', 'c', 'd', 'a', 'c', 'd', 'b', 'd', 'c', 'c', 'a', 'd', 'b'};
    // char student_answer[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << i + 1 << ".";
    //     cin >> student_answer[i];
    //     while (student_answer[i] != 'a' && student_answer[i] != 'b' && student_answer[i] != 'c' && student_answer[i] != 'd')
    //     {
    //         cout << "Only Select a or b or c or d. Enter Agian" << endl;
    //         cout << i + 1 << ".";
    //         cin >> student_answer[i];
    //     }
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (student_answer[i] == correct_answers[i])
    //     {
    //         correct++;
    //     }
    //     else
    //     {
    //         falsee++;
    //         incorrect_question_numbers[i] = i + 1;
    //     }
    // }

    // if (correct >= 15)
    // {
    //     cout << "You Are Passed." << endl;
    //     cout << "Total Correct Answers : " << correct << endl;
    //     cout << "Total Wrong Answers : " << falsee << endl;

    //     cout << "Wrong Answer No : " << endl;
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (correct_answers[i] != student_answer[i])
    //         {
    //             cout << i + 1 << " ";
    //         }
    //     }
    // }
    // else
    // {
    //     cout << "You Are Failed." << endl;
    //     cout << "Total Correct Answers : " << correct << endl;
    //     cout << "Total Wrong Answers : " << falsee << endl;

    //     cout << "Wrong Answer No : " << endl;
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (correct_answers[i] != student_answer[i])
    //         {
    //             cout << i + 1 << " ";
    //         }
    //     }
    // }

    //*********** 9 ***********/

    // const int size = 7;
    // long empid[size] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    // int hours[size];
    // double payrate[size];
    // double wages[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Employee " << empid[i] << " Total Hours Worked : ";
    //     cin >> hours[i];
    //     while (hours[i] < 0)
    //     {
    //         cout << "Hours Must Be In Positive Numbers, Enter Again " << endl;
    //         cout << "Employee " << empid[i] << " Total Hours Worked : ";
    //         cin >> hours[i];
    //     }

    //     cout << "PayRate : ";
    //     cin >> payrate[i];
    //     while (payrate[i] < 15.0)
    //     {
    //         cout << "PayRate Must Be Greater Than 15, Enter Again " << endl;
    //         cout << "PayRate : ";
    //         cin >> payrate[i];
    //     }

    //     wages[i] = payrate[i] * hours[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "ID : " << empid[i] << "      Wage : " << wages[i] << endl;
    // }

    //*********** 8 ***********/

    // const int rows = 3;
    // const int coloumns = 3;

    // int chk_array[rows][coloumns];
    // cout << "Enter The Values In The Arrays" << endl;
    // cout << "We will Check If It Is Lu Shu Magic Square Or NOT " << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     cout << "Row " << i + 1 << " : " << endl;
    //     for (int j = 0; j < coloumns; j++)
    //     {
    //         cout << "Value " << j + 1 << " : ";
    //         cin >> chk_array[i][j];
    //     }
    //     cout << endl;
    // }

    // if (chk_lu_shu_magic_square(chk_array, rows))
    // {
    //     cout << "It Is A Lu Shu Magic Square" << endl;
    // }
    // else {
    //     cout << "It Is Not A Lu Shu Magic Square" << endl;

    // }

    //*********** 7 ***********/

    // const int size = 50;
    // int arr[size];
    // int lowest = INT_MAX;
    // int highest = INT_MIN;
    // int total = 0;
    // ifstream fin("array-numbers.txt");
    // for (int i = 0; i < size; i++)
    // {
    //     fin >> arr[i];
    //     if (lowest > arr[i])
    //     {
    //         lowest = arr[i];
    //     }
    //     if (highest < arr[i])
    //     {
    //         highest = arr[i];
    //     }
    //     total += arr[i];
    // }
    // fin.close();

    // cout << "Lowest : " << lowest << endl;
    // cout << "Highest : " << highest << endl;
    // cout << "Sum Of All Numbers In The Array : " << total << endl;
    // cout << "Average Of All Numbers In The Array : " << total / size << endl;

    //*********** 6 ***********/

    // const int month = 3;
    // const int days = 30;
    // char weather[month][days];
    // char z;
    // int countC = 0, month_countc = 0, month1_rdays = 0;
    // int countR = 0, month_countr = 0, month2_rdays = 0;
    // int countS = 0, month_counts = 0, month3_rdays = 0;
    //         ifstream fin("weather.txt");

    // for (int i = 0; i < month; i++)
    // {
    //     switch (i)
    //     {
    //     case 0:
    //         cout << "For Month June : " << endl;
    //         break;
    //     case 1:
    //         cout << "For Month July : " << endl;
    //         break;

    //     default:
    //         cout << "For Month August : " << endl;
    //         break;
    //     }

    //     cout << " R = Rainy Day" << endl;
    //     cout << " S = Sunny Day" << endl;
    //     cout << " C = Cloudy Day" << endl;
    //     cout << "Chose One From The Above : " << endl;

    //     for (int j = 0; j < days; j++)
    //     {
    //         cout << "Day " << j + 1 << " Weather : ";

    //         fin >> weather[i][j];
    //         if (cin.fail())
    //         {
    //             cin.clear();
    //             cin.ignore();
    //         }
    //         while ((weather[i][j] != 'r' && weather[i][j] != 'R') && (weather[i][j] != 's' && weather[i][j] != 'S') && (weather[i][j] != 'c' && weather[i][j] != 'C'))
    //         {
    //             cout << "Select R For Rain,S For Sunny or C For Cloudy Only" << endl;
    //             cin >> weather[i][j];
    //         }

    //         if ((weather[i][j] == 'c') || (weather[i][j] == 'C'))
    //         {
    //             countC++;
    //         }
    //         if ((weather[i][j] == 'r') || (weather[i][j] == 'R'))
    //         {
    //             countR++;
    //             if (i == 0)
    //             {
    //                 month1_rdays++;
    //             }
    //             else if (i == 1)
    //             {
    //                 month2_rdays++;
    //             }
    //             else
    //             {
    //                 month3_rdays++;
    //             }
    //         }
    //         if ((weather[i][j] == 's') || (weather[i][j] == 'S'))
    //         {
    //             countS++;
    //         }
    //     }
    //     cout << endl;
    // }
    // fin.close();

    // for (int i = 0; i < month; i++)
    // {
    //     switch (i)
    //     {
    //     case 0:
    //         cout << "For Month June : " << endl;
    //         break;
    //     case 1:
    //         cout << "For Month July : " << endl;
    //         break;

    //     default:
    //         cout << "For Month August : " << endl;
    //         break;
    //     }
    //     for (int j = 0; j < days; j++)
    //     {
    //         if ((weather[i][j] == 'c') || (weather[i][j] == 'C'))
    //         {
    //             cout << j + 1 << ".Cloudy Day   ";
    //         }
    //         if ((weather[i][j] == 'r') || (weather[i][j] == 'R'))
    //         {
    //             cout << j + 1 << ".Rainy Day   ";
    //         }
    //         if ((weather[i][j] == 's') || (weather[i][j] == 'S'))
    //         {
    //             cout << j + 1 << ".Sunny Day   ";
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << "Number Of Sunny Days : " << countS << endl;
    // cout << "Number Of Cloudy Days : " << countC << endl;
    // cout << "Number Of Rainy Days In June : " << month1_rdays << endl;
    // cout << "Number Of Rainy Days In July : " << month2_rdays << endl;
    // cout << "Number Of Rainy Days In August : " << month3_rdays << endl;
    // cout << "Total Number Of Rainy Days : " << countR << endl;

    //*********** 5 ***********/

    // int food[3][5];
    // int total = 0;
    // int least = INT_MAX;
    // int greatest = INT_MIN;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Monkey " << i + 1 << " : " << endl;
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "Food (in kg) On Day " << j + 1 << " : ";
    //         cin >> food[i][j];
    //         if (greatest < food[i][j])
    //         {
    //             greatest = food[i][j];
    //         }
    //         if (least > food[i][j])
    //         {
    //             least = food[i][j];
    //         }

    //         total += food[i][j];
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (least == food[i][j])
    //         {
    //             cout << "Monkey " << i + 1 << " Eaten Least Food During The Week, Which Is : " << food[i][j] << " Kg" << endl;
    //         }
    //         if (greatest == food[i][j])
    //         {
    //             cout << "Monkey " << i + 1 << " Eaten Greatest Food During The Week, Which Is : " << food[i][j] << " Kg" << endl;
    //         }
    //     }
    // }

    // cout << "Average Food Eaten During The Week By Each Monkey : " << total / 3 << " Kg" << endl;

    //*********** 4 ***********/

    // const int size = 10;
    // int arr[size];
    // int n;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter Value " << i + 1 << " : ";
    //     cin >> arr[i];
    // }

    // cout << "Enter A Number To Find All Greater Number In The Array : ";
    // cin >> n;
    // displaygreater(arr, size, n);

    //*********** 3 ***********/

    // const int size = 5;
    // string name[size] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    // int sold_jars[size];
    // double total = 0;
    // double highest = INT_MIN;
    // double lowest = INT_MAX;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Total Sold Jars Of " << name[i] << " : ";
    //     cin >> sold_jars[i];
    //     while (sold_jars[i] < 0)
    //     {
    //         cout << "Sold Jars Can Not Be In Negative Numbers." << endl;
    //         cout << "Enter Again Total Sold Jars Of " << name[i] << " : ";
    //         cin >> sold_jars[i];
    //     }

    //     if (highest < sold_jars[i])
    //     {
    //         highest = sold_jars[i];
    //     }
    //     if (lowest > sold_jars[i])
    //     {
    //         lowest = sold_jars[i];
    //     }
    //     total += sold_jars[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << name[i] << " Sold Jars : " << sold_jars[i] << endl;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     if (sold_jars[i] == highest)
    //     {
    //         cout << "Highest Sold Jars are " << name[i] << " : " << sold_jars[i] << endl;
    //     }
    //     if (sold_jars[i] == lowest)
    //     {
    //         cout << "Lowest Sold Jars are " << name[i] << " : " << sold_jars[i] << endl;
    //     }
    // }

    // cout << "Total Jars Sold : " << total << endl;

    //*********** 2 ***********/

    // const int size = 12;
    // double arr[size];
    // double average, total = 0, smallest = INT_MAX, largest = INT_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Month " << i + 1 << " Rain Fall : ";
    //     cin >> arr[i];
    //     while (arr[i] < 0)
    //     {
    //         cout << "RainFall Can Not Be In Negative Numbers." << endl;
    //         cout << "Enter Again Month " << i + 1 << " Rain Fall : ";
    //         cin >> arr[i];
    //     }

    //     if (largest < arr[i])
    //     {
    //         largest = arr[i];
    //     }
    //     if (smallest > arr[i])
    //     {
    //         smallest = arr[i];
    //     }
    //     total += arr[i];
    // }

    // cout << "Highest : " << largest << endl;
    // cout << "Lowest : " << smallest << endl;

    // cout << "Total RainFall : " << total << endl;
    // cout << "Average RainFall Each Month : " << total / size << endl;

    // /*********** 1 ***********/

    // const int size = 10;
    // double arr[size];
    // double largest = INT_MIN;
    // double smallest = INT_MAX;

    // for (int i = 0; i < size; i++)
    // {
    //     if (cin.fail())
    //     {
    //         cin.clear();
    //         cin.ignore();
    //     }
    //     cout << "Enter Value " << i + 1 << " : ";
    //     cin >> arr[i];
    //     if (largest < arr[i])
    //     {
    //         largest = arr[i];
    //     }
    //     if (smallest > arr[i])
    //     {
    //         smallest = arr[i];
    //     }
    // }
    // cout << "Largest Value : " << largest << endl;
    // cout << "smallest Value : " << smallest << endl;

    //***********PROGRAMMING CHALLENGES***************/

    // float values[10][20];
    // float total = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 20; j++)
    //     {
    //         values[i][j] = j*2;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 20; j++)
    //     {
    //         cout << values[i][j] << " ";
    //         total += values[i][j];
    //     }
    //     cout << endl;
    //     cout<<"Row "<<i+1<<" Total : "<<total<<endl;
    //     cout<<endl;
    //     total=0;
    // }
    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout<<values[j][i]<<endl;
    //         total += values[j][i];
    //     }
    //     cout << endl;
    //     cout << "coloumn " << i + 1 << " Total : " << total << endl;
    //     cout << endl;
    //     total = 0;
    // }

    // int numberarray[9][11];
    // numberarray[0][0] = 145;
    // numberarray[9][11] = 18;
    // cout << numberarray[0][0]<<endl;
    // cout << numberarray[9][11]<<endl;

    // const int size=3;
    // string country[size];
    // int Population[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Country "<<i+1<<" Name : ";
    //     cin>>country[i];
    //     cout<<"Its Poulation : ";
    //     cin>>Population[i];

    // }
    // cout<<fixed<<setprecision(1)<<showpoint;

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<country[i]<<"     : "<<setw(12)<<Population[i]<<endl;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Employee "<<i+1<<" ID : "<<employees[i]<<" Gross Pay : "<<gross_pay[i]<<endl;
    // }

    // int numberarray1[100];
    // int numberarray2[100];
    // for (int i = 0; i < 100; i++)
    // {
    //     numberarray1[i] = (i + 1) * 2;
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     numberarray2[i] = numberarray1[i];
    // }

    // for (int i = 0; i < 100; i++)
    // {

    //     numberarray1[i] = (i + 1) * 2;
    //     cout << "Array 1 : " << i + 1 << " = " << numberarray1[i] << "    Array 2 : " << i + 1 << " = " << numberarray2 [i]<< endl;
    // }

    // cout<<"Range Based For Loop"<<endl;

    // for(int values : names){
    //     cout<<values<<endl;
    // }

    // int arr[3][5];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter Values In Row " << i + 1 << " : " << endl;
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "Column " << j + 1 << " : " << endl;
    //         cin >> arr[i][j];
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << arr[i][j];
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}