#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    // double product,number;
    // while (product<100)
    // {
    //     cout<<"Enter a number : ";
    //     cin>>number;
    //     product=number*10;
    //     cout<<"Product is "<<product<<endl;
    // }

    // double num1,num2,sum;
    // char c;
    // do
    // {
    //     cout<<"Number 1 : ";
    //     cin>>num1;
    //     cout<<"Number 2 : ";
    //     cin>>num2;
    //     sum=num1+num2;
    //     cout<<"Sum : "<<sum<<endl;
    //     cout<<"You want to per form Operation again? "<<endl;
    //     cout<<"Press 'y' for Yes and 'n' for No. "<<endl;
    //     cin>>c;
    // } while ((c=='y'||c=='Y'));

    // for (int i = 0; i < 100; i+=10)
    // {
    //    cout<<i<<",";
    // }

    // double number,total=0;
    // cout<<"Enter a Number : ";
    // cin>>number;
    // for (int i = 0; i < 10; i++)
    // {
    //     total+=number;

    // }
    // cout<<"Total : "<<total;

    // for (int rows = 0; rows < 10; rows++)
    // {
    //     for (int i = 0; i < 15; i++)
    //     {
    //         cout << "#";
    //     }
    //     cout << endl;
    // }

    // ofstream fout;
    // fout.open("CHAP-5.txt");
    // int number;
    // cout<<"Enter a Number : ";
    // cin>>number;
    // do{
    //     fout<<number<<endl;
    //     number++;
    // }while(number<=100);
    // fout.close();
    // ifstream fin;
    // fin.open("CHAP=5.txt");
    // string read;

    // while (fin.eof() == 0)
    // {
    //     getline(fin, read);
    //     cout << read;
    // }
    // fin.close();

    // int number;
    // cout<<"Enter a Number : ";
    // cin>>number;
    // int count=0;
    // int total=0;
    // while (count<=number)
    // {
    //     total+=count;
    //     count++;
    // }
    // cout<<"Toatal : "<<total;

    // for (int i = 0; i < 127; i++)
    // {
    //     cout<<setw(2)<<char(i);

    //     if (i%16==15)
    //     {
    //         cout<<endl;
    //     }

    // }

    // double level=1.5;
    // for (int i = 1; i <= 25; i++)
    // {
    //     cout<<setw(10)<<i<<setw(20)<<i*level<<endl;
    // }

    // double calories=3.6;
    // for (int i = 0; i <=30; i+=5)
    // {
    //     cout<<"Calories at minute "<<i<<" are : "<<i*calories<<endl;
    // }

    // double charges=2500;
    // double rate=(4/100);
    // for (int i = 1; i <= 6; i++)
    // {
    //     cout<<"Increased Rate For Year "<<i<<" is : $"<<charges<<endl;
    //     charges=charges+(charges*0.04);
    // }

    // double speed, distance;
    // int time;
    // cout << "Speed (in miles per hour) : ";
    // cin >> speed;
    // if (speed < 0)
    // {
    //     cout << "Speed Can't be in Negative Numbers." << endl;
    // }
    // else
    // {

    //     cout << "Time (in hours) : ";
    //     cin >> time;
    //     if (time<1)
    //     {
    //        cout << "Time Can't be 0 or in Negative Numbers." << endl;
    //     }
    //     else{

    //     cout << "Hour" << "\t\t" << "Distance(miles)" << endl;
    //     for (int i = 1; i <= time; i++)
    //     {
    //         cout << i << "\t\t" << speed * i << endl;
    //     }
    //     }
    // }

    // double days;
    // cout << "Enter Number Of Days : ";
    // cin >> days;
    // double pay = 1, total = 0;
    // if (days < 0)
    // {
    //     cout << "Days Can't Be In Negative Numbers.";
    // }
    // else
    // {

    //     for (int i = 1; i <= days; i++)
    //     {
    //         cout << "Day " << i << " Salary : " << pay << endl;
    //         total += pay;
    //         pay = pay * 2;
    //     }
    //     total /= 100;
    //     cout << "Total : $" << total << endl;
    // }
    // int choice;

    // do
    // {
    //     cout << "1.ADDITION" << endl;
    //     cout << "2.SUBTRACTION" << endl;
    //     cout << "3.MULTIPLICATION" << endl;
    //     cout << "4.DIVISION" << endl;
    //     cout << "5.QUIT" << endl;

    //     cout << "Select One Option (1-5) : ";

    //     cin >> choice;
    //      if (cin.fail()) {
    //         cin.clear(); // Clear the error state
    //         cin.ignore(); // Ignore the rest of the invalid input
    //         cout << "Invalid input. Please enter a number between 1 and 5." << endl;
    //     }
    //     else if (choice > 5 || choice < 1)
    //     {
    //         cout << "Invalid Choice. Please Enter (1-5)" << endl;
    //     }
    //     else
    //     {

    //         if (choice < 5)
    //         {
    //             double n1, n2;
    //             cout << "Number 1 : ";
    //             cin >> n1;
    //             cout << "Number 2 : ";
    //             cin >> n2;
    //             switch (choice)
    //             {
    //             case 1:
    //                 cout << "ADDITION : " << n1 + n2 << endl;
    //                 break;
    //             case 2:
    //                 cout << "SUBTRACTION : " << n1 - n2 << endl;
    //                 break;
    //             case 3:
    //                 cout << "MULTIPLICATION : " << n1 * n2 << endl;
    //                 break;
    //             case 4:
    //                 cout << "DIVISION : " << n1 / n2 << endl;
    //                 break;

    //             default:
    //                 break;
    //             }
    //             _getch();
    //         }
    //         else
    //         {
    //             cout << "Program Ended!" << endl;
    //         }
    //     }

    // } while (choice != 5);

    // int floors;
    // cout << "Enter the number of Floors : ";
    // cin >> floors;
    // if (floors < 1)
    // {
    //     cout << "Enter Value Greater Than 0." << endl;
    // }
    // else
    // {

    //     int rooms, occupied_rooms, total_rooms = 0, total_occupied_rooms = 0;
    //     for (int i = 1; i <= floors; i++)
    //     {
    //         if (i == 13)
    //         {
    //             continue;
    //         }
    //         else
    //         {

    //             cout << "Floor Number : " << i << endl;
    //             cout << "Number Of Rooms on Floor " << i << " : ";
    //             cin >> rooms;

    //             while (rooms < 10)
    //             {
    //                 cout << "Minimum Number Of Rooms Will Be 10, So Enter a Number 10 Or Greater Than 10. " << endl;
    //                 cout << "Number Of Rooms on Floor " << i << " : ";
    //                 cin >> rooms;
    //             }

    //             cout << "Number Of Occupied Rooms on Floor " << i << " : ";
    //             cin >> occupied_rooms;
    //             while (occupied_rooms > rooms)
    //             {
    //                 cout << "Occupied rooms could not be greater than Actual Number Of rooms. " << endl;

    //                 cout << "Number Of Occupied Rooms on Floor " << i << " : ";
    //                 cin >> occupied_rooms;
    //             }
    //             total_rooms += rooms;
    //             total_occupied_rooms += occupied_rooms;
    //         }
    //     }
    //     cout << "Total Number Of Rooms In Hotel : " << total_rooms << endl;
    //     cout << "Total Number Of Rooms Occupied In Hotel : " << total_occupied_rooms << endl;
    //     double percentage;
    //     percentage = (double(total_occupied_rooms) / total_rooms) * 100.0;
    //     cout << "Percentage of Occupied Rooms Is : " << percentage << "%" << endl;
    // }

    // int month = 12, total_months = 0, years;
    // double inches = 0, total_inches, average;
    // cout << "Number Of Years : ";
    // cin >> years;

    // for (int i = 1; i <= years; i++)
    // {
    //     cout << "For Year " << i << " : " << endl;
    //     for (int j = 1; j <= month; j++)
    //     {
    //         cout << "Inches Of Rainfall in Month " << j << " is : ";
    //         cin >> inches;
    //         total_inches += inches;
    //         total_months += 1;
    //     }
    //     cout << endl;
    // }
    // cout << "Total Months : " << total_months << endl;
    // cout << setprecision(2) << fixed << showpoint;
    // cout << "Total Inches Of Rainfall : " << total_inches << endl;
    // average = total_inches / total_months;
    // cout << "Average Rainfall Per Month : " << average << " Inches." << endl;

    // double population, increase_percentage, days;
    // cout << "Starting number of organisms : ";
    // cin >> population;
    // if (population < 2)
    // {
    //     cout << "Population should be > than 2.";
    // }
    // else
    // {
    //     cout << "Percentage Increase Each Day : ";
    //     cin >> increase_percentage;
    //     if (increase_percentage < 0)
    //     {
    //         cout << "percentage should be > than 0.";
    //     }
    //     else
    //     {

    //         cout << "Number Of Days : ";
    //         cin >> days;
    //         if (days < 1)
    //         {
    //             cout << "Days should be > than 0.";
    //         }
    //         else
    //         {

    //             increase_percentage /= 100;

    //             for (int i = 1; i <= days; i++)
    //             {
    //                 cout << "Day " << i << " Population : " << population << endl;
    //                 population += (population * increase_percentage);
    //             }
    //         }
    //     }
    // }

    // for (int  i = 0; i <= 20; i++)
    // {
    //     double fahrenheit=((9.0/5.0)*i)+32.0;
    //     cout<<"Celsius Temperature : "<<i<<" Fahrenheit : "<<fahrenheit<<endl;
    // }

    // int integers, numbers, smallest, largest = 0;
    // // cout<<"How Many Numbers You Want To Enter : ";
    // // cin>>integers;
    // for (;;)
    // {
    //     cout << " Number " << " : ";
    //     cin >> numbers;
    //     if (numbers == -99)
    //     {
    //         break;
    //     }

    //     if (largest < numbers)
    //     {
    //         largest = numbers;
    //     }

    //     if (smallest > numbers)
    //     {
    //         smallest = numbers;
    //     }
    // }
    // cout << "Largest : " << largest << endl;
    // cout << "Smallest : " << smallest << endl;

    // int number;
    // cout<<"Enter number of students : ";
    // cin>>number;
    // string name,first_name,last_name;

    // ofstream write;
    // // cout<<"Enter Name Of Student  : ";
    // //     cin>>name;
    // write.open("CHAP-5.txt");
    // for (int i = 1; i <= number; i++)
    // {
    //     cout<<"Enter Name Of Student "<<i<<" : ";
    //     cin>>name;
    //     write<<name<<endl;
    //     if (i==1)
    //     {
    //         first_name=name;
    //     }
    //     if (i==number)
    //     {
    //         last_name=name;
    //     }

    // }
    // write.close();
    // ifstream read;
    // read.open("CHAP-5.txt");
    // string read_name;
    // for (int i = 1; i <= number; i++)
    // {
    // getline(read,read_name);
    // cout<<read_name<<endl;
    // }

    // cout<<"First Student Name : "<<first_name<<endl;
    // cout<<"Last Student Name : "<<last_name<<endl;

    // int x = 1;
    // double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFICAWithholdings = 0, totalNetPay = 0;

    // while (x > 0)
    // {
    //     int employe_number;
    //     double gross_pay, state_tax, federal_tax, fica, net_pay;
    //     if (cin.fail())
    //     {
    //         cin.clear();
    //         cin.ignore();
    //     }

    //     cout << "Enter Employe Number : ";
    //     cin >> employe_number;
    //     if (employe_number == 0)
    //     {
    //         break;
    //     }
    //     while (employe_number < 1)
    //     {
    //         cout << "Value Can Not Be In Negative Numbers." << endl;
    //         cout << "Enter Employe Number Again : ";
    //         cin >> employe_number;
    //     }

    //     cout << "Gross Pay : ";
    //     cin >> gross_pay;
    //     while (gross_pay < 1)
    //     {
    //         cout << "Value Can Not Be < 1 ." << endl;
    //         cout << "Enter Gross Pay Again : ";
    //         cin >> gross_pay;
    //     }
    //     cout << "State Tax : ";
    //     cin >> state_tax;
    //     while (state_tax < 1)
    //     {
    //         cout << "Value Can Not Be < 1 ." << endl;
    //         cout << "Enter State Tax Again : ";
    //         cin >> state_tax;
    //     }
    //     cout << "Federal Tax : ";
    //     cin >> federal_tax;
    //     while (federal_tax < 1)
    //     {
    //         cout << "Value Can Not Be < 1 ." << endl;
    //         cout << "Enter Federal Tax Again : ";
    //         cin >> federal_tax;
    //     }
    //     cout << "Fica With Holdings : ";
    //     cin >> fica;
    //     while (fica < 1)
    //     {
    //         cout << "Value Can Not Be < 1 ." << endl;
    //         cout << "Enter FICA Again : ";
    //         cin >> fica;
    //     }
    //     if (state_tax > gross_pay || federal_tax > gross_pay || fica > gross_pay)
    //     {
    //         cout << "Any Individual Tax Can Not Be Greater Than gross Pay." << endl;
    //     }
    //     else
    //     {

    //         double total_tax = state_tax + federal_tax + fica;
    //         if (total_tax > gross_pay)
    //         {
    //             cout << "Taxes Can Not Be Greater Than gross Pay." << endl;
    //         }
    //         else
    //         {

    //             cout << "Total Tax : " << total_tax << endl;
    //             net_pay = gross_pay - total_tax;
    //             cout << "Net Pay : " << net_pay << endl;

    //             totalGrossPay += gross_pay;
    //             totalStateTax += state_tax;
    //             totalFICAWithholdings += fica;
    //             totalFederalTax += federal_tax;
    //             totalNetPay += net_pay;
    //         }
    //     }
    // }

    // cout << fixed << setprecision(2); // Setting decimal precision for monetary values
    // cout << "\nPayroll Report Totals:" << endl;
    // cout << "Total Gross Pay: $" << totalGrossPay << endl;
    // cout << "Total State Tax: $" << totalStateTax << endl;
    // cout << "Total Federal Tax: $" << totalFederalTax << endl;
    // cout << "Total FICA Withholdings: $" << totalFICAWithholdings << endl;
    // cout << "Total Net Pay: $" << totalNetPay << endl;

    // double balance, interest_rate, starting_balance, number_of_months, deposited_amount, withdrawn_amount, monthly_interest_rate, monthly_interest_amount;

    // double total_balance = 0, total_deposits = 0, total_withdrawn = 0, total_interest = 0;
    // cout << "Annual Interest Rate : ";
    // cin >> interest_rate;
    // interest_rate /= 100;
    // cout << "Starting Balance : ";
    // cin >> starting_balance;
    // cout << "Number Of Months : ";
    // cin >> number_of_months;
    // balance = starting_balance;
    // monthly_interest_rate = interest_rate / 12;

    // for (int i = 1; i <= number_of_months; i++)
    // {
    //     cout << "MONTH - " << i << endl
    //          << endl;
    //     cout << "Amount Deposited In Month " << i << " : $";
    //     cin >> deposited_amount;
    //     balance += deposited_amount;
    //     total_deposits += deposited_amount;

    //     cout << "Amount Withdrawn In Month " << i << " : $";
    //     cin >> withdrawn_amount;
    //     balance -= withdrawn_amount;
    //     total_withdrawn += withdrawn_amount;

    //     balance += (balance * monthly_interest_rate);
    //     cout << "Monthly Interst Rate : " << monthly_interest_rate << endl;
    //     monthly_interest_amount = monthly_interest_rate * balance;
    //     cout << "Monthly Interst Amount : " << monthly_interest_amount << endl;

    //     total_interest += monthly_interest_amount;

    //     cout << "Remaining Balance After Month " << i << " is : " << balance << endl;

    //     // total_balance+=balance;
    //     cout << endl;

    //     if (balance < 0)
    //     {
    //         cout<<"Account Has Been Closed."<<endl;
    //         break;
    //     }
    // }

    // if (balance < 0)
    // {
    //     cout << "Remaining Balance Can Not Be In Negative Number.";
    // }
    // else
    // {

    //     cout << "Ending Balance : " << balance << endl;
    //     cout << "Total Deposited Amount : " << total_deposits << endl;
    //     cout << "Total Withdrawn Amount : " << total_withdrawn << endl;
    //     cout << "Total Interest Amount : " << total_interest << endl;
    // }

    // cout << "Today's Sales For Five Stores : " << endl;

    // int sales[5];
    // int sales_stars;
    // if (cin.fail())
    // {
    //     cin.clear();
    //     cin.ignore();
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter today's sales for store " << i + 1 << " : $";
    //     cin >> sales[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     sales_stars = sales[i] / 100;
    //     cout << "Store " << i + 1 << " :";
    //     for (int j = 1; j <= sales_stars; j++)
    //     {

    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int year[6]={1900,1920,1940,1960,1980,2000};
    // int population[6];
    // int stars;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Population In The Year "<<year[i]<<" : ";
    //     cin>>population[i];

    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     stars=population[i]/1000;
    //     cout<<year[i]<<" : ";
    //     for (int j = 0; j <stars ; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    // ifstream inputFile("People.txt");  // Open the file
    // if (!inputFile) {
    //     cout << "Error: Could not open the file!" << endl;
    //     return 1;  // Exit the program if the file can't be opened
    // }

    // cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    // cout << "(each * represents 1,000 people)" << endl;

    // int year, population;
    // while (inputFile >> year >> population) {  // Read year and population from file
    //     cout << year << " ";
    //     int numAsterisks = population / 1000;  // Determine the number of asterisks
    //     for (int i = 0; i < numAsterisks; i++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // inputFile.close();  // Close the file

    // double budget, total_expenses = 0, expense;
    // char c;
    // cout << "Budget : ";
    // cin >> budget;

    // do
    // {
    //     cout << "Enter An Expense : ";
    //     cin >> expense;
    //     total_expenses += expense;
    //     cout << "Do You Have An Other Expense." << endl;
    //     cout << "Y = Yes , N = No : ";
    //     cin >> c;
    // } while (c == 'y' || c == 'Y');

    // cout << "Total Expenses : " << total_expenses << endl;
    // if (total_expenses > budget)
    // {
    //     cout << "You Are Over Budget." << endl;
    // }
    // else if (total_expenses < budget)
    // {
    //     cout << "You Are Under Budget." << endl;
    // }
    // else
    // {
    //     cout << "You Are Exactly On Budget." << endl;
    // }

    //     int number,guess,count=0;
    //  do
    //  {
    //     if (cin.fail())
    //     {
    //         cin.clear();
    //         cin.ignore();
    //     }
    //     srand(time(0));
    //     number=rand();

    //     cout<<endl<<"Number : "<<number<<endl;
    //     cout<<"Guess The Number : ";
    //     cin>>guess;
    //     if (guess>number)
    //     {
    //         cout<<"Too high, try again.";

    //     }
    //     else if (guess<number)
    //     {
    //         cout<<"Too low, try again.";
    //     }
    //     else{
    //         cout<<"You Are Correct";
    //     }

    //     count++;

    //     cout<<endl;

    //  } while (guess!=number);

    //  cout<<"Number Of Guesses : "<<count<<endl;

    // int num;
    // cout << "Number : ";
    // cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 0; j < i * 1; j++)
    //     {
    //         cout << "+";
    //     }
    //     cout << endl;
    // }
    // // cout<<"Other Loop"<<endl;
    // int num1 = num;

    // for (int i = 1; i <= num; i++)
    // {

    //     for (int j = 0; j < num1; j++)
    //     {
    //         cout << "+";
    //     }
    //     num1--;
    //     cout << endl;
    // }


    // ifstream fin;
    // int num,sum=0,count=0;
    // fin.open("people.txt");
    // while (fin>>num)
    // {
    //     cout<<num<<endl;
    //     sum+=num;
    //     count++;
    // }

    // cout<<"Total Nmbers is Files : "<<count<<endl;
    // cout<<"Sum Of All Nmbers In Files : "<<sum<<endl;
    // cout<<"Average Of All Nmbers In Files : "<<sum/count<<endl;
    // fin.close();

    ifstream fin;
    string name;
    fin.open("name.txt");
    while (fin.eof()==0)
    {
        getline(fin,name);
        cout<<name<<endl;
    }
    
    

    return 0;
}