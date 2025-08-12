#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <iomanip>
#include <conio.h>
#include <vector>
using namespace std;

//**************** 3 ***************/
// void display(ifstream &jokeline)
// {
//     string input;
//     while (!jokeline.eof())
//     {
//         getline(jokeline, input);
//         cout << input << endl;
//     }
// }

// void showpunchline(ifstream &punchline)
// {
//     vector<string> lines;
//     string line;

//     while (!punchline.eof())
//     {
//         getline(punchline, line);
//         lines.push_back(line);
//     }
//     int i = lines.size();
//     cout << "PUNCHLINE : " << endl;
//     cout << lines[i-1] << endl;
// }

//**************** 4 ***************/

// void displaylastlines(ifstream &file)
// {
//     int i = 0;
//     if (!file)
//     {
//         cout << "Error Opening file." << endl;
//     }
//     else
//     {

//         vector<string> lines;
//         string line;
//         while (!file.eof())
//         {
//             getline(file, line);
//             lines.push_back(line);
//         }
//         int size = lines.size();
//         if (size < 10)
//         {
//             while (i != lines.size())
//             {
//                 cout <<i+1<<" : "<< lines[i] << endl;
//                 i++;
//             }
//             cout<<"Entire File Has Been Displayed."<<endl;
//         }
//         else
//         {
//             size -= 10;
//             i=1;

//             while (size != lines.size())
//             {
//                 cout <<i<<" : "<< lines[size] << endl;
//                 ;
//                 size++;
//                 i++;
//             }
//         }
//     }
// }

//**************** 8 ***************/

// void arraytofile(string &name, int *array, int size)
// {
//     ofstream file(name, ios::binary);
//     for (int i = 0; i < size; i++)
//     {
//         file << array[i] << endl;
//     }
// }
// void filetoarray(string &name, int *array, int size)
// {
//     ifstream file(name, ios::binary);
//     for (int i = 0; i < size; i++)
//     {
//         file >> array[i];
//     }
// }

//**************** 11 ***************/
// struct division
// {
//     string name[4] = {"East", "West", "North", "South"};
//     int *quarter;
//     double *sales;
// };

//**************** 13 ***************/

struct items
{
    string discription;
    int no_of_items;
    double whole_sale_cost;
    double retail_cost;
    string date;
};

int main()
{
    //**************** 13 ***************/

    const int size = 5;
    int choice;
    items it[size] = {{"Hand Gripper", 11, 2.20, 3.20, "12/1/2001"}, {"Arm Gripper", 9, 4.12, 6.32, "21/11/2014"}};

    int count = 0;
    string key;
    int index;
    count++;
    count++;

    do
    {
        cout << "1. Add New Record." << endl;
        cout << "2. Display Any Record." << endl;
        cout << "3. Change Any Record." << endl;
        cout << "4. Exit Program." << endl;
        cout << "Chose Any Option (1-4) : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin.ignore();
            cout << "\nEnter Item " << count + 1 << " Details : " << endl;
            cout << "Item Discription : ";
            getline(cin, it[count].discription);
            cout << "Quantity Availible : ";
            cin >> it[count].no_of_items;
            cout << "Whole Sale Cost : ";
            cin >> it[count].whole_sale_cost;
            cout << "Retail Cost : ";
            cin >> it[count].retail_cost;
            cout << "Date : ";
            cin.ignore();
            getline(cin, it[count].date);
            count++;
            break;

        case 2:

            cout << "Enter Discription Of Item You Want To Display : ";
            cin.ignore();
            getline(cin, key);

            for (int i = 0; i < size; i++)
            {
                if (it[i].discription == "")
                {
                    break;
                }

                else if (it[i].discription.find(key) != string::npos)
                {
                    cout << "\nItem " << i + 1 << " Details : " << endl;
                    cout << "Item Discription : "
                         << it[i].discription << endl;
                    cout << "Quantity Availible : "
                         << it[i].no_of_items << endl;
                    cout << "Whole Sale Cost : "
                         << it[i].whole_sale_cost << endl;
                    cout << "Retail Cost : "
                         << it[i].retail_cost << endl;
                    cout << "Date : "
                         << it[i].date << endl;
                }
            }

            break;
        case 3:
            cout << "Enter The Discription Of Item You Want To Change Details : ";
            cin.ignore();
            getline(cin, key);

            for (int i = 0; i < size; i++)
            {
                if (it[i].discription == "")
                {
                    break;
                }

                else if (it[i].discription.find(key) != string::npos)
                {
                    cout << "\nEnter Item " << i + 1 << "New  Details : " << endl;
                    cout << "Item Discription : ";
                    getline(cin, it[i].discription);
                    cout << "Quantity Availible : ";
                    cin >> it[i].no_of_items;
                    cout << "Whole Sale Cost : ";
                    cin >> it[i].whole_sale_cost;
                    cout << "Retail Cost : ";
                    cin >> it[i].retail_cost;
                    cout << "Date : ";
                    cin.ignore();
                    getline(cin, it[i].date);
                }
            }
            break;

        case 4:
            cout << "Exiting Program!!!" << endl;
            return 0;
        default:
            cout << "Invalid Choice, Try Again." << endl;
            break;
        }

    } while (choice != 4);

    //**************** 11 ***************/

    // division d;
    // d.quarter = new int[4];
    // d.sales = new double[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << d.name[i] << " Division Sales : " << endl;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "Quarter " << j + 1 << " Sales : ";
    //         cin >> d.sales[i];
    //         d.quarter[i] = i + 1;
    //     }
    // }

    // ofstream file("chap12q1.txt");

    // for (int i = 0; i < 4; i++)
    // {
    //     file << d.name[i] << " Division Sales : " << endl;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         file << "Quarter " << j + 1 << " Sales : " << d.sales[i] << endl;
    //     }
    // }

    //**************** 9,10 ***************/

    // ifstream file1("file1.txt");
    // ofstream file2("file2.txt");
    // char ch;
    // int size, count = 0;
    // file1.seekg(0, ios::end);
    // size = file1.tellg();
    // file1.seekg(0, ios::beg);

    // while (size != count)
    // {
    //     file1.get(ch);
    //     file2.put(ch + 10);
    //     count++;
    // }
    // file1.close();
    // file2.close();
    // count = 0;
    // ifstream file3("file2.txt");
    // ofstream file4("chap12q1.txt");
    // char ch2;
    // if (!file3)
    // {
    //     cout << "error" << endl;
    //     return 0;
    // }
    // if (!file4)
    // {
    //     cout << "error" << endl;
    //     return 0;
    // }

    // while (count != size)
    // {
    //     file3.get(ch);
    //     file4.put(ch - 10);
    //     count++;
    // }

    // ifstream file3("file2.txt");
    // string input;
    // while (!file3.eof())
    // {
    //     getline(file3,input);
    //     cout<<input<<endl;
    // }

    //**************** 8 ***************/

    // string file_name = "chap12q1.txt";
    // const int size = 5;
    // int array[5] = {12, 43, 67, 24, 91}, array1[size];
    // arraytofile(file_name, array, size);
    // filetoarray(file_name, array1, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << array1[i] << endl;
    // }

    //**************** 7 ***************/

    // string name1;
    // string name2;
    // cout << "File 1 Name : ";
    // cin >> name1;
    // cout << "File 2 Name : ";
    // cin >> name2;
    // ifstream file1(name1);
    // ofstream file2(name2);
    // char ch;
    // bool newsentence = true;
    // while (!file1.eof())
    // {
    //     file1.get(ch);
    //     if (newsentence && isalpha(ch))
    //     {
    //         file2.put(toupper(ch));
    //         newsentence = false;
    //     }
    //     else
    //     {
    //         file2.put(ch);
    //     }
    //     if (ch == '.')
    //     {
    //         newsentence = true;
    //     }
    // }

    //**************** 6 ***************/

    // string name;
    // string key;
    // string line;
    // int linenumber=0;
    // int count = 0;
    // cout<<"Enter The Name Of File : ";
    // cin>>name;
    // cin.ignore();
    // cout<<"Enter The String You Want To Search : ";
    // getline(cin,key);
    // ifstream file(name);
    // if (!file)
    // {
    //     cout << "Error Opening File." << endl;
    // }
    // else
    // {
    //     while (!file.eof())
    //     {
    //         getline(file, line);
    //         linenumber++;
    //         if (line.find(key)!=string::npos)
    //         {
    //             cout << "Found in Line : " <<linenumber<< endl;
    //             count++;
    //         }
    //     }
    // }

    // cout<<"String Appeared "<<count<<" Times."<<endl;

    //**************** 4 ***************/

    // string name;
    // cout << "Enter The Name Of File : ";
    // cin >> name;
    // ifstream file(name);
    // displaylastlines(file);

    //**************** 3 ***************/

    // ifstream jokeline("joke.txt");
    // display(jokeline);
    // ifstream punchline("punchline.txt");
    // showpunchline(punchline);

    //**************** 2,5 ***************/

    // string name;
    // cout << "Enter The Name Of File: ";
    // cin >> name;
    // fstream file;
    // string input;
    // int count = 0;
    // file.open(name, ios::in);
    // if (!file)
    // {
    //     cout << "Error opening File." << endl;
    // }
    // else
    // {

    //     while (!(file.eof()))
    //     {
    //         count++;
    //         getline(file, input);
    //         cout << count << " : " << input << endl;
    //         if (count % 4 == 0)
    //         {
    //             cout << "Press Any Key To Show Next Four Lines." << endl;
    //             getch();
    //         }
    //     }
    // }

    //**************** 1 ***************/

    // string name;
    // cout << "Enter The Name Of File : ";
    // cin >> name;
    // fstream head(name, ios::in);
    // if (!head)
    // {
    //     cout << "File Does Not Exsits." << endl;
    // }
    // else
    // {

    //     for (int i = 0; i < 10; i++)
    //     {

    //         if (head.eof())
    //         {
    //             cout << "Entire File Has Been Displayed." << endl;
    //             break;
    //         }
    //         else
    //         {
    //             getline(head, name);
    //             cout << name << endl;
    //         }
    //         name.clear();
    //     }
    // }
    return 0;
}