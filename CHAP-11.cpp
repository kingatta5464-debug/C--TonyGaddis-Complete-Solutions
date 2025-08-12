#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

//**************** 1,2 *****************/

// struct moviedata
// {
//     string title;
//     string director;
//     int released_year;
//     float duration;
//     long production_cost;
//     long first_year_revenue;
// };

// void display(moviedata m)
// {
//     cout << "Title : " << m.title << endl;
//     cout << "Director : " << m.director << endl;
//     cout << "Released Year : " << m.released_year << endl;
//     cout << "Duration : " << m.duration << " Minutes" << endl;
//     cout << "Production Cost : " << m.production_cost << "CR IR" << endl;
//     int profit = m.first_year_revenue - m.production_cost;
//     if (profit > 0)
//     {

//         cout << "First year Profit : " << profit << " CR INDR" << endl;
//     }
//     else
//     {
//         cout << "First year Loss : " << profit << " CR INDR" << endl;
//     }

//     cout << "_________________________________" << endl;
// }

//**************** 3 *****************/

// struct division
// {
//     string name;
//     double firstquartersales;
//     double secondquartersales;
//     double thirdquartersales;
//     double fourthquartersales;
//     double total = 0;
//     double average;
// };

// void inputdata(division &d)
// {
//     cout << "Enter Name Of The Division : ";
//     cin.ignore();
//     getline(cin, d.name);
//     do
//     {
//         cout << "First Quarter  Sales? : ";
//         cin >> d.firstquartersales;
//         if (d.firstquartersales < 0)
//         {
//             cout << "Sales Can Not Be In Negative Numbers , Try Again." << endl;
//         }

//     } while (d.firstquartersales < 0);

//     do
//     {
//         cout << "First Quarter  Sales? : ";
//         cin >> d.secondquartersales;
//         if (d.secondquartersales < 0)
//         {
//             cout << "Sales Can Not Be In Negative Numbers , Try Again." << endl;
//         }

//     } while (d.secondquartersales < 0);
//     do
//     {
//         cout << "First Quarter  Sales? : ";
//         cin >> d.thirdquartersales;
//         if (d.thirdquartersales < 0)
//         {
//             cout << "Sales Can Not Be In Negative Numbers , Try Again." << endl;
//         }

//     } while (d.thirdquartersales < 0);
//     do
//     {
//         cout << "First Quarter  Sales? : ";
//         cin >> d.fourthquartersales;
//         if (d.fourthquartersales < 0)
//         {
//             cout << "Sales Can Not Be In Negative Numbers , Try Again." << endl;
//         }

//     } while (d.fourthquartersales < 0);

//     d.total=d.firstquartersales+d.secondquartersales+d.thirdquartersales+d.fourthquartersales;
//     d.average=d.total/4.0;
// }
// void display(division d){
//     cout<<"Sales of Division "<<d.name<<" : "<<endl;
//     cout<<"Total Sales : "<<d.total<<endl;
//     cout<<"Average Sales In Each Quarter Of Year : "<<d.average<<endl;
// }

//**************** 4 *****************/

// struct weather
// {
//     double total_rainfall = 0;
//     double high_temperature;
//     double low_temperature;
//     double average_temperature;
// };
// enum months {JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER};
// void datainput(weather w[])
// {
//     for (int i = 0; i < 12; i++)
//     {
//         cout << "Total Rain-Fall In Month " << i + 1 << " : ";
//         cin >> w[i].total_rainfall;
//         do
//         {

//             cout << "Highest Temperature In Month " << i + 1 << " : ";
//             cin >> w[i].high_temperature;

//             if (w[i].high_temperature < -100 || w[i].high_temperature > 140)
//             {
//                 cout << "Temperature Can Not Be More Than 140F and Less Than -100F, Try Again" << endl;
//             }

//         } while (w[i].high_temperature < -100 || w[i].high_temperature > 140);

//         do
//         {
//             cout << "Lowest Temperature In Month " << i + 1 << " : ";
//             cin >> w[i].low_temperature;
//             if (w[i].low_temperature < -100 || w[i].low_temperature > 140)
//             {
//                 cout << "Temperature Can Not Be More Than 140F and Less Than -100F, Try Again" << endl;
//             }
//         } while (w[i].low_temperature < -100 || w[i].low_temperature > 140);

//         w[i].average_temperature = (w[i].high_temperature + w[i].low_temperature) / 2;
//     }
// }
// void display(weather w[])
// {
//     double totalrainfall = 0;
//     double highest_temp = INT_MIN;
//     double lowest_temp = INT_MAX;
//     int indexl;
//     int indexh;
//     double total_average_temp = 0;
//     for (int i = 0; i < 12; i++)
//     {
//         cout << "Average Rain-Fall In Month " << i + 1 << " : ";
//         cout << w[i].average_temperature << " cm" << endl;
//         totalrainfall += w[i].total_rainfall;
//         total_average_temp += w[i].average_temperature;
//         if (lowest_temp > w[i].low_temperature)
//         {
//             lowest_temp = w[i].low_temperature;
//             indexl = i + 1;
//         }
//         if (highest_temp < w[i].high_temperature)
//         {
//             highest_temp = w[i].high_temperature;
//             indexh = i + 1;
//         }
//     }
//     cout << "Total Rain-Fall Of The Year : " << totalrainfall << endl;
//     cout << "Highest Temperature Of The Year was : " << highest_temp << " Fahrenheit In The Month " << indexh << "." << endl;
//     cout << "Lowest Temperature Of The Year was : " << lowest_temp << " Fahrenheit In The Month " << indexl << "." << endl;
//     cout << "Average Of All Monthly Average Temperatures : " << total_average_temp / 12.0;
// };

//**************** 6 *****************/

// struct player
// {
//     string name;
//     int number;
//     int points;
// };

//**************** 7 *****************/

// struct account
// {
//     string name;
//     string address;
//     string number;
//     double balance;
//     string lastpaymentdate;
// };

// void datainput(account customer[], int size)
// {
//     cin.ignore();
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter The CUSTOMER " << i + 1 << " Details " << endl;
//         cout << "Name : ";
//         getline(cin, customer[i].name);
//         cout << "Address : ";
//         getline(cin, customer[i].address);
//         cout << "Number : ";
//         getline(cin, customer[i].number);

//         do
//         {
//             cout << "Balance : ";
//             cin >> customer[i].balance;
//             if (customer[i].balance < 0)
//             {
//                 cout << "Account balance cannot be negative. Please re-enter.\n";
//             }

//         } while (customer[i].balance < 0);
//         cin.ignore();
//         cout << "Last Payment Date : ";
//         getline(cin, customer[i].lastpaymentdate);
//     }
// }

// int findcustomer(account customer[], int size, string &name)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if ((customer[i].name) == name)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// void modifydata(account customer[], int size)
// {
//     cin.ignore();
//     string name;
//     cout << "Enter The Name Of Customer Whose Data You Want To Update : ";
//     getline(cin, name);
//     int index = findcustomer(customer, size, name);
//     if (index == -1)
//     {
//         cout << "Given Does Not Match With Any Customer." << endl;
//         return;
//     }
//     else
//     {
//         cout << "Updating The Data Of Customer " << customer[index].name << endl;
//         string input;
//         cout << "New Name : ";
//         getline(cin, input);
//         if (!(input.empty()))
//         {
//             customer[index].name = input;
//         }
//         cout << "New Address : ";
//         getline(cin, input);
//         if (!(input.empty()))
//         {
//             customer[index].address = input;
//         }
//         cout << "New Number : ";
//         getline(cin, input);
//         if (!(input.empty()))
//         {
//             customer[index].number = input;
//         }

//         int balance;
//         do
//         {
//             cout << "New Balance : ";
//             cin >> balance;
//             if (balance < 0)
//             {
//                 cout << "Balance Can Not Be In Negative Numbers" << endl;
//             }

//         } while (balance < 0);
//         customer[index].balance = balance;
//         cin.ignore();

//         cout << "New Last Payment Date : ";
//         getline(cin, input);
//         if (!(input.empty()))
//         {
//             customer[index].lastpaymentdate = input;
//         }
//     }
// }

// void display(account a[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << "     CUSTOMER " << i + 1 << endl;
//         cout << "Name : " << a[i].name << endl;
//         cout << "Address : " << a[i].address << endl;
//         cout << "Number : " << a[i].number << endl;
//         cout << "Balance : " << a[i].balance << endl;
//         cout << "Last Payment Date : " << a[i].lastpaymentdate << endl;
//     }
// }

//**************** 9,10 *****************/

// struct speaker
// {
//     string name;
//     string number;
//     string topic;
//     double fee;
// };

// void display(const speaker s[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (s[i].name != "")
//         {
//             cout << "SPEAKER " << i + 1 << endl;
//             cout << "Name : " << s[i].name << endl;
//             cout << "Number : " << s[i].number << endl;
//             cout << "Speaking Topic : " << s[i].topic << endl;
//             cout << "Fee Required : " << s[i].fee << "$" << endl;
//             cout << "_____________________" << endl;
//         }
//     }
// }

// void inputdata(speaker s[], int size)
// {
//     char exit;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter SPEAKER " << i + 1 << " Contents " << endl;
//         cin.ignore();
//         cout << "Name? : ";
//         getline(cin, s[i].name);
//         cout << "Number? : ";
//         getline(cin, s[i].number);
//         cout << "Topic? : ";
//         getline(cin, s[i].topic);

//         do
//         {
//             cout << "Fee Required? : ";
//             cin >> s[i].fee;

//             if (s[i].fee < 0)
//             {
//                 cout << "Fee Can Not Be In Negative Numbers" << endl;
//                 cout << "Try Again!" << endl;
//             }

//         } while (s[i].fee < 0);

//         cout << "Want To Enter An Other Entry? (Y/N)";
//         cin >> exit;
//         if (tolower(exit) == 'n')
//         {
//             break;
//         }
//     }

//     display(s, size);
// }

// void lower_case(string &name)
// {
//     for (int i = 0; i < name.length(); i++)
//     {
//         name[i] = tolower(name[i]);
//     }
// }

// int findspeaker(const speaker s[], int size, string &name)
// {
//     string name2;
//     lower_case(name);
//     for (int i = 0; i < size; i++)
//     {
//         name2 = s[i].name;
//         lower_case(name2);
//         if (name2 == name)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// void modifydata(speaker s[], int size)
// {
//     cin.ignore();
//     string name;
//     cout << "Enter The Speaker Name Whose Data You Want To Modify : ";
//     getline(cin, name);
//     int index = findspeaker(s, size, name);
//     if (index == -1)
//     {
//         cout << "This Speaker Is Not Present In The Directory." << endl;
//     }
//     else
//     {
//         string newinput;
//         cout << "New Name : ";
//         getline(cin, newinput);
//         if (!(newinput.empty()))
//         {
//             s[index].name = newinput;
//         }
//         cout << "New Number : ";
//         getline(cin, newinput);
//         if (!(newinput.empty()))
//         {
//             s[index].number = newinput;
//         }
//         cout << "New Topic : ";
//         getline(cin, newinput);
//         if (!(newinput.empty()))
//         {
//             s[index].topic = newinput;
//         }
//         int fee;
//         do
//         {
//             cout << "New Required Fee : ";
//             cin >> fee;
//             if (fee < 0)
//             {
//                 cout << "Fee Can Not Be In Negative Numbers." << endl;
//                 cout << "Try Again!" << endl;
//             }
//             else
//             {
//                 s[index].fee = fee;
//             }

//         } while (fee < 0);

//         display(s, size);
//     }
// }

// void searchbytopic(const speaker s[], int size)
// {
//     string keyword;
//     cin.ignore();
//     cout << "Enter The Topic Name You Want To Search : ";
//     getline(cin, keyword);
//     bool found = false;
//     for (int i = 0; i < size; i++)
//     {
//         if (s[i].topic.find(keyword) != string::npos)
//         {
//             cout << "SPEAKER " << i + 1 << endl;
//             cout << "Name : " << s[i].name << endl;
//             cout << "Number : " << s[i].number << endl;
//             cout << "Speaking Topic : " << s[i].topic << endl;
//             cout << "Fee Required : " << s[i].fee << "$" << endl;
//             cout << "_____________________" << endl;
//             found = true;
//         }
//     }
//     if (!found)
//     {
//         cout << "No speakers found with the topic: " << keyword << endl;
//     }
// }

//**************** 11 *****************/

// struct budgetcalculator
// {
//     double housing, utilities, houshold_expenses, transportation, food, medical, insurance, entertainment, clothing, miscellaneous;
// };

// void inputdata(budgetcalculator &e)
// {
//     cout << "Enter Spent Money In Each Category In One Month" << endl;
//     cout << "Housing : $";
//     cin >> e.housing;
//     cout << "Utilities : $";
//     cin >> e.utilities;
//     cout << "Houshold Expenses : $";
//     cin >> e.houshold_expenses;
//     cout << "Transportation : $";
//     cin >> e.transportation;
//     cout << "Food : $";
//     cin >> e.food;
//     cout << "Medical : $";
//     cin >> e.medical;
//     cout << "Insurance : $";
//     cin >> e.insurance;
//     cout << "Entertainment : $";
//     cin >> e.entertainment;
//     cout << "Clothing : $";
//     cin >> e.clothing;
//     cout << "Miscellaneous : $";
//     cin >> e.miscellaneous;
// }

// void situationofbudget(const budgetcalculator b, const budgetcalculator e)
// {
//     double total_budget = 0;
//     double total_expenses = 0;
//     double difference;
//     string category[] = {"Housing", "Utilities", "Household Expenses", "Transportation",
//                          "Food", "Medical", "Insurance", "Entertainment", "Clothing", "Miscellaneous"};
//     double budgetvalues[] = {b.housing, b.utilities, b.houshold_expenses, b.transportation, b.food, b.medical, b.insurance, b.entertainment, b.clothing, b.miscellaneous};
//     double expensesvalues[] = {e.housing, e.utilities, e.houshold_expenses, e.transportation, e.food, e.medical, e.insurance, e.entertainment, e.clothing, e.miscellaneous};

//     cout<<"\n\nBUDGET REPORT\n";

//     for (int i = 0; i < 10; i++)
//     {
//         total_budget += budgetvalues[i];
//         total_expenses += expensesvalues[i];
//         difference = budgetvalues[i] - expensesvalues[i];
//         cout << category[i] ;
//         if (difference > 0)
//             cout << " Under budget by $" << difference << endl;
//         else if (difference < 0)
//             cout << " Over budget by $" << -difference << endl;
//         else
//             cout << " Exactly on budget" << endl;
//     }

//     cout << "Total Budget : $" << total_budget << endl;
//     cout << "Total Expenses : $" << total_expenses << endl;
//     difference = total_budget - total_expenses;
//     if (difference < 0)
//     {
//         cout << " You Are OVER Budget By $" << -difference << endl;
//     }
//     else if (difference > 0)
//     {
//         cout << " You Are UNDER Budget By $" << difference << endl;
//     }
//     else
//     {
//         cout << " You Are Exactly On Budget" << endl;
//     }
// }

//**************** 12 *****************/

// struct students
// {
//     string name;
//     string idnum;
//     int *tests;
//     double average;
//     char grade;
// };

// void inputdata(students *s, int numstudents, int numtests)
// {

//     double total_scores = 0;

//     for (int i = 0; i < numstudents; i++)
//     {
//         s[i].tests=new int[numtests];
//         cout << "Student " << i + 1 << endl;
//         cout << "Name : ";
//         cin.ignore();
//         getline(cin, s[i].name );
//         cout << "ID Number : ";
//         getline(cin, s[i].idnum );
//         cout << " TEST SCORES " << endl;
//         for (int j = 0; j < numtests; j++)
//         {
//             cout << "Test " << j + 1 << " Scores : ";
//             cin >> s[i].tests[j];
//             total_scores += s[i].tests[j];
//         }
//         s[i].average = total_scores / numstudents;

//         if (s[i].average >= 90)
//         {
//             s[i].grade = 'A';
//         }
//         else if (s[i].average >= 80)
//         {
//             s[i].grade = 'B';
//         }
//         else if (s[i].average >= 70)
//         {
//             s[i].grade = 'C';
//         }
//         else if (s[i].average >= 60)
//         {
//             s[i].grade = 'D';
//         }
//         else if (s[i].average < 60)
//         {
//             s[i].grade = 'F';
//         }
//         total_scores=0;
//     }
// }

// void display(const students *s, int numstudents, int numtests)
// {
//     for (int i = 0; i < numstudents; i++)
//     {
//         cout << " STUDENT " << i + 1 << endl;
//         cout << "Name : " << s[i].name << endl;
//         cout << "Id Number : " << s[i].idnum << endl;
//         cout << "Test Scores : " << endl;
//         for (int j = 0; j < numstudents; j++)
//         {
//             cout << "Test " << j + 1 << " : " << s[i].tests[j] << endl;
//         }
//         cout << "Average : " << s[i].average << endl;
//         cout << "Grade : " << s[i].grade << endl;
//     }
// }

//**************** 13 *****************/

// struct drink_machine
// {
//     string name;
//     double cost;
//     int no_of_drinks;
// };
// void display(const drink_machine d[], int size)
// {
//     cout << left << setw(15) << "DRINK NAME" << setw(10) << "COST" << setw(20) << "REMAINING IN MACHINE" << endl;
//     for (size_t i = 0; i < size; i++)
//     {
//         cout << left << setw(15) << d[i].name << setw(10) << d[i].cost << setw(20) << d[i].no_of_drinks << endl;
//     }
// }

//**************** 14 *****************/

struct bins
{
    string part_discription;
    int no_of_parts_in_bin;
};

void display(const bins b[], int size)
{
    cout << left << setw(5) << "PN" << left << setw(30) << "Part Discription" << left << setw(15) << "Parts In Bin" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << left << setw(5) << i + 1 << left << setw(30) << b[i].part_discription << left << setw(15) << b[i].no_of_parts_in_bin << endl;
    }
}

void addparts(bins b[], int choice, int size)
{
    int parts;
    cout << "No. Of Parts You Want To Add? : ";
    cin >> parts;
    if ((b[choice].no_of_parts_in_bin + parts) > 30)
    {
        cout << "A Bin Can Not Hold More Than 30 Parts." << endl;
        cout << "This Bin Has " << b[choice].no_of_parts_in_bin << " Parts In It, Now You Can Only Add " << 30 - b[choice].no_of_parts_in_bin << endl;
    }
    else
    {
        b[choice].no_of_parts_in_bin += parts;
        display(b, size);
    }
}
void removeparts(bins b[], int choice, int size)
{
    int parts;
    cout << "No. Of Parts You Want To Remove? : ";
    cin >> parts;
    if (b[choice].no_of_parts_in_bin == 0)
    {
        cout << "You Can Not Remove Parts Fron Bin " << choice + 1 << " Because It Is Already Empty." << endl;
        cout << "Chose An Other Bin." << endl;
    }
    else if (b[choice].no_of_parts_in_bin < parts)
    {
        cout << "In This Bin Only " << b[choice].no_of_parts_in_bin << " Were Present." << endl;
        b[choice].no_of_parts_in_bin -= b[choice].no_of_parts_in_bin;
        cout << "We Removed Them." << endl;
    }

    else
    {
        b[choice].no_of_parts_in_bin -= parts;
    }
}

int main()
{
    //**************** 14 *****************/
    const int size = 10;
    int choice2;
    int add, remove, choice;
    bins b[size] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vaccum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12},
    };

    do
    {

        cout<<"\n\nOPERATIONS ON INVENTORY BINS IN A WAREHOUSE"<<endl<<endl;

        cout << "1. Addition" << endl;
        cout << "2. Removal" << endl;
        cout << "3. Exit Program" << endl;
        cout << "Which Operation You Want To Perform? (1/2) : " << endl;
        cin >> choice2;

        switch (choice2)
        {
        case 1:

            display(b, size);
            do{
            cout << "In Which Bin You Want To Add? : ";
            cin >> choice;
            if (choice>10 || choice<1)
            {
                cout<<"Only Chose From 1-10"<<endl;
            }
            
            }while(choice>10 || choice<1);
            addparts(b, choice - 1, size);
            break;
        case 2:
         display(b, size);
            do{
            cout << "From Which Bin You Want To Remove? : ";
            cin >> choice;
            if (choice>10 || choice<0)
            {
                cout<<"Only Chose From 1-10"<<endl;
            }
            
            }while(choice>10 || choice<0);
            removeparts(b, choice - 1, size);
            break;

        case 3:
            cout << "Exiting Program." << endl;
            return 0;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }

    } while (true);

    //**************** 13 *****************/
    // const int size = 5;

    // drink_machine drinks[size] = {
    //     {"Cola", 0.75, 20},
    //     {"Root Beer", 0.75, 20},
    //     {"Lemon-Lime", 0.75, 20},
    //     {"Grape Soda", 0.80, 20},
    //     {"Cream Soda", 0.80, 20},
    // };

    // double machine_earning = 0;
    // double returned_amount;

    // int choice;

    // do
    // {
    //     display(drinks, size);
    //     cout << "\n1. Pick A Drink" << endl;
    //     cout << "2. Quit The Program" << endl;
    //     cout << "Chose One Optin : ";
    //     cin >> choice;
    //     switch (choice)
    //     {
    //     case 1:
    //         double enter_amount;
    //         do
    //         {

    //             cout << "Enter The Amount(not more than $1.00) : $";
    //             cin >> enter_amount;
    //             if (enter_amount > 1.0 || enter_amount <= 0)
    //             {
    //                 cout << "Amount Can Not Be More Than $1.0 or Less Than &0" << endl;
    //             }

    //         } while (enter_amount > 1.0 || enter_amount <= 0);
    //         int choice2;
    //         cout << "1. Cola" << endl;
    //         cout << "2. Root Beer" << endl;
    //         cout << "3. Lemon-Lime" << endl;
    //         cout << "4. Grape Soda" << endl;
    //         cout << "5. Cream Soda" << endl;
    //         cout << "Select One Drink : ";
    //         cin >> choice2;
    //         if (drinks[choice2 - 1].no_of_drinks <= 0)
    //         {
    //             cout << drinks[choice2 - 1].name << " Is Sold Out." << endl;
    //         }
    //         else
    //         {

    //             if (enter_amount < drinks[choice2 - 1].cost)
    //             {
    //                 cout << "Entered Amount Is Low To Purchase A " << drinks[choice2 - 1].name << "." << endl;
    //             }
    //             else
    //             {

    //                 returned_amount = enter_amount - drinks[choice2 - 1].cost;
    //                 machine_earning += drinks[choice2 - 1].cost;

    //                 cout << "Returned Amount : $" << returned_amount << endl;
    //                 drinks[choice2 - 1].no_of_drinks = drinks[choice2 - 1].no_of_drinks - 1;
    //             }
    //         }
    //         break;

    //     case 2:
    //         cout << "Machine Total Earning : $" << machine_earning << endl;
    //         return 0;
    //     default:
    //         cout << "Invalid Input. Try Again!" << endl;
    //         break;
    //     }
    // } while (true);

    //**************** 12 *****************/

    // int numstudents, numtests;
    // cout << "Number Of Students? : ";
    // cin >> numstudents;
    // cout << "Number Of Tests? : ";
    // cin >> numtests;
    // students *s = new students[numstudents];
    // inputdata(s,numstudents,numtests);
    // display(s,numstudents,numtests);

    //**************** 11 *****************/

    // budgetcalculator expenses, budget = {500, 150, 65, 50, 350, 30, 100, 150, 75, 50};
    // inputdata(expenses);
    // situationofbudget(budget,expenses);

    //**************** 9,10 *****************/

    // const int size = 3;
    // speaker s[size] = {{"Atta", "0300-7783334", "Programming Challenges", 1200}, {"Hashim", "0303-7699169", "Bussiness Techniques", 1000}};
    // int choice;
    // do
    // {
    //     cout << "1. Enter New Data" << endl;
    //     cout << "2. Modify The Contents By Name " << endl;
    //     cout << "3. Display The Data Stored" << endl;
    //     cout << "4. Search Speaker By topic" << endl;
    //     cout << "5. Exit The Program" << endl;
    //     cout << "Chose From The Above : ";
    //     cin >> choice;
    //     if (choice < 1 || choice > 4)
    //     {
    //         cout << "Invalid Choice Try Again!" << endl;
    //     }

    // } while (choice < 1 || choice > 4);

    // switch (choice)
    // {
    // case 1:
    //     inputdata(s, size);
    //     break;
    // case 2:
    //     modifydata(s, size);
    //     break;
    // case 3:
    //     display(s, size);
    //     break;
    // case 4:
    //     searchbytopic(s, size);
    //     break;
    // case 5:
    //     cout << "Exiting The Program!" << endl;
    //     return 0;
    //     break;

    // default:
    //     break;
    // }

    //**************** 7 *****************/
    // const int size = 4;

    // account customers[size] = {
    //     {"Atta Ul Mustafa", "Basti Ghazi Shah 007, BKH", "03007783334", 9999999999999, "July 12,2024"},
    //     {"Hashaam Gulzar", "Basti Shah Shakoor 007, BKH", "03037699169", 1000000000, "August 19,2024"},
    //     {"Hashim Jarrar", "Basti Kud Lathi 007, BKH", "03142727301", 111111111111, "January 22,2024"},
    // };

    // int choice;
    // do
    // {
    //     cout << "1. Add New Customer Account." << endl;
    //     cout << "2. Edit The Existing Customer Account." << endl;
    //     cout << "3. Display All Customers Data." << endl;
    //     cout << "4. Exit The Program." << endl;
    //     cout << "Select One From The Above : ";
    //     cin >> choice;

    //     if (choice < 1 || choice > 4)
    //     {
    //         cout << "Enter From Above Options Only. Try Again!" << endl;
    //     }

    // } while (choice < 1 || choice > 4);

    // switch (choice)
    // {
    // case 1:
    //     datainput(customers, size);
    //     break;
    // case 2:
    //     modifydata(customers, size);
    //     break;
    // case 3:
    //     display(customers, size);
    //     break;
    // case 4:
    //     cout << "Exiting The Program." << endl;
    //     return 0;

    // default:
    //     cout << "Invalid Choice!" << endl;
    // }

    //**************** 6 *****************/

    // const int size = 12;
    // player p[size];
    // int total_points = 0;
    // int highest_point = INT_MIN;
    // int index;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Player " << i + 1 << " Name : ";
    //     getline(cin, p[i].name);

    //     do
    //     {
    //         cout << "His Number : ";
    //         cin >> p[i].number;
    //         if (p[i].number < 0)
    //         {
    //             cout << "Value Can Not Be Less Than 0, Try Agian!" << endl;
    //         }

    //     } while (p[i].number < 0);

    //     do
    //     {
    //         cout << "His Points : ";
    //         cin >> p[i].points;
    //         if (p[i].points < 0)
    //         {
    //             cout << "Value Can Not Be Less Than 0, Try Agian!" << endl;
    //         }
    //     } while (p[i].points < 0);

    //     cin.ignore();
    //     if (highest_point < p[i].points)
    //     {
    //         highest_point = p[i].points;
    //         index = i;
    //     }

    //     total_points += p[i].points;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << i + 1 << ". " << p[i].name << endl;
    //     cout << "      Number : " << p[i].number << endl;
    //     cout << "      Points Scored : " << p[i].points << endl;
    // }
    // cout << "Highest Points Are " << highest_point << " Earned By " << p[index].name << " And His Number is " << p[index].number << "." << endl;

    //**************** 4 *****************/
    // const int size = 12;
    // weather month[size];
    // datainput(month);
    // display(month);

    //**************** 3 *****************/

    // division d1,d2,d3,d4;
    // inputdata(d1);
    // display(d1);
    // inputdata(d2);
    // display(d2);
    // inputdata(d3);
    // display(d3);
    // inputdata(d4);
    // display(d4);

    //**************** 1,2 *****************/

    // moviedata m1 = {"Padmavati", "Sanjay Leela Bhansali", 2016, 155.2, 200, 430};
    // display(m1);
    // moviedata m2 = {"Karan Arjun", "Yash Raj Films", 1994, 173.5, 20, 98};
    // display(m2);

    return 0;
}