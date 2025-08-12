#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <algorithm>
#include <fstream>
#include <climits>
using namespace std;

// double calculateReatil(double wholesale_cost, double percentage)
// {
//     double percentage_amount = wholesale_cost * (percentage / 100.0);
//     wholesale_cost += percentage_amount;
//     return wholesale_cost;
// }
// double entervalues()
// {
//     double value;
//     cout << "Enter Value : ";
//     cin >> value;
//     if (cin.fail())
//     {
//         cin.clear();
//         cin.ignore();
//     }
//     if (value < 1)
//     {
//         do
//         {
//                 cout << "Value 0 or < 0 is Not acceptable" << endl;
//                 cout << "Enter Value Again : " << endl;
//                 cin>>value;
//                 // if (value>0)
//                 // {
//                 //     break;
//                 // }

//         } while (value < 1);
//     }

//     return value;
// }

// double getlength()
// {
//     double length;
//     cout << "Enter the Length : ";
//     cin >> length;
//     return length;
// }
// double getwidth()
// {
//     double width;
//     cout << "Enter the Width : ";
//     cin >> width;
//     return width;
// }
// double area1(double length, double width)
// {
//     double area;
//     area = length * width;
//     return area;
// }
// void displaydata(double length, double width, double area)
// {
//     cout << "Length : " << length << endl;
//     cout << "Width : " << width << endl;
//     cout << "Area : " << area << endl;
// }

// double getsales()
// {
//     string name;
//     double sales;
//     cout << "Sales Of Division : ";
//     cin >> sales;
//     return sales;
// }
// double findhighest(double h1, double h2, double h3, double h4)
// {
//     double highest = h1;
//     string highestDivision = "Northeast";

//     if (h2 > highest)
//     {
//         highest = h2;
//         highestDivision = "Southeast";
//     }
//     if (h3 > highest)
//     {
//         highest = h3;
//         highestDivision = "Northwest";
//     }
//     if (h4 > highest)
//     {
//         highest = h4;
//         highestDivision = "Southwest";
//     }

//     cout << "The division with the highest sales is " << highestDivision
//          << " with sales totaling $" << highest << endl;
// }

// int getnumaccidents(string name)
// {
//     int accident;
//     cout << "Number Of Accidents In " << name << " last Year : ";
//     cin >> accident;
//     while (accident<0)
//     {
//         cout<<"Number of accident can't be in Negative Numbers."<<endl;
//         cout << "Enter Number Of Accidents In " << name << " last Year Again : ";
//     cin >> accident;
//     }

//     return accident;
// }
// void findlowest(int a1, int a2, int a3, int a4, int a5)
// {
//     string n1="North";
//     string n2="South";
//     string n3="East";
//     string n4="West";
//     string n5="Central";
//     string n;
//     int lowest = a1;
//     if (lowest > a1)
//     {
//         lowest = a1;
//         n=n1;
//     }
//     if (lowest > a2)
//     {
//         lowest = a2;
//         n=n2;
//     }
//     if (lowest > a3)
//     {
//         lowest = a3;
//         n=n3;
//     }
//     if (lowest > a4)
//     {
//         lowest = a4;
//         n=n4;
//     }
//     if (lowest > a5)
//     {
//         lowest = a5;
//         n=n5;
//     }

//     cout <<n<< " region with " << lowest << " number of accidents is the lowest." << endl;
// }

// double fallingdistance(double time)
// {
//     double g = 9.8;
//     double distance = (1 / 2.0 * g) * pow(time, 2);
//     return distance;
// }

// double kineticenergy(double mass, double velocity)
// {
//     double KE;
//     KE = (1 / 2.0 * mass) * pow(velocity, 2);
//     return KE;
// }

// double fahrenheit_converter(double f){
//     double c;
//     c=(5/9.0)*(f-32);
//     return c;
// }

// void cointoss()
// {
//     int toss;
//     toss = rand() % 2 + 1;
//     if (toss == 1)
//     {
//         cout << "Heads" << endl;
//     }

//     else
//     {
//         cout << "Tails" << endl;
//     }
// }

// double presentvalue(double f, double r, double n)
// {
//     double p;
//     p = f / (pow(1 + r, 2));
//     return p;
// }

//********12********/

// void getjudgedata(int &v)
// {
//     cout << "Enter The Score : ";
//     cin >> v;
//     while (v < 0 || v > 100)
//     {
//         cout << "Score can not be >100 or <0." << endl;
//         cout << "Enter The Score Again : ";
//         cin >> v;
//     }
// }
// int lowesthighest(int s1, int s2, int s3, int s4, int s5)
// {
//     int lowest = INT_MAX;
//     int highest = INT_MIN;
//     if (s1 < lowest)
//     {
//         lowest = s1;
//     }

//     if (s2 < lowest)
//     {
//         lowest = s2;
//     }

//     if (s3 < lowest)
//     {
//         lowest = s3;
//     }

//     if (s4 < lowest)
//     {
//         lowest = s4;
//     }

//     if (s5 < lowest)
//     {
//         lowest = s5;
//     }

//     if (s1 > highest)
//     {
//         highest = s1;
//     }

//     if (s2 > highest)
//     {
//         highest = s2;
//     }

//     if (s3 > highest)
//     {
//         highest = s3;
//     }

//     if (s4 > highest)
//     {
//         highest = s4;
//     }

//     if (s5 > highest)
//     {
//         highest = s5;
//     }
//     return highest + lowest;
// }

// void calscore(int s1, int s2, int s3, int s4, int s5)
// {

//     double average = ((s1 + s2 + s3 + s4 + s5) - lowesthighest(s1, s2, s3, s4, s5)) / 4;
//     cout << "Average : " << average << endl;
// }

//********13********/

// int number_of_employees()
// {
//     int n;
//     cout << "Enter the Number Of Employees : ";
//     cin >> n;
//     while (n < 1)
//     {
//         cout << "No. Of Employees Can't Be Less Than 1" << endl;
//         cout << "Enter the Number Of Employees Again : ";
//         cin >> n;
//     }

//     return n;
// }
// int missed_days(int n)
// {
//     int total = 0;
//     int days;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "No. Of Days Missed By Employee " << i << " During The Year : ";
//         cin >> days;
//         while (days < 0)
//         {
//             cout << "No. Of Days Can't Be Less Than 0" << endl;
//             cout << "Enter Again No. Of Days Missed By Employee " << i << " During The Year : ";
//             cin >> days;
//         }
//         total += days;
//     }
//     return total;
// }
// double average_absentees(int number, int days)
// {
//     double average_days = days / number;
//     return average_days;
// }

//***********14**********/

// void data(int &no_of_spools, int &instock_spools, double &ship_handling_charges)
// {
//     double Special_charges;
//     cout << "No. of spools ordered : ";
//     cin >> no_of_spools;
//     cout << "No. Of Spools In Stock : ";
//     cin >> instock_spools;
//     char s;
//     cout << "Any Special Charges? other than $10 on per Spool (Y/N) : ";
//     cin >> s;
//     if (s == 'y' || s == 'Y')
//     {
//         cout << "Enter The Special Charges : ";
//         cin >> Special_charges;
//         ship_handling_charges += Special_charges;
//     }
// }

// void availibilty(int no_of_spools, int instock_spools, int ship_handling_charges)
// {
//     int ready_to_ship, on_backorder;
//     double Subtotal, total_ship_charges;
//     cout << "No. Of Spools Ready To Ship : ";
//     cin >> ready_to_ship;
//     if (no_of_spools > instock_spools)
//     {
//         on_backorder = no_of_spools - ready_to_ship;
//         cout << "No. Of Spools On Backorder : " << on_backorder << endl;
//     }
//     Subtotal = ready_to_ship * 100;
//     cout << "Subtotal of the portion ready to ship : " << Subtotal << endl;
//     total_ship_charges = ship_handling_charges * ready_to_ship;
//     cout << "Total shipping and handling charges on the portion ready to ship : " << total_ship_charges << endl;
//     cout << "Total Of the order Ready To Ship : " << total_ship_charges + Subtotal << endl;
// }

//*************15,19*************/

// double totalcharges(int days, double rate, double medication_charges, double service_charges)
// {
//     double total_Charges = (days * rate) + medication_charges + service_charges;
//     return total_Charges;
// }
// double totalcharges(double medication_charges, double service_charges)
// {
//     double total_charges = medication_charges + service_charges;
//     return total_charges;
// }

//*************16,17*************/

// void size_after_years(int population)
// {
//     double birth_rate, death_rate;
//     int years;
//     cout << "Years : ";
//     cin >> years;
//     int new_population;

//     for (int i = 1; i <= years; i++)
//     {
//         do
//         {
//             cout << "Birth Rate In Year " << i << " : ";
//             cin >> birth_rate;
//             if (birth_rate < 0)
//             {
//                 cout << "Birth Rate Can Not Be Less Than 0 People." << endl;
//                 cout << "Enter Birth Rate size Again." << endl;
//             }
//         } while (birth_rate < 0);
//         birth_rate /= 100;
//         do
//         {
//             cout << "Death Rate In Year " << i << " : ";
//             cin >> death_rate;
//             if (death_rate < 0)
//             {
//                 cout << "Death Rate Can Not Be Less Than 0 People." << endl;
//                 cout << "Enter Death Rate size Again." << endl;
//             }
//         } while (death_rate < 0);
//         death_rate /= 100;

//         int move_in_people,leave_people;
//         cout<<"No. Of People Move In : ";
//         cin>>move_in_people;
//         cout<<"No. Of People leave the Area : ";
//         cin>>leave_people;
//         new_population = (population + move_in_people+(population * birth_rate)) - (population * death_rate)-leave_people;
//         cout << "New Population After " << i << " Is : " << new_population << endl;
//         population = new_population;
//     }
// }

//*************18*************/

// void costs(int rooms, int wall_space, double per_hour_lc)
// {
//     double total_square_feet = rooms * wall_space;
//     double required_gallons = total_square_feet / 110.0;
//     cout << "The number of gallons of paint required : " << required_gallons << endl;
//     double hours = required_gallons * 8;
//     cout << "The hours of labor required : " << hours << " Hours" << endl;
//     double paint_price;
//     cout << "Enter Per Gallon Price Of Paint : $";
//     cin >> paint_price;
//     double total_paint_cost = required_gallons * paint_price;
//     cout << "The Cost Of Paint Gallons : $" << total_paint_cost << endl;
//     double labour_charges = hours * per_hour_lc;
//     cout << "Labour Charges ($" << per_hour_lc << " Per Hour) for " << hours << " Hours : $" << labour_charges << endl;
//     double total_cost = labour_charges + total_paint_cost;
//     cout << "Total Cost Of The Paint Job : $" << total_cost << endl;
// }

//*************20,21*************/

// double Stock_Profit(int ns, double pp, double pc, double sp, double sc)
// {
//     double pc_amount = (pp * ns) * pc;
//     cout << "Purchase Commission Amount : $" << pc_amount << endl;
//     double sc_amount = (sp * ns) * sc;
//     cout << "Sale Commission Amount : $" << sc_amount << endl;
//     double profit;
//     profit = ((ns * sp) - sc_amount) - ((ns * pp) + pc);
//     if (profit > 0)
//     {
//         cout << "You Get Profit Of : $" << profit << endl;
//     }
//     else if (profit < 0)
//     {
//         cout << "You Get Loss Of : $" << profit << endl;
//     }
//     else
//     {
//         cout << "You did not earned profit or loss because remaining amount after purchase and sale is $" << profit << endl;
//     }
//     return profit;
// }

//*************22,23*************/

// bool isprime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

//*************24*************/

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
        cout << "Rock Wins (The rock smashes the scissors.)" << endl;
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
    //*************24*************/

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

    //*************22,23*************/

    // int n;
    // // cout << "Enter A Number : ";
    // // cin >> n;

    // ofstream fout("primes.txt",ios::app);

    // for (int i = 1; i <= 100; i++)
    // {
    // if (isprime(i))
    // {
    //     fout << i << " is a Prime." << endl;
    // }
    // else
    // {
    //     cout << i << " is Not a Prime." << endl;
    // }

    // }

    //*************20,21*************/

    // int ns, number_of_stocks;
    // double sp, sc, pp, pc, total_profit = 0, profit;
    // cout << "Number Of Stocks : ";
    // cin >> number_of_stocks;
    // for (int i = 1; i <= number_of_stocks; i++)
    // {
    //     cout<<"STOCK NO."<<i<<endl<<endl;
    //     cout << "Number Of Shares : ";
    //     cin >> ns;
    //     cout << "Purchase Price Per Share : $";
    //     cin >> pp;
    //     cout << "Purchase Commission (%age) : ";
    //     cin >> pc;
    //     pc /= 100.0;
    //     cout << "Sale Price Per Share : $";
    //     cin >> sp;
    //     cout << "Sale Commission (%age) : ";
    //     cin >> sc;
    //     sc /= 100.0;
    //     profit = Stock_Profit(ns, pp, pc, sp, sc);
    //     total_profit += profit;
    // }

    // cout<<"Total Profit Or Loss Of "<<number_of_stocks<<" Stocks is : $"<<total_profit<<endl;

    //*************18*************/

    // int rooms;
    // double per_hour_lc, wall_space;
    // cout << "No. Of Rooms : ";
    // cin >> rooms;
    // cout << "Wall Space Each Room (in square feet) : ";
    // cin >> wall_space;
    // cout << "Per Hour Labour Charges : $";
    // cin >> per_hour_lc;
    // costs(rooms, wall_space, per_hour_lc);

    //*************16,17*************/

    // int population;
    // do
    // {
    //     cout << "Population : ";
    //     cin >> population;
    //     if (population < 2)
    //     {
    //         cout << "Population Can Not Be Less Than 2 People." << endl;
    //         cout << "Enter Population size Again." << endl;
    //     }

    // } while (population < 2);

    // size_after_years(population);

    //*************15,19*************/

    // char c;
    // cout << "The patient was admitted as an in-patient or an out-patient?" << endl;
    // cout << "Enter I for In-Patient and O for Out-Patient ";
    // cin >> c;
    // if (c == 'i' || c == 'I')
    // {
    //     int days;
    //     double rate, medication_charges, service_charges, total;
    //     cout << "No. Of Days Spent In Hospital : ";
    //     cin >> days;
    //     cout << "Daily Rate : ";
    //     cin >> rate;
    //     cout << "Medication Charges : ";
    //     cin >> medication_charges;
    //     cout << "Service Charges : ";
    //     cin >> service_charges;
    //     total = totalcharges(days, rate, medication_charges, service_charges);
    //     cout << "Total Charges : " << total << endl;

    //     ofstream fout;
    //     fout.open("hospital_error.txt", ios::app);
    //     fout << endl;
    //     fout << "In-Patient" << endl;
    //     fout << endl;
    //     fout << "No. Of Days Spent In Hospital : " << days << endl;
    //     fout << "Daily Rate : " << rate << endl;
    //     fout << "Medication Charges : " << medication_charges << endl;
    //     fout << "Service Charges : " << service_charges << endl;
    //     fout << "Total Charges : " << total << endl;
    //     fout.close();
    // }
    // else if (c == 'o' || c == 'O')
    // {
    //     double medication_charges, service_charges, total;
    //     cout << "Medication Charges : ";
    //     cin >> medication_charges;
    //     cout << "Service Charges : ";
    //     cin >> service_charges;
    //     total = totalcharges(medication_charges, service_charges);
    //     cout << "Total Charges : " << total << endl;

    //     ofstream fout;
    //     fout.open("hospital_error.txt", ios::app);
    //     fout << endl;
    //     fout << "Out-Patient" << endl;
    //     fout << endl;
    //     fout << "Medication Charges : " << medication_charges << endl;
    //     fout << "Service Charges : " << service_charges << endl;
    //     fout << "Total Charges : " << total << endl;
    //     fout.close();
    // }
    // else
    // {
    //     cout << "Error! Only Choose I or O." << endl;
    // }

    //*************14*************/

    // int no_of_spools, instock_spools;
    // double ship_handling_charges = 10;
    // data(no_of_spools, instock_spools, ship_handling_charges);
    // availibilty(no_of_spools, instock_spools, ship_handling_charges);

    //********13********/

    // int number = number_of_employees();
    // int days = missed_days(number);
    // double average_absentees_days = average_absentees(number, days);
    // cout << "Average Missed Days By Each Employee : " << average_absentees_days << " Days." << endl;

    //********12********/

    // int s1, s2, s3, s4, s5;
    // getjudgedata(s1);
    // // cout<<"First Test Score : "<<s1<<endl;
    // getjudgedata(s2);
    // // cout<<"Second Test Score : "<<s2<<endl;
    // getjudgedata(s3);
    // // cout<<"Third Test Score : "<<s3<<endl;
    // getjudgedata(s4);
    // // cout<<"Fourth Test Score : "<<s4<<endl;
    // getjudgedata(s5);
    // // cout<<"Fifth Test Score : "<<s5<<endl;
    // lowesthighest(s1, s2, s3, s4, s5);
    // calscore(s1, s2, s3, s4, s5);

    // double present_value, f, r, n;
    // cout << "Future Value You Want : ";
    // cin >> f;
    // cout << "Interest Rate : ";
    // cin >> r;
    // r /= 100;
    // cout << "Number of Years : ";
    // cin >> n;
    // present_value = presentvalue(f, r, n);
    // cout << "You need to deposit: $" << present_value << " today to reach $"
    //      << f << " in " << n << " years." << endl;

    // srand(time(0));
    // int n;
    // cout << "How Many Times Coin Should Toss?";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cointoss();
    // }

    // double temperature_fahrenheit,celsius;
    // cout<<"Enter Temperature In Fahrenheit : ";
    // cin>>temperature_fahrenheit;
    // celsius=fahrenheit_converter(temperature_fahrenheit);
    // cout<<"Temperature in Celsius is "<<celsius<<endl;
    // for (int i = 1; i <= 20; i++)
    // {

    // celsius=fahrenheit_converter(i);
    // cout<<"Temperature in Celsius is "<<celsius<<endl;

    // }

    // double mass, velocity, KE;
    // cout << "Enter Mass (in kilograms) : ";
    // cin >> mass;
    // cout << "Enter Velocity (in meter per seconded) : ";
    // cin >> velocity;
    // KE = kineticenergy(mass, velocity);
    // cout << "Kinetic Energy Of Given Values Is : " << KE << endl;

    // int total_objects;
    // cout << "For How Many Objects You Want To Find Distance?";
    // cin >> total_objects;
    // double time;
    // double distance;
    // for (int i = 1; i <= total_objects; i++)
    // {
    //     cout << "Enter time in Seconds For Object "<<i<<" : ";
    //     cin >> time;
    //     distance = fallingdistance(time);
    //     cout << "Distance of object " << i << " in " << time << " Seconds is " << distance << " Meters." << endl;
    // }

    // int north_accidents = getnumaccidents("North");
    // int south_accidents = getnumaccidents("South");
    // int east_accidents = getnumaccidents("East");
    // int west_accidents = getnumaccidents("West");
    // int central_accidents = getnumaccidents("Central");
    // findlowest(north_accidents,south_accidents,east_accidents,west_accidents,central_accidents);

    // string name1, name2, name3, name4;
    // double northeast, southeast, northwest, southwest, highest;
    // cout << "Name Of Division 1 : ";
    // cin >> name1;
    // northeast = getsales();
    // cout << northeast << endl;
    // cout << "Name Of Division 2 : ";
    // cin >> name2;
    // southeast = getsales();
    // cout << southeast << endl;
    // cout << "Name Of Division 3 : ";
    // cin >> name3;
    // northwest = getsales();
    // cout << northeast << endl;
    // cout << "Name Of Division 4 : ";
    // cin >> name4;
    // southwest = getsales();
    // cout << northwest << endl;

    // double length, width, area;
    // length = getlength();
    // width = getwidth();
    // area = area1(length, width);
    // displaydata(length, width, area);

    // double wholesale_cost, percentage;
    // cout << "Wholesale Cost : ";
    // // cin>>wholesale_cost;
    // wholesale_cost = entervalues();
    // cout << "Wholesale Cost Value : " << wholesale_cost << endl;
    // cout << "Percentage : ";
    // // cin>>percentage;
    // percentage = entervalues();
    // cout << "Percentage Value : " << percentage<<endl;
    // double Reatil_Price = calculateReatil(wholesale_cost, percentage);
    // cout << "Retail Price : " << Reatil_Price << endl;

    return 0;
}