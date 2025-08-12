#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <climits>
#include <conio.h>
using namespace std;

//****************** 1 *******************/
// class date
// {
// public:
//     int day;
//     int month;
//     string month_name;
//     int year;

//     void setdate(int d, int m, int y)
//     {
//         day = d;
//         month = m;
//         year = y;
//         switch (month)
//         {
//         case 1:
//             month_name = "January";
//             break;
//         case 2:
//             month_name = "February";
//             break;
//         case 3:
//             month_name = "March";
//             break;
//         case 4:
//             month_name = "April";
//             break;
//         case 5:
//             month_name = "May";
//             break;
//         case 6:
//             month_name = "June";
//             break;
//         case 7:
//             month_name = "July";
//             break;
//         case 8:
//             month_name = "August";
//             break;
//         case 9:
//             month_name = "September";
//             break;
//         case 10:
//             month_name = "October";
//             break;
//         case 11:
//             month_name = "November";
//             break;
//         case 12:
//             month_name = "December";
//             break;
//         }
//     }
//     void getdate()
//     {
//         cout << month << "/" << day << "/" << year << endl;
//         cout << month_name << " " << day << ", " << year << endl;
//         cout << day << " " << month_name << " " << year << endl;
//     }
// };

//****************** 2 *******************/

// class employee
// {
// private:
//     string name;
//     int idnumber;
//     string department;
//     string position;

// public:
//     employee(string n, int id, string d, string p)
//     {
//         name = n;
//         idnumber = id;
//         department = d;
//         position = p;
//     }
//     employee(string n, int id)
//     {
//         name = n;
//         idnumber = id;
//         department = "";
//         position = "";
//     }
//     employee()
//     {
//         name = "";
//         idnumber = 0;
//         department = "";
//         position = "";
//     }
//     void setname(string n)
//     {
//         name = n;
//     }
//     void setidnumber(int n)
//     {
//         idnumber = n;
//     }
//     void setdepartment(string n)
//     {
//         department = n;
//     }
//     void setposition(string n)
//     {
//         position = n;
//     }
//     string getname()
//     {
//         return name;
//     }
//     int getidnumber()
//     {
//         return idnumber;
//     }
//     string getdepartment()
//     {
//         return department;
//     }
//     string getposition()
//     {
//         return position;
//     }
// };

//****************** 3 *******************/

// class car
// {
//     int yearmodel;
//     string make;
//     int speed;

// public:
//     car(int y, string m)
//     {
//         yearmodel = y;
//         make = m;
//         speed = 0;
//     }
//     int getyearmodel()
//     {
//         return yearmodel;
//     }
//     string getmake()
//     {
//         return make;
//     }
//     int getspeed()
//     {
//         return speed;
//     }
//     void accelerate();
//     void brake();
// };
// void car::accelerate()
// {
//     speed += 5;
// }
// void car::brake()
// {
//     if (speed >= 5)
//     {
//         speed -= 5;
//     }
// }

//****************** 4 *******************/

// class personal_data
// {
// private:
//     string name;
//     string address;
//     int age;
//     string number;

// public:
//     void setname(string n)
//     {
//         name = n;
//     }
//     void setaddress(string ad)
//     {
//         address = ad;
//     }
//     void setage(int a)
//     {
//         age = a;
//     }
//     void setnumber(string num)
//     {
//         number = num;
//     }
//     string getname()
//     {
//         return name;
//     }
//     string getaddress()
//     {
//         return address;
//     }
//     int getage()
//     {
//         return age;
//     }
//     string getnumber()
//     {
//         return number;
//     }
//     void display()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Address : " << address << endl;
//         cout << "Age : " << age << " Years" << endl;
//         cout << "Phone Number : " << number << endl;
//         cout << "---------------------------" << endl;
//     }
// };

//****************** 5 *******************/

// class retailitem
// {
// private:
//     string discription;
//     int units;
//     double price;

// public:
//     retailitem(string d, int u, double p)
//     {
//         discription = d;
//         units = u;
//         price = p;
//     }
//     void setdiscription(string d)
//     {
//         discription = d;
//     }
//     void setunits(int u)
//     {
//         units = u;
//     }
//     void setprice(double p)
//     {
//         price = p;
//     }
//     string getdiscription()
//     {
//         return discription;
//     }
//     int getunits()
//     {
//         return units;
//     }
//     double getprice()
//     {
//         return price;
//     }
// };

//****************** 6 *******************/

// class inventory
// {

// private:
//     int itemnumber;
//     int quantity;
//     double cost;
//     double total_cost;

// public:
//     inventory()
//     {
//         itemnumber = 0;
//         quantity = 0;
//         cost = 0.0;
//         total_cost = 0.0;
//     }
//     inventory(int n, double c, int q)
//     {
//         itemnumber = n;
//         cost = c;
//         quantity = q;
//         settotal_cost();
//     }
//     void setitemnumber(int n)
//     {
//         itemnumber = n;
//     }
//     void setquantity(int n)
//     {
//         quantity = n;
//     }
//     void setcost(double n)
//     {
//         cost = n;
//     }
//     void settotal_cost()
//     {
//         total_cost = quantity * cost;
//     }

//     int getitemnumber()
//     {
//         return itemnumber;
//     }
//     int getquantity()
//     {
//         return quantity;
//     }
//     double getcost()
//     {
//         return cost;
//     }
//     double gettotal_cost()
//     {
//         return total_cost;
//     }

//     void display(){
//         cout<<"Item Number : "<<itemnumber<<endl;
//         cout<<"Quantity : "<<quantity<<endl;
//         cout<<"Cost : "<<cost<<endl;
//         cout<<"Total Cost : "<<total_cost<<endl;
//         cout<<"--------------------------"<<endl;
//     }
// };

//****************** 7 *******************/

// class testscores
// {
// private:
//     int test1;
//     int test2;
//     int test3;
//     double average;

// public:
//     testscores()
//     {
//         test1 = 0;
//         test2 = 0;
//         test3 = 0;
//     }
//     testscores(int t1, int t2, int t3)
//     {
//         test1 = t1;
//         test2 = t2;
//         test3 = t3;
//         setaverage();
//     }
//     void settest1(int t)
//     {
//         test1 = t;
//     }
//     void settest2(int t)
//     {
//         test2 = t;
//     }
//     void settest3(int t)
//     {
//         test3 = t;
//     }
//     int gettest1()
//     {
//         return test1;
//     }
//     int gettest2()
//     {
//         return test2;
//     }
//     int gettest3()
//     {
//         return test3;
//     }
//     void setaverage()
//     {
//         average = (test1 + test2 + test3) / 3.0;
//     }
//     double getaverage()
//     {
//         return average;
//     }
// };

//****************** 8 *******************/

// class circle
// {
// private:
//     double radius;
//     double pi = 3.14159;

// public:
//     circle()
//     {
//         radius = 0;
//     }
//     circle(double r)
//     {
//         radius = r;
//     }
//     void setradius(double r)
//     {
//         radius = r;
//     }
//     double getradius()
//     {
//         return radius;
//     }
//     double getarea()
//     {
//         return (pi * pow(radius, 2));
//     }
//     double getdiameter()
//     {
//         return radius * 2;
//     }
//     double getcircumference()
//     {
//         return (2 * pi * radius);
//     }
//     void display()
//     {
//         cout << "Radius : " << radius << endl;
//         cout << "Area : " << getarea() << endl;
//         cout << "Diameter : " << getdiameter() << endl;
//         cout << "Circumference : " << getcircumference() << endl;
//         cout << "------------------------------" << endl;
//     }
// };

//****************** 9 *******************/

// class population
// {
// private:
//     int popu;
//     int noofbirths;
//     int noofdeaths;

// public:
//     population()
//     {
//         popu = noofbirths = noofdeaths = 0;
//     }
//     population(int p, int b, int d)
//     {
//         popu = p;
//         noofbirths = b;
//         noofdeaths = d;
//     }
//     void setpopulation(int p){
//         popu=p;
//     }
//     void setnoofbirths(int p){
//         noofbirths=p;
//     }
//     void setnoofdeaths(int p){
//         noofdeaths=p;
//     }
//     int getpopulation(){
//         return popu;
//     }
//     int getnoofbirths(){
//         return noofbirths;
//     }
//     int getnoofdeaths(){
//         return noofdeaths;
//     }
//     double getbirthrate(){
//         return (double)noofbirths/popu;
//     }
//     double getdeathrate(){
//         return (double)noofdeaths/popu;
//     }
//     void display(){
//         cout<<"Population : "<<popu<<endl;
//         cout<<"No Of Births : "<<noofbirths<<endl;
//         cout<<"No Of Deaths : "<<noofdeaths<<endl;
//         cout<<"Birth Rate : "<<getbirthrate()<<endl;
//         cout<<"Death Rate : "<<getdeathrate()<<endl;
//         cout<<"-------------------------------"<<endl;
//     }
// };

//****************** 10 *******************/

// class carray
// {
// private:
//     float *arr;
//     float highest = INT_MIN;
//     float lowest = INT_MAX;
//     float average;
//     float total = 0;
//     int size;

// public:
//     carray(int a)
//     {
//         size = a;
//         arr = new float[a];
//     }
//     void setnumber(int number, int i)
//     {
//         arr[i] = number;
//     }
//     int getnumber(int e)
//     {
//         return arr[e - 1];
//     }
//     void setvalues()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] > highest)
//             {
//                 highest = arr[i];
//             }
//             if (arr[i] < lowest)
//             {
//                 lowest = arr[i];
//             }

//             total += arr[i];
//         }
//         average = total / (sizeof(arr) / sizeof(arr[0]));
//     }
//     double gethighest()
//     {

//         return highest;
//     }
//     double getlowest()
//     {
//         return lowest;
//     }
//     double getaverage()
//     {
//         return average;
//     }
//     ~carray()
//     {
//         delete[] arr;
//     }
// };

//****************** 11 *******************/

// class payroll
// {
// private:
//     int no_of_hours;
//     double pay_rate;
//     double total_pay = 0;

// public:
//     payroll()
//     {
//         no_of_hours = pay_rate = total_pay = 0;
//     }
//     void sethours(int h)
//     {
//         no_of_hours = h;
//     }
//     void setpay(double p)
//     {
//         pay_rate = p;
//     }
//     int gethours()
//     {
//         return no_of_hours;
//     }
//     double getpay()
//     {
//         return pay_rate;
//     }
//     double gettotalpay()
//     {
//         return pay_rate * no_of_hours;
//     }
//     void display()
//     {
//         cout << "Hours Worked : " << no_of_hours << endl;
//         cout << "Pay Rate : $" << pay_rate << endl;
//         cout << "Total Pay : $" << gettotalpay() << endl;
//     }
// };

//****************** 12,13 *******************/

// class coin
// {
// private:
//     string sideup;

// public:
//     coin()
//     {
//         toss();
//     }
//     void toss()
//     {
//         int result = rand() % 2;
//         if (result == 0)
//         {
//             sideup = "Tails";
//         }
//         else
//         {
//             sideup = "Heads";
//         }
//     }
//     string getdiseup()
//     {
//         return sideup;
//     }
// };

//****************** 14,18 *******************/

// class dice
// {
// private:
//     int number;

// public:
//     dice()
//     {
//         roll();
//     }
//     void roll()
//     {
//         int num = rand() % 6 + 1;
//         number = num;
//     }
//     int getnumber()
//     {
//         return number;
//     }
// };

//****************** 15 *******************/

// class mortgage
// {
// private:
//     double payment;
//     int loan;
//     double rate;
//     double term;
//     int years;

// public:
//     mortgage() : loan(0), rate(0.0), years(0) {};
//     void setloan(int l)
//     {
//         loan = l;
//     }
//     void setrate(double r)
//     {
//         rate = r / 100;
//     }
//     void setyears(int y)
//     {
//         years = y;
//     }
//     double getpayment()
//     {
//         term = pow(1 + (rate / 12), 12 * years);
//         return (loan * (rate / 12) * term) / (term - 1);
//     }

//     double gettotalpayment()
//     {
//         return getpayment() * years * 12;
//     }
// };

//****************** 16 *******************/

// class temp
// {
// private:
//     double temperature;

// public:
//     temp()
//     {
//         temperature = 0;
//     }
//     void settemperature(double t)
//     {
//         temperature = t;
//     }
//     double gettemperature()
//     {
//         return temperature;
//     }

//     bool isethylfreezing()
//     {

//         if (temperature <= -173)
//         {
//             return true;
//         }
//         return false;
//     }
//     bool isethylboiling()
//     {

//         if (temperature >= 172)
//         {
//             return true;
//         }
//         return false;
//     }

//     bool isoxygenfreezing()
//     {

//         if (temperature <= -362)
//         {
//             return true;
//         }
//         return false;
//     }
//     bool isoxygenboiling()
//     {

//         if (temperature >= -306)
//         {
//             return true;
//         }
//         return false;
//     }

//     bool iswaterfreezing()
//     {

//         if (temperature <= 32)
//         {
//             return true;
//         }
//         return false;
//     }
//     bool iswaterboiling()
//     {

//         if (temperature >= 212)
//         {
//             return true;
//         }
//         return false;
//     }
// };

//****************** 17 *******************/

// class inventoryitem
// {
// private:
//     string discription;
//     double cost;
//     int units;

// public:
//     inventoryitem(string d, double c, int q)
//     {
//         discription = d;
//         cost = c;
//         units = q;
//     }
//     string getdiscription()
//     {
//         return discription;
//     }
//     double getcost()
//     {
//         return cost;
//     }
//     int getquantity()
//     {
//         return units;
//     }

//     void reducequantity(int q)
//     {
//         if (q <= units)
//         {
//             units -= q;
//         }
//     }
// };

// class caschregister
// {
// private:
//     double subtotal;
//     double total;
//     double sales_tax;
//     double unitprice;
//     int quantity;

// public:
//     caschregister()
//     {
//         subtotal = 0;
//         total = 0;
//         sales_tax = 6 / 100;
//         unitprice = 0;
//         quantity = 0;
//     }
//     void purchaseprocess(inventoryitem &item)
//     {
//         int qty;

//         cout << "Enter Quantity of " << item.getdiscription() << " Being Purchased : ";
//         cin >> qty;
//         while (qty < 0 || qty > item.getquantity())
//         {
//             cout << "Invalid quantity. Enter a non-negative value that is within stock: ";
//             cin >> qty;
//         }
//         unitprice = item.getcost() + (item.getcost() * (30.0 / 100));
//         subtotal = unitprice * qty;
//         total = subtotal + (subtotal * (6.0 / 100));
//         display();
//         item.reducequantity(qty);
//     }
//     void display()
//     {
//         cout << "Subtotal Price : $" << subtotal << endl;
//         cout << "Total Price : $" << total << endl;
//         cout << "Tax Cost (6%) : $" << subtotal * (6.0 / 100) << endl;
//     }
// };

//****************** 19 *******************/

class question
{
private:
    string que;
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    int correctanswer;

public:
    question(string q, string a1, string a2, string a3, string a4, int c)
    {
        que = q;
        ans1 = a1;
        ans2 = a2;
        ans3 = a3;
        ans4 = a4;
        correctanswer = c;
    }
    void displayquestion()
    {
        cout << que << endl;
        cout << "1. " << ans1 << endl;
        cout << "2. " << ans2 << endl;
        cout << "3. " << ans3 << endl;
        cout << "4. " << ans4 << endl;
    }
    int getcorrect()
    {
        return correctanswer;
    }
};
int askquestion(question arr[], int start, int end)
{
    int answer;
    int points = 0;
    for (int i = start - 1; i < end; i++)
    {
        cout<<"Question No. "<<i+1<<" : "<<endl;
        arr[i].displayquestion();
        cout << "Select (1-4) : ";
        cin >> answer;
        while (answer > 4 || answer < 1)
        {
            cout << "Invalid Selection, Select Again : ";
            cin >> answer;
        }
        if (answer == arr[i].getcorrect())
        {
            cout << "Correct!" << endl;
            points++;
        }
        else
        {
            cout << "Wrong!" << endl;
        }
    }
    return points;
}

int main()
{
    //****************** 19 *******************/

    question questions[10] = {
        question("What is the capital of France?", "Berlin", "Madrid", "Paris", "Rome", 3),
        question("Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Saturn", 2),
        question("Who wrote 'Romeo and Juliet'?", "William Wordsworth", "Charles Dickens", "J.K. Rowling", "William Shakespeare", 4),
        question("What is the largest ocean on Earth?", "Atlantic", "Indian", "Pacific", "Arctic", 3),
        question("How many continents are there?", "5", "6", "7", "8", 3),
        question("What is the chemical symbol for water?", "HO", "OH", "H2O", "O2", 3),
        question("What is the square root of 64?", "6", "7", "8", "9", 3),
        question("Which year did World War II end?", "1942", "1945", "1946", "1950", 2),
        question("Who was the first person to walk on the moon?", "Neil Armstrong", "Buzz Aldrin", "Yuri Gagarin", "John Glenn", 1),
        question("What is the longest river in the world?", "Amazon", "Nile", "Yangtze", "Mississippi", 2)};

    int player1Score, player2Score;
    cout << "Player 1 turn : " << endl;
    player1Score = askquestion(questions, 1, 5);
    cout << "Player 2 turn : " << endl;
    player2Score = askquestion(questions, 6, 10);

    cout << "Player 1 Scores : " << player1Score << endl;
    cout << "Player 2 Scores : " << player2Score << endl;

    if (player1Score > player2Score)
    {
        cout << "Player 1 wins!\n";
    }
    else if (player2Score > player1Score)
    {
        cout << "Player 2 wins!\n";
    }
    else
    {
        cout << "It's a tie!\n";
    }

    //****************** 17 *******************/

    // inventoryitem item("Water Pump", 10.0, 100);
    // caschregister c;
    // c.purchaseprocess(item);
    // cout << "Remaining Quantity : " << item.getquantity() << endl;

    //****************** 16 *******************/

    // temp t;
    // int temperature;
    // cout << "Enter The Temperature : ";
    // cin >> temperature;
    // t.settemperature(temperature);
    // if (t.isethylfreezing())
    // {
    //     cout << "Ethyl Will Freeze At This Temperature." << endl;
    // }
    // if (t.isethylboiling())
    // {
    //     cout << "Ethyl Will Boil At This Temperature." << endl;
    // }

    // if (t.isoxygenfreezing())
    // {
    //     cout << "Oxygen Will Freeze At This Temperature." << endl;
    // }
    // if (t.isoxygenboiling())
    // {
    //     cout << "Oxygen Will Boil At This Temperature." << endl;
    // }

    // if (t.iswaterfreezing())
    // {
    //     cout << "Water Will Freeze At This Temperature." << endl;
    // }
    // if (t.iswaterboiling())
    // {
    //     cout << "Water Will Boil At This Temperature." << endl;
    // }

    //****************** 15 *******************/
    // mortgage m;
    // m.setloan(200000);
    // m.setrate(3.5);
    // m.setyears(30);
    // cout << "Monthly Payment : " << m.getpayment() << endl;
    // cout << "Total Payment : " << m.gettotalpayment() << endl;

    //****************** 14,18 *******************/

    // srand(time(0));

    // dice d, computer;
    // int points[6] = {12, 0, 7, 5, 3, -5};
    // string caught[6] = {"A Big Fish", "An Old Shoe", "A little Fish", "A Snake", "A Jelly Fish", "An Old Bottle"};
    // char choice;
    // int cnum;
    // int comnum;
    // int mytotalpoints = 0;
    // int computertotalpoints = 0;
    // while (true)
    // {
    //     cout << "You Want To Continue Fishing? (Y/N) : ";
    //     cin >> choice;
    //     if (toupper(choice) == 'Y' && mytotalpoints < 22)
    //     {
    //         d.roll();
    //         computer.roll();
    //         cnum = d.getnumber();
    //         comnum = computer.getnumber();

    //         cout << "Cought : " << caught[cnum - 1] << endl;
    //         mytotalpoints += points[cnum - 1];
    //         computertotalpoints += points[comnum - 1];
    //     }
    //     else if (toupper(choice) == 'Y' && mytotalpoints >= 22)
    //     {
    //         cout << "Your Points Are Greater Than 21." << endl;
    //         break;
    //     }

    //     else if (toupper(choice) == 'N')
    //     {
    //         cout << "Breaking Loop!" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Invalid Selection, Select Again." << endl;
    //     }
    // }
    // cout << "Total Number Of Points You Earned : " << mytotalpoints << endl;
    // cout << "Total Number Of Points Computer Earned : " << computertotalpoints << endl;

    // if (mytotalpoints < 22 && mytotalpoints > computertotalpoints)
    // {
    //     cout << "You Won!" << endl;
    // }
    // else if (mytotalpoints < 22 && computertotalpoints > 21)
    // {
    //     cout << "You Won!" << endl;
    // }
    // else
    // {
    //     cout << "You Lost!" << endl;
    // }

    // if (total_points >= 50)
    // {
    //     cout << "Congratulations! You are a fishing legend!\n";
    // }
    // else if (total_points >= 30)
    // {
    //     cout << "Great job! You're a skilled fisherman!\n";
    // }
    // else if (total_points >= 10)
    // {
    //     cout << "Not bad! You're getting the hang of fishing.\n";
    // }
    // else if (total_points > 0)
    // {
    //     cout << "You caught a few things, but keep practicing!\n";
    // }
    // else
    // {
    //     cout << "Better luck next time! Try fishing again.\n";
    // }

    //****************** 13 *******************/

    // srand(time(0));

    // coin quarter, dime, nickel;
    // double balance = 0;
    // double quarter_value = 0.25;
    // double dime_value = 0.10;
    // double nickel_value = 0.05;

    // cout << "Tossing Untill Balance Become 1 or more than 1." << endl;
    // while (balance < 1.0)
    // {
    //     cout << "Press Any Key To Toss The Coins : " << endl;
    //     getch();
    //     quarter.toss();
    //     dime.toss();
    //     nickel.toss();
    //     if (quarter.getdiseup() == "Heads")
    //     {
    //         balance += quarter_value;
    //         cout << "Quarter : Heads --- Balance = $" << balance << endl;
    //     }
    //     else
    //     {
    //         cout << "Quarter : Tails --- No Change In Balance." << endl;
    //     }

    //     if (dime.getdiseup() == "Heads")
    //     {
    //         balance += dime_value;
    //         cout << "Dime : Heads --- Balance = $" << balance << endl;
    //     }
    //     else
    //     {
    //         cout << "Dime : Tails --- No Change In Balance." << endl;
    //     }

    //     if (nickel.getdiseup() == "Heads")
    //     {
    //         balance += nickel_value;
    //         cout << "Nickel : Heads --- Balance = $" << balance << endl;
    //     }
    //     else
    //     {
    //         cout << "Nickel : Tails --- No Change In Balance." << endl;
    //     }

    //     if (balance == 1.0)
    //     {
    //         cout << "Congratulation! You Won Balance Is : " << balance << endl;
    //     }
    //     if (balance > 1.0)
    //     {
    //         cout << "You Lost The Game , Balance Is : " << balance << endl;
    //     }
    // }

    //****************** 12 *******************/

    // srand(time(0));

    // coin c;
    // int count = 0;
    // int counth = 0;
    // int countt = 0;
    // cout << "Initially Up-Side is : " << c.getdiseup() << endl;

    // while (count != 20)
    // {
    //     cout << "Press Any Key To Toss The Coin : " << endl;
    //     getch();
    //     c.toss();
    //     count++;
    //     cout << "After Toss " << count << " Up-Side  : " << c.getdiseup() << endl;

    //     if (c.getdiseup() == "Heads")
    //     {
    //         counth++;
    //     }
    //     else
    //     {
    //         countt++;
    //     }
    // }

    // cout << "Tail " << countt << " Times." << endl;
    // cout << "Head " << counth << " Times." << endl;

    //****************** 11 *******************/

    // const int size = 3;

    // payroll p[size];
    // int hours;
    // double pay;
    // double total;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Employee " << i + 1 << " : " << endl;
    //     ;
    //     cout << "How many hours worked? ";
    //     cin >> hours;
    //     p[i].sethours(hours);
    //     cout << "What Is Pay rate? $";
    //     cin >> pay;
    //     p[i].setpay(pay);
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "EMPLOYE " << i + 1 << " : " << endl;
    //     p[i].display();
    // }

    //****************** 10 *******************/
    // int size;
    // cout << "Number Of Elements In Array : ";
    // cin >> size;
    // int number;
    // carray a(size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter Number At Index " << i + 1 << " : ";
    //     cin >> number;
    //     a.setnumber(number, i);
    // }
    // a.setvalues();
    // cout << "Highest Value : " << a.gethighest() << endl;
    // cout << "Lowest Value : " << a.getlowest() << endl;
    // cout << "Average Value : " << a.getaverage() << endl;

    //****************** 9 *******************/

    // population p1,p2(100000,8000,6000);
    // cout<<"P1"<<endl;
    // p1.display();
    // cout<<"P2"<<endl;
    // p2.display();

    //****************** 8 *******************/

    // circle c1, c2(3);
    // cout << "C1 I" << endl;
    // c1.display();
    // cout << "C1 II" << endl;
    // c1.setradius(4);
    // c1.display();
    // cout << "C2" << endl;
    // c2.display();

    //****************** 7 *******************/

    // testscores t(72, 98, 15);
    // double average;
    // average = t.getaverage();
    // cout << setprecision(4) << "AVERAGE : " << average << " Scores" << endl;

    //****************** 6 *******************/

    // inventory i1(1,2,12);
    // i1.display();
    // inventory i2(2,3.3,7);
    // i2.display();
    // inventory i3(3,1.5,25);
    // i3.display();

    //****************** 5 *******************/

    // retailitem r[3] = {{"Jacket", 12, 59.95}, {"Designer Jeans", 40, 34.95}, {"Shirt", 20, 24.95}};

    // cout << left << setw(30) << "DISCRIPTION" << left << setw(15) << "UNITS" << left << setw(15) << "PRICE" << endl;

    // for (int i = 0; i < 3; i++)
    // {

    //     cout << left << setw(30) << r[i].getdiscription() << left << setw(15) << r[i].getunits() << left << setw(15) << r[i].getprice() << endl;
    // }

    //****************** 4 *******************/

    // personal_data p1, p2, p3;
    // p1.setname("Atta Ul Mustafa");
    // p1.setaddress("Basti Ghazi Shah Street No. 2 House No. E11, Jhang");
    // p1.setage(22);
    // p1.setnumber("0300-7783334");
    // p1.display();

    // p2.setname("Laraib");
    // p2.setaddress("Sanat Pura Street No. 2 House No. E11, Faisalabad");
    // p2.setage(24);
    // p2.setnumber("0300-7783335");
    // p2.display();

    // p2.setname("Amna Mushtaq");
    // p2.setaddress("Jinnah Colony Street No. 12 House No. Z11, Jhang");
    // p2.setage(24);
    // p2.setnumber("0311-7783335");
    // p2.display();

    //****************** 3 *******************/

    // car c(2001, "Honda Civic");
    // int speed, yearmodel;
    // string make;
    // c.accelerate();
    // speed = c.getspeed();
    // cout << "Speed After 1 Acceleration : " << speed << endl;
    // c.accelerate();
    // speed = c.getspeed();
    // cout << "Speed After 2 Acceleration : " << speed << endl;
    // c.accelerate();
    // speed = c.getspeed();
    // cout << "Speed After 3 Acceleration : " << speed << endl;
    // c.accelerate();
    // speed = c.getspeed();
    // cout << "Speed After 4 Acceleration : " << speed << endl;
    // c.accelerate();
    // speed = c.getspeed();
    // cout << "Speed After 5 Acceleration : " << speed << endl;

    // c.brake();
    // speed = c.getspeed();
    // cout << "Speed After 1 Brake : " << speed << endl;
    // c.brake();
    // speed = c.getspeed();
    // cout << "Speed After 2 Brake : " << speed << endl;
    // c.brake();
    // speed = c.getspeed();
    // cout << "Speed After 3 Brake : " << speed << endl;
    // c.brake();
    // speed = c.getspeed();
    // cout << "Speed After 4 Brake : " << speed << endl;
    // c.brake();
    // speed = c.getspeed();
    // cout << "Speed After 5 Brake : " << speed << endl;

    //****************** 2 *******************/

    // employee e[3];
    // string name, department, position;
    // int id;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "ENTER EMPLOYE " << i + 1 << " Data : " << endl;
    //     cout << "Name : ";
    //     getline(cin, name);
    //     e[i].setname(name);
    //     cout << "Id Number : ";
    //     cin >> id;
    //     cin.ignore();
    //     e[i].setidnumber(id);
    //     cout << "Department : ";
    //     getline(cin, department);
    //     e[i].setdepartment(department);
    //     cout << "Position : ";
    //     getline(cin, position);
    //     e[i].setposition(position);
    // }

    // cout<<left<<setw(20)<<"Name"<<left<<setw(11)<<"Id Number"<<left<<setw(20)<<"Department"<<left<<setw(30)<<"Position"<<endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<left<<setw(20)<<e[i].getname();
    //     cout<<left<<setw(11)<<e[i].getidnumber();
    //     cout<<left<<setw(20)<<e[i].getdepartment();
    //     cout<<left<<setw(30)<<e[i].getposition()<<endl;;
    // }

    //****************** 1 *******************/

    // date d;
    // int day, month, year;
    // do
    // {
    //     cout << "Enter Day : ";
    //     cin >> day;
    //     if (day > 31 || day < 1)
    //     {
    //         cout << "Day Can't Be More Than 31 or Less Than 1." << endl;
    //     }

    // } while (day > 31 || day < 1);
    // do
    // {
    //     cout << "Enter Month : ";
    //     cin >> month;
    //     if (month > 12 || month < 1)
    //     {
    //         cout << "Month Can't Be More Than 12 or Less Than 1." << endl;
    //     }

    // } while (month > 12 || month < 1);
    // cout << "Enter Year : ";
    // cin >> year;
    // d.setdate(day, month, year);
    // d.getdate();

    return 0;
}