#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <algorithm>
using namespace std;

const float pi = 3.14159;

void circle_area(float radius)
{
    cout << "Enter Radius Of Circle : ";
    cin >> radius;
    if (radius < 0)
    {
        cout << "Radius Can Not Be In Negative Numbers.";
    }
    else
    {

        float area = pi * pow(radius, 2);
        cout << "Area Of Circle : " << area << endl;
    }
}
void rectangle_area(float length, float width)
{

    cout << "Enetr Length : ";
    cin >> length;
    cout << "Enetr Width : ";
    cin >> width;
    if ((length < 0 || width < 0))
    {
        cout << "Length or Width Can Not Be In Negative Numbers.";
    }
    else
    {

        float area = length * width;
        cout << "Area Of Rectangle : " << area << endl;
    }
}
void triangle_area(float base, float height)
{
    cout << "Enetr Base : ";
    cin >> base;
    cout << "Enetr Height : ";
    cin >> height;
    if ((base < 0 || height < 0))
    {
        cout << "Base or Height Can Not Be In Negative Numbers.";
    }
    else
    {

        float area = (base * height) * 0.5;
        cout << "Area Of Triangle : " << area << endl;
    }
}

// bool leepyear(int saal)
// {
//     if (saal % 100 == 0)
//     {
//         return (saal % 400 == 0);
//     }
//     else
//     {
//         return (saal % 4 == 0);
//     }
// };

struct vault
{
    string date;
    double height;
};
bool comparevalues(vault &a, vault &b)
{
    return (a.height > b.height);
}

int main()
{
    // double a = 1.5; // a is 1.5.
    // double b = 1.5; // b is 1.5.
    // // cout<<setprecision(20)<<fixed<<showpoint;

    // a += 0.000000000000001; // Add a little to a.
    // if (a == b)
    //     cout << "Both a and b are the same.\n";
    // else
    //     cout << "a and b are not the same.\n";

    //  int y=1;
    //  int x;
    //     if (y==0){
    //         x=100;
    //         cout<<x;
    //     }
    //     else{
    //         x=25;
    //         cout<<x;
    //     }

    // int sales;
    // double commission_rate, commission;
    // cout << "enter sales: ";
    // cin >> sales;
    // if (sales <= 10000)
    // {
    //     commission_rate = 0.10;
    //     commission = sales * commission_rate;
    //     cout << "Applied Commission Rate is " << commission_rate << " and Commission Money is : $" << commission << endl;
    // }
    // else if (sales <= 15000)
    // {
    //     commission_rate = 0.15;
    //     commission = sales * commission_rate;
    //     cout << "Applied Commission Rate is " << commission_rate << " and Commission Money is : $" << commission << endl;
    // }
    // else
    // {
    //     commission_rate = 0.20;
    //     commission = sales * commission_rate;
    //     cout << "Applied Commission Rate is " << commission_rate << " and Commission Money is : $" << commission << endl;
    // }

    // int hours;
    // cout<<"Hours : ";
    // cin>>hours;
    // hours=hours<10 ? 10 : hours;
    // cout<<"Hours are : "<<hours;

    // int amount1, amount2;
    // cout << "Amount 1 : ";
    // cin >> amount1;

    // if (amount1 > 10)
    // {
    //     cout << "Amount 2 : ";
    //     cin >> amount2;

    //     if (amount2 < 100)
    //     {
    //         if (amount1 > amount2)
    //         {
    //             cout << amount1 << " is greater.";
    //         }
    //         else
    //         {
    //             cout << amount2 << " is greater.";
    //         }
    //     }
    //     else
    //     {
    //         cout << "Amount 2 is Out of range." << endl;
    //     }
    // }
    // else
    // {
    //     cout << "Amount 1 is Below the range." << endl;
    // }

    // int number;
    // cout<<"Number : ";
    // cin>>number;
    // if(number>=0 && number<=100){
    //     cout<<"The Number is Valid.";
    // }
    // else{
    //     cout<<"The Number is NOT Valid.";

    // }

    // string str1, str2;
    // cout << "String 1 : ";
    // cin >> str1;
    // cout << "String 2 : ";
    // cin >> str2;
    // if (str1 > str2)
    // {
    //     cout << str1 << " is alphabetically greater than " << str2 << endl;
    // }
    // else
    // {
    //     cout << str2 << " is alphabetically greater than " << str1 << endl;
    // }

    // int choice;
    // double v=1.123456789;
    // cout << "Enter Choice from 1 to 4 : ";
    // cin >> choice;
    // switch (choice)
    // {
    // case 1:
    //     cout << fixed << showpoint << setprecision(2);
    //     cout<<"V : "<<v;
    //     break;
    // case 2:
    // case 3:
    //     cout << fixed << showpoint << setprecision(4);
    //     cout<<"V : "<<v;
    //     break;

    // case 4:
    //     cout << fixed << showpoint << setprecision(6);
    //     cout<<"V : "<<v;
    //     break;
    // default:
    //     cout << fixed << showpoint << setprecision(8);
    //     cout<<"V : "<<v;
    // }

    //  cout << "Enter your 3 test scores and I will average them:" << endl;
    // int score1, score2, score3; // Fix the missing semicolon
    // cin >> score1 >> score2 >> score3;

    // double average;
    // average = (score1 + score2 + score3) / 3.0;

    // bool perfectScore = false; // Declare and initialize the variable

    // if (average == 100) // Use equality operator
    // {
    //     perfectScore = true; // Set the flag variable
    // }

    // cout << "Your average is " << average << endl;

    // if (perfectScore==true) // Remove the semicolon
    // {
    //     cout << "Congratulations!\n";
    //     cout << "That's a perfect score.\n";
    //     cout << "You deserve a pat on the back!\n";
    // }

    // double a,b;
    // cout<<"Enter 1st Number : ";
    // cin>>a;
    // cout<<"Enter 2nd Number : ";
    // cin>>b;
    // if(a>b){
    //     cout<<"Larger : "<<a<<endl;
    //     cout<<"Smaller : "<<b<<endl;
    // }
    // else{
    //     cout<<"Larger : "<<b<<endl;
    //     cout<<"Smaller : "<<a<<endl;
    // }

    // int a, b;
    // cout << "Enter 1st Number : ";
    // cin >> a;

    // if (a <= 10 && a > 0)
    // {
    //     switch (a)
    //     {
    //     case 1:
    //         cout << "I";
    //         break;
    //     case 2:
    //         cout << "II";
    //         break;
    //     case 3:
    //         cout << "III";
    //         break;
    //     case 4:
    //         cout << "IV";
    //         break;
    //     case 5:
    //         cout << "V";
    //         break;
    //     case 6:
    //         cout << "VI";
    //         break;
    //     case 7:
    //         cout << "VII";
    //         break;
    //     case 8:
    //         cout << "VIII";
    //         break;
    //     case 9:
    //         cout << "IX";
    //         break;
    //     case 10:
    //         cout << "X";
    //         break;

    //     default:
    //         cout << "Inavlid Number!";
    //         break;
    //     }
    // }
    // else
    // {
    //     cout << "Invalid Number!";
    // }

    // int day,month ,year;
    // cout<<"Enter Day : ";
    // cin>>day;
    // cout<<"Enter Month : ";
    // cin>>month;
    // cout<<"Enter Two Digit Year : ";
    // cin>>year;

    // if(day*month==year){
    //     cout<<"The Date Is Magic";
    // }
    // else{
    //     cout<<"The Date Is NOT Magic";

    // }

    // double l1,w1,area1;
    // cout<<"Enter Length Of 1st Rectangle : ";
    // cin>>l1;
    // cout<<"Enter Width Of 1st Rectangle : ";
    // cin>>w1;
    // area1=l1*w1;
    // cout<<"Area Of 1st Rectangle is : "<<area1<<endl;
    // double l2,w2,area2;
    // cout<<"Enter Length Of 2nd Rectangle : ";
    // cin>>l2;
    // cout<<"Enter Width Of 2nd Rectangle : ";
    // cin>>w2;
    // area2=l2*w2;
    // cout<<"Area Of 2nd Rectangle is : "<<area2<<endl;

    // if(area1>area2){
    //     cout<<"Area of 1st Rectangle Is Greater. Which Is : "<<area1<<endl;
    // }
    // else if(area2>area1){
    //     cout<<"Area of 2nd Rectangle Is Greater. Which Is : "<<area2<<endl;
    // }
    // else{
    //     cout<<"Both Rectangles Area is Equal! Which is : "<<area1<<endl;
    // }

    // double weight,height,BMI;
    // cout<<"Enter Your Weight In Pounds : ";
    // cin>>weight;
    // cout<<"Enter Your height In Inches : ";
    // cin>>height;
    // BMI=weight*(703/(pow(height,2)));
    // cout<<"Your Body Mass Index Is : "<<BMI<<endl;
    // if(BMI>25){
    //     cout<<"You are Overweight!"<<endl;
    // }
    // else if (BMI<18.5){

    //     cout<<"You are Underweight!"<<endl;
    // }
    // else{
    //     cout<<"Your Weight Is Optimal!"<<endl;
    // }

    // double mass,weight;
    // cout<<"Mass : ";
    // cin>>mass;
    // weight=mass*9.8;
    // cout<<"Weight is : "<<weight<<" Newton"<<endl;
    // if(weight>1000){
    //     cout<<"Too Heavy Object.";
    // }
    // else if(weight<10){
    //     cout<<"Too Light Object.";
    // }
    // else{
    //     cout<<"Normal Weight.";
    // }

    // double seconds,minutes,hours,days;
    // cout<<"Enter Number Of Seconds : ";
    // cin>>seconds;
    // if (seconds>=60 && seconds<3600)
    // {
    //     minutes=seconds/60;
    //     cout<<"Minutes in given Seconds are : "<<minutes<<endl;
    // }
    // else if (seconds>=3600 && seconds<86400)
    // {
    //     hours=seconds/3600;
    //     cout<<"Hours in given Seconds are : "<<hours<<endl;
    // }
    // else{
    //     days=seconds/86400;
    //     cout<<"Days in given Seconds are : "<<days<<endl;
    // }

    // string color1, color2;
    // cout << "1st Color : ";
    // cin >> color1;
    // cout << "2nd Color : ";
    // cin >> color2;

    // if ((color1 != "red" && color1 != "blue" && color1 != "yellow") || (color2 != "red" && color2 != "blue" && color2 != "yellow"))
    // {
    //     cout << "Error! Only write Color from RED,BLUE and YELLOW.";
    // }
    // else
    // {

    //     if ((color1 == "red" && color1 == "blue") || (color2 == "blue" && color2 == "red"))
    //     {
    //         cout << "You get PURPLE color.";
    //     }
    //     else if ((color1 == "yellow" && color1 == "blue") || (color2 == "blue" && color2 == "yellow"))
    //     {
    //         cout << "You get ORANGE color.";
    //     }
    //     else if ((color1 == "red" && color1 == "yellow") || (color2 == "yellow" && color2 == "red"))
    //     {
    //         cout << "You get GREEN color.";
    //     }
    //     else
    //     {
    //         cout << "You get " << color1 << " color.";
    //     }
    // }

    // const int pennie_value=1;
    // const int nikels_value=5;
    // const int dimes_value=10;
    // const int quarters_value=25;
    // const int dollar_value=100;

    //  int pennies, nickels, dimes, quarters;

    // // Prompt user to enter the number of each type of coin
    // cout << "Enter the number of pennies: ";
    // cin >> pennies;
    // cout << "Enter the number of nickels: ";
    // cin >> nickels;
    // cout << "Enter the number of dimes: ";
    // cin >> dimes;
    // cout << "Enter the number of quarters: ";
    // cin >> quarters;

    // int total_value;
    // total_value=(pennies*pennie_value)+(nikels_value*nickels)+(dimes*dimes_value)+(quarters*quarters_value);
    // if (total_value==dollar_value)
    // {
    //     cout<<"Congratulation! You Won The Game.";
    // }
    // else if(total_value<dollar_value){

    //     cout<<"The total value of the coins is less than one dollar.";
    // }
    // else {

    //     cout<<"The total value of the coins is more than one dollar.";
    // }

    // int month ,year;
    // cout<<"Month : ";
    // cin>>month;
    // cout<<"Year : ";
    // cin>>year;

    // if (month<1 || month>12){
    //     cout<<"invalid month!";
    // }

    // int days;
    // switch (month)
    // {
    // case 1:
    // case 3:
    // case 5:
    // case 7:
    // case 8:
    // case 10:
    // case 12:
    //     days=31;
    //     break;

    // case 4:
    // case 6:
    // case 9:
    // case 11:

    // days=30;
    // break;

    // case 2:
    // if(leepyear(year)){
    //     days=29;
    // }
    // else{
    //     days=28;
    // }

    //     break;

    // default:
    // cout<<"invalid month!";
    //     break;
    // }
    //  cout << "The number of days in month " << month << " of year " << year << " is " << days << "." << endl;

    // int num1,num2;
    // srand(time(0));
    // num1=rand();
    // num2=rand();

    // cout<<" "<<num1<<endl;
    // cout<<"+"<<num2<<endl;
    // cout<<"---------"<<endl;
    // int ans,sum=num1+num2;
    // cout<<"Enter Your Answer : ";
    // cin>>ans;

    // if(ans==sum){
    //     cout<<"Answer is Correct. Which is : "<<ans;
    // }
    // else{
    //     cout<<"Answer is NOT Correct. Correct Answer is : "<<sum;

    // }

    // int quantity;
    // const double price = 99;
    // double total_cost;
    // double discount;
    // cout << "Quantity : ";
    // cin >> quantity;

    // if (quantity < 1)
    // {
    //     cout << "No Quantity!" << endl;
    // }
    // else
    // {

    //     if (quantity > 9 && quantity < 20)
    //     {
    //         discount = 20;
    //         cout << "Youe Will get " << discount << "% Discount" << endl;
    //     }
    //     else if (quantity >= 20 && quantity < 50)
    //     {
    //         discount = 30;
    //         cout << "Youe Will get " << discount << "% Discount" << endl;
    //     }
    //     else if (quantity >= 50 && quantity <= 99)
    //     {
    //         discount = 40;
    //         cout << "Youe Will get " << discount << "% Discount" << endl;
    //     }
    //     else if (quantity > 100)
    //     {
    //         discount = 50;
    //         cout << "Youe Will get " << discount << "% Discount" << endl;
    //     }
    //     else
    //     {
    //         discount = 0;

    //         cout << "Youe Will get " << discount << "% Discount" << endl;
    //     }

    //     double discount_amount = (price * quantity) * (discount / 100);

    //     total_cost = (price * quantity) - discount_amount;
    //     cout << "Total Cost : " << price * quantity << "$" << endl;
    //     cout << "Discount : " << discount_amount << "$" << endl;
    //     cout << "You Have To Pay " << total_cost << "$ After Discount." << endl;
    // }

    // int points ,books;
    // cout<<"Enter NO. Books Purchased This Month : ";
    // cin>>books;
    // if(books==0){
    //     points=0;
    //     cout<<"You earned "<<points<<" points."<<endl;
    // }
    // else if(books==1){
    //     points=5;
    //     cout<<"You earned "<<points<<" points."<<endl;
    // }
    // else if(books==2){
    //     points=15;
    //     cout<<"You earned "<<points<<" points."<<endl;
    // }
    // else if(books==3){
    //     points=30;
    //     cout<<"You earned "<<points<<" points."<<endl;
    // }
    // else if(books>=4){
    //     points=60;
    //     cout<<"You earned "<<points<<" points."<<endl;
    // }
    // else{
    //     cout<<"Enter only Positive Numbers."<<endl;
    // }

    // double balance, below_balance_charge=15.0;
    // double check_fees=10;
    // int no_of_checks;
    // cout<<"Balance : ";
    // cin>>balance;
    // cout<<"NO. Of Checks : ";
    // cin>>no_of_checks;

    // if(no_of_checks<0){
    //     cout<<"NO. Of Checks Can't Be In Negative Numbers."<<endl;
    // }
    // else{

    // if (no_of_checks<20)
    // {
    //     check_fees+=(no_of_checks*0.10);
    //     cout<<"Check Fees : 0.10 "<<endl;
    // }
    // else if (no_of_checks>=20 && no_of_checks<=39)
    // {
    //     check_fees+=(no_of_checks*0.08);
    //     cout<<"Check Fees : 0.08 "<<endl;
    // }
    // else if (no_of_checks>=40 && no_of_checks<=59)
    // {
    //     check_fees+=(no_of_checks*0.06);
    //     cout<<"Check Fees : 0.06 "<<endl;
    // }
    // else if (no_of_checks>=60)
    // {
    //     check_fees+=(no_of_checks*0.04);
    //     cout<<"Check Fees : 0.04 "<<endl;
    // }
    // else{
    //     cout<<"Enter Positive Number."<<endl;
    // }

    // if (balance<400){
    //     cout<<"Bank Service Fee For The Month : "<<check_fees+15<<"$"<<endl;
    // }
    // else{
    //     cout<<"Bank Service Fee For The Month : "<<check_fees<<"$"<<endl;
    // }

    // }

    // double weight, shipping_charges_500;
    // int distance;
    // cout << "Weight : ";
    // cin >> weight;

    // cout << setprecision(3) << fixed << showpoint;

    // if (weight < 0 || weight > 20)
    // {
    //     cout << "We can not carry this weight." << endl;
    // }
    // else
    // {

    //     if (weight > 0 && weight <= 2)
    //     {
    //         shipping_charges_500 = 1.10;
    //         cout << "Shipping Charges for 500 Miles : " << shipping_charges_500 << endl;
    //     }
    //     else if (weight > 2 && weight <= 6)
    //     {
    //         shipping_charges_500 = 2.20;
    //         cout << "Shipping Charges for 500 Miles : " << shipping_charges_500 << endl;
    //     }
    //     else if (weight > 6 && weight <= 10)
    //     {
    //         shipping_charges_500 = 3.70;
    //         cout << "Shipping Charges for 500 Miles : " << shipping_charges_500 << endl;
    //     }
    //     else if (weight > 10 && weight <= 200)
    //     {
    //         shipping_charges_500 = 3.70;
    //         cout << "Shipping Charges for 500 Miles : " << shipping_charges_500 << endl;
    //     }
    //     else
    //     {
    //         cout << "We Can Not Carry This Much Weight." << endl;
    //     }

    //     cout << "Distance : ";
    //     cin >> distance;
    //     double pmc = shipping_charges_500 / 500;

    //     if (distance > 3000 || distance < 10)
    //     {
    //         cout << "This distance is out of our range." << endl;
    //     }
    //     else
    //     {
    //         cout << "Shipping charges per mile : " << pmc << endl;
    //         cout << "Total Charges on " << weight << "kg weight and " << distance << " miles distance is : " << pmc * distance << "$" << endl;
    //     }
    // }

    // string name1, name2, name3;
    // double time1, time2, time3;
    // cout << "Enter Runner 1 Name : ";
    // cin >> name1;
    // cout << "Enter Runner 2 Name : ";
    // cin >> name2;
    // cout << "Enter Runner 3 Name : ";
    // cin >> name3;
    // cout << "Enter time taken by " << name1 << " to finish the race : ";
    // cin >> time1;
    // cout << "Enter time taken by " << name2 << " to finish the race : ";
    // cin >> time2;
    // cout << "Enter time taken by " << name3 << " to finish the race : ";
    // cin >> time3;

    // if (time < 0)
    // {
    //     cout << "Enter time in positive numbers.";
    // }
    // else
    // {
    //     if (time1 < time2 && time1 < time3)
    //     {
    //         cout << name1 << " is winnwer.";
    //     }
    //     else if (time2 < time1 && time2 < time3)
    //     {
    //         cout << name2 << " is winnwer.";
    //     }
    //     else
    //     {
    //         cout << name3 << " is winnwer.";
    //     }
    // }

    // string name;
    // cout<<"Name : ";
    // cin>>name;
    // vault v1[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"Date (dd-mm-yyyy) : ";
    //     cin>>v1[i].date;
    //     cout<<"Height : ";
    //     cin>>v1[i].height;

    //     if(v1[i].height<2.0 || v1[i].height>5.0){
    //         cout<<"Invalid Height, Please Enter value betweem 2.0 to 5.0"<<endl;
    //     }
    //     else{
    //         cout<<endl;
    //     }

    // }
    // sort(v1,v1+3,comparevalues);
    // cout << "\nAthlete: " << name << "\n";
    // cout << "Top 3 Vaults:\n";
    // for (int i = 0; i < 3; i++)
    // {
    //      cout << "Date: " << v1[i].date << ", Height: " << v1[i].height << " meters\n";
    // };

    // double calories,fat,total_calories;
    // cout<<"No. of calories : ";
    // cin>>calories;
    // cout<<"Fat in Grams : ";cin>>fat;
    // double calorie_in_fat=fat*9;
    // total_calories=(calorie_in_fat+calories);
    // cout<<"Percentage of Calories from Fat : "<<(calorie_in_fat/total_calories)*100<<endl;

    //  double wavelength;

    //     // Ask for the wavelength of the electromagnetic wave
    //     cout << "Enter the wavelength of the electromagnetic wave in meters: ";
    //     cin >> wavelength;

    //     // Input validation
    //     if (wavelength <= 0) {
    //         cout << "Error: Wavelength must be greater than 0." << endl;
    //         return 1;
    //     }

    //     // Determine the type of radiation based on wavelength
    //     if (wavelength >= 1e-2) {
    //         cout << "The wave is a Radio Wave." << endl;
    //     } else if (wavelength >= 1e-3) {
    //         cout << "The wave is a Microwave." << endl;
    //     } else if (wavelength >= 7e-7) {
    //         cout << "The wave is Infrared." << endl;
    //     } else if (wavelength >= 4e-7) {
    //         cout << "The wave is Visible Light." << endl;
    //     } else if (wavelength >= 1e-8) {
    //         cout << "The wave is Ultraviolet." << endl;
    //     } else if (wavelength >= 1e-11) {
    //         cout << "The wave is an X-Ray." << endl;
    //     } else {
    //         cout << "The wave is a Gamma Ray." << endl;
    //     }

    // double speed_in_air = 1100;
    // double speed_in_water = 4900;
    // double speed_in_steel = 16400;
    // cout << "Select One From The Below : " << endl;
    // cout << "1.Speed In Air " << endl;
    // cout << "2.Speed In Water " << endl;
    // cout << "3.Speed In Steel " << endl;
    // int chose;
    // cin >> chose;
    // if (chose > 3 || chose < 1)
    // {
    //     cout << "Invalid Choice.";
    // }
    // else
    // {

    //     int distance;
    //     cout << "Enter the Distance In Feet : ";
    //     cin >> distance;
    //     double time;

    //     switch (chose)
    //     {
    //     case 1:
    //         time = distance / speed_in_air;
    //         cout << "Time to Travel In Aiw : " << time << " seconds" << endl;

    //         break;
    //     case 2:
    //         time = distance / speed_in_water;
    //         cout << "Time to Travel In Water : " << time << " seconds" << endl;
    //         break;
    //     case 3:
    //         time = distance / speed_in_steel;
    //         cout << "Time to Travel In Steel  : " << time << " seconds" << endl;
    //         break;
    //     default:
    //         break;
    //     }
    // }

    // double speed_in_carbon_dioxide = 258.0;
    // double speed_in_air = 331.5;
    // double speed_in_helium = 972.0;
    // double speed_in_hydrogen = 1270.0;
    // cout << "Speed Of Sound In Different Gases At 0 Degree Centigrade :" << endl;
    // cout << "1.Carbon Dioxide = 258.0 " << endl;
    // cout << "2.Air            = 331.5  " << endl;
    // cout << "3.Helium         = 972.0 " << endl;
    // cout << "4.Hydrogen       = 1,270.0  " << endl;
    // int chose;
    // double time;
    // cout << "Select One Of Them : ";
    // cin >> chose;
    // if (chose > 4 || chose < 1)
    // {
    //     cout << "Invalid Selection.";
    // }
    // else
    // {

    //     cout << "Number Of Seconds It Travels : ";
    //     cin >> time;

    //     if (time > 30 || time < 0)
    //     {
    //         cout << "Select Only Between 0 to 30 Seconds.";
    //     }
    //     else
    //     {

    //         switch (chose)
    //         {
    //         case 1:
    //             cout << "Distance Covered : " << time * speed_in_carbon_dioxide << " meters." << endl;
    //             break;
    //         case 2:
    //             cout << "Distance Covered : " << time * speed_in_air << " meters." << endl;
    //             break;
    //         case 3:
    //             cout << "Distance Covered : " << time * speed_in_helium << " meters." << endl;
    //             break;
    //         case 4:
    //             cout << "Distance Covered : " << time * speed_in_hydrogen << " meters." << endl;
    //             break;

    //         default:
    //             cout << "invalid entry";
    //             break;
    //         }
    //     }
    // }

    // int choice;
    // float radius, base, height, length, width;
    // cout << "1.Calculate Area Of a Cicrle " << endl;
    // cout << "2.Calculate Area Of a Rectangle " << endl;
    // cout << "3.Calculate Area Of a Triangle " << endl;
    // cout << "4.Quit : " << endl;
    // cout << "Enter Your Choice (1-4) : " << endl;
    // cin >> choice;
    // switch (choice)
    // {
    // case 1:
    //     circle_area(radius);
    //     break;
    // case 2:
    //     rectangle_area(length, width);
    //     break;
    // case 3:
    //     triangle_area(base, height);
    //     break;
    // case 4:
    //     cout << "Quited!";
    //     break;

    // default:
    //     cout << "Invalid Selection. Only Select (1-4).";
    //     break;
    // }

    // double starting_time, ending_time, rate, charges;
    // // cout<<"Enter Starting Time OF call : ";
    // // cin>>starting_time;
    // cout << "Number Of Hours Of call (HH.MM) : ";
    // cin >> ending_time;
    // if (ending_time < 0 && ending_time > 23.59)
    // {
    //     cout << "Invalid Entry! Enter Between (00.00-23.59)" << endl;
    // }
    // else
    // {

    //     if (ending_time > 0 && ending_time <= 6.59)
    //     {
    //         rate = 0.05;
    //     }
    //     else if (ending_time >= 7.00 && ending_time <= 19.00)
    //     {
    //         rate = 0.45;
    //     }
    //     else if (ending_time >= 19.01 && ending_time <= 23.59)
    //     {
    //         rate = 0.20;
    //     }
    //     else
    //     {
    //         cout << "Invalid Entery!";
    //     }
    // }
    // double minutes = (ending_time - (int(ending_time))) * 100;
    // if (minutes > 60)
    // {
    //     cout << "Minutes Can Not Exceed From 59 (0.59)." << endl;
    // }
    // else
    // {

    //     double total_minutes = (int(ending_time) * 60) + minutes;
    //     cout << "Total Minutes : " << total_minutes << endl;
    //     cout << "Rate According To Call Duration : " << rate << endl;

    //     charges = total_minutes * rate;
    //     cout << "Total Charges : " << charges << " Rs" << endl;
    // }

    char choice;
    double rate, minutes, additional_rate, pakage_minutes, bill, month_time;
    int month;
    cout << "Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute. " << endl;
    cout << "Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.  " << endl;
    cout << "Package C: For $69.99 per month unlimited minutes provided.  " << endl;

    cout << "\nSelect One Of The Above from (A,B,C) : ";
    cin >> choice;

    cout << "MONTHS WITH NUMBER : " << endl;
    cout << "1.January " << endl;
    cout << "2.February " << endl;
    cout << "3.March " << endl;
    cout << "4.April " << endl;
    cout << "5.May " << endl;
    cout << "6.June " << endl;
    cout << "7.July " << endl;
    cout << "8.August " << endl;
    cout << "9.September " << endl;
    cout << "10.October " << endl;
    cout << "11.November " << endl;
    cout << "12.December " << endl;

    cout << " Select One Of The Above Month Number : ";
    cin >> month;
    cout << "Total Minutes Used : ";
    cin >> minutes;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        month_time = 744 * 60;
        break;

    case 2:
        month_time = 672 * 60;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        month_time = 720 * 60;
        break;

    default:

        cout << "Enter Valid Month Number." << endl;
        break;
    }

    if (month_time > minutes)
    {

        switch (choice)
        {
        case 'A':
        case 'a':
            rate = 39.99;
            additional_rate = 0.45;
            pakage_minutes = 450;
            break;
        case 'B':
        case 'b':
            rate = 59.99;
            additional_rate = 0.40;
            pakage_minutes = 900;
            break;
        case 'C':
        case 'c':
            rate = 69.99;
            additional_rate = 0;
            break;

        default:
            cout << "Invalid Choice!";
            break;
        }

        switch (choice)
        {
        case 'a':
        case 'A':
        case 'b':
        case 'B':

            if (minutes > pakage_minutes)
            {
                double remaining_minutes = minutes - pakage_minutes;
                bill = rate + (remaining_minutes * additional_rate);
                cout << "Additional Minutes Then Pakage : " << remaining_minutes << endl;
                cout << "Additional Rate : " << additional_rate << " Per Minute." << endl;
                cout << "Additinal Charges : " << remaining_minutes * additional_rate << endl;
                cout << "Total Charges : " << bill << endl;

                switch (choice)
                {
                case 'a':
                case 'A':

                    if (minutes <= 900 && minutes > 450)
                    {
                        cout << "If You Used Pakage B You Would Have Saved " << remaining_minutes * additional_rate << " Rs." << endl;
                    }
                    else
                    {
                        cout << "If You Used Pakage C You Would Have Saved " << remaining_minutes * additional_rate << " Rs." << endl;
                    }
                    break;

                case 'b':
                case 'B':
                    if (minutes > 900)
                    {
                        cout << "If You Used Pakage C You Would Have Saved " << remaining_minutes * additional_rate << " Rs." << endl;
                    }

                default:
                    break;
                }
            }
            else
            {
                cout << "You Used Less Minutes Than " << pakage_minutes << " Pakage Minutes. So Your Bill Is Pakage Expense : " << rate << " Rs." << endl;
            }

            break;

        default:
            cout << "You Had Unlimited Minutes, So Your Bill Is same as Your Pakage Rate : " << rate << " Rs." << endl;

            break;
        }
    }
    else
    {
        cout << "Used Minutes Can Not Be More Than Whole Month Minutes." << endl;
    }

    cout << "Enter AnyKey to End The Program." << endl;

    _getch();

    return 0;
}