#include <iostream>
#include <string>
using namespace std;

//**************** 1****************/

// class numbers
// {
// private:
//     int number;
//     static string lessthan20[20];
//     static string tens[10];
//     static string hundred;
//     static string thousand;

//     static string translatelessthan100(int n)
//     {
//         if (n < 20)
//         {
//             return lessthan20[n];
//         }
//         else
//         {
//             int tennum = n / 10;
//             int unitnum = n % 10;
//             return tens[tennum] + " " + (unitnum ? " " + lessthan20[unitnum] : "");
//         }
//     }

//     static string translatenumber(int n)
//     {
//         if (n < 100)
//         {
//             return translatelessthan100(n);
//         }
//         else if (n < 1000)
//         {
//             int hundrednum = n / 100;
//             int tennum = n % 100;
//             return lessthan20[hundrednum] + " " + hundred + " " + (tennum ? " " + translatelessthan100(tennum) : "");
//         }
//         else
//         {
//             int thousandnum = n / 1000;
//             int hunderednum = n % 1000;
//             return lessthan20[thousandnum] + " " + thousand + " " + (hunderednum ? " " + translatenumber(hunderednum) : "");
//         }
//     }

// public:
//     numbers(int num) { number = num; };
//     void printnumber()
//     {
//         if (number == 0)
//         {
//             cout << lessthan20[0] << endl;
//         }
//         else
//         {
//             cout << translatenumber(number);
//         }
//     }
// };

// string numbers::lessthan20[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
// string numbers::tens[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
// string numbers::hundred = "Hundred";
// string numbers::thousand = "Thousand";

//**************** 2,3 ****************/

// class dayofyear
// {
// private:
//     int day;
//     string name;
//     static string monthname[12];
//     static int daysinmonth[12];

// public:
//     dayofyear() {};
//     dayofyear(int d)
//     {
//         day = d;
//     }
//     dayofyear(string n, int d)
//     {
//         name = n;
//         day = d;
//     }
//     void checkmonthrange()
//     {
//         int index;
//         for (int i = 0; i < 12; i++)
//         {
//             if (name == monthname[i])
//             {
//                 if (day > daysinmonth[i])
//                 {
//                     cout << "Error, Out Of Range." << endl;
//                 }
//                 else
//                 {
//                     cout << "With In Range." << endl;
//                 }
//             }
//         }
//     }

//     void print()
//     {

//         if (day < 1)
//         {
//             int c=day;
//             day = 365+c;
//         }
//         if (day > 365)
//         {
//             day = day%365;
//         }

//         int d = day;
//         int monthindex = 0;
//         while (day > daysinmonth[monthindex])
//         {
//             day -= daysinmonth[monthindex];
//             monthindex++;
//         }
//         cout << monthname[monthindex] << " " << day << endl;
//         day = d;
//     }

//     dayofyear operator++()
//     {
//         dayofyear temp;
//         temp.day = ++day;
//         return temp;
//     }
//     dayofyear operator++(int)
//     {
//         dayofyear temp;
//         temp.day = day++;
//         return temp;
//     }
//     dayofyear operator--()
//     {
//         dayofyear temp;
//         temp.day = --day;
//         return temp;
//     }
//     dayofyear operator--(int)
//     {
//         dayofyear temp;
//         temp.day = day--;
//         return temp;
//     }
// };

// int dayofyear::daysinmonth[] = {
//     31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// string dayofyear::monthname[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

//**************** 4,5,6 ****************/

// class numdays
// {
// private:
//     double hours;
//     double days;

// public:
//     numdays() {};
//     numdays(double h)
//     {
//         hours = h;
//     }
//     void sethours(double h)
//     {
//         hours = h;
//     }
//     double gethours()
//     {
//         return hours;
//     }
//     double getdays()
//     {
//         days = hours / 8.0;
//         return days;
//     }

//     numdays operator+( numdays &n)
//     {
//         numdays temp;
//         temp.hours = hours + n.hours;
//         return temp;
//     }
//     numdays operator-( numdays &n)
//     {
//         numdays temp;
//         temp.hours = hours - n.hours;
//         return temp;
//     }

//     numdays operator++(){
//         numdays temp;
//         temp.hours=++hours;
//         return temp;
//     }
//     numdays operator++(int){
//         numdays temp;
//         temp.hours=hours++;
//         return temp;
//     }
//     numdays operator--(){
//         numdays temp;
//         temp.hours=--hours;
//         return temp;
//     }
//     numdays operator--(int){
//         numdays temp;
//         temp.hours=hours--;
//         return temp;
//     }
// };

// class timeoff{

//     private:
//     string employeename;
//     int idnum;
//     numdays maxsickdays;
//     numdays sicktaken;
//     numdays maxvacation;
//     numdays vactaken;
//     numdays maxunpaid;
//     numdays unpaidtaken;

//     int numworkedmonths;
//     public:
//     timeoff(){};
//     timeoff(string n,int id,double maxsickhrs, double sicktakenhrs,double maxvacationhrs,double vactakenhrs,double maxunpaidhrs,double unpaidtakenhrs){
//         employeename=n;
//         idnum=id;
//         maxsickdays.sethours(maxsickhrs);
//         sicktaken.sethours(sicktakenhrs);
//         maxvacation.sethours(maxvacationhrs);
//         vactaken.sethours(vactakenhrs);
//         maxunpaid.sethours(maxunpaidhrs);
//         unpaidtaken.sethours(unpaidtakenhrs);
//     }

//     timeoff(string n,int id,int months,double sicktakenhrs,double vactakenhrs,double maxunpaidhrs,double unpaidtakenhrs){

//           employeename=n;
//           numworkedmonths=months;
//         idnum=id;
//         maxsickdays.sethours(getmaxsickhours());
//         sicktaken.sethours(sicktakenhrs);
//         maxvacation.sethours(getmaxvacationhours());
//         vactaken.sethours(vactakenhrs);
//         maxunpaid.sethours(maxunpaidhrs);
//         unpaidtaken.sethours(unpaidtakenhrs);

//     }
//     void setworkingmonths(int m){
//         numworkedmonths=m;
//     }
//     double getmaxsickhours(){
//         return numworkedmonths*8;
//     }
//     double getmaxvacationhours(){
//         return numworkedmonths*12;
//     }
//     void setname(string n){
//         employeename=n;
//     }
//     string getname(){
//         return employeename;
//     }
//     void setidnumber(int n){
//         idnum=n;
//     }
//     int getidnumber(){
//         return idnum;
//     }
//     void setmaxsickhrs(double s){
//         maxsickdays.sethours(s);
//     }

//     void setsicktaken(double s){
//         sicktaken.sethours(s);
//     }

//     void setmaxvacation(double s){
//         maxvacation.sethours(s);
//     }

//     void setvactaken(double s){
//         vactaken.sethours(s);
//     }
//     void setmaxunpaid(double s){
//         maxunpaid.sethours(s);
//     }
//     void setunpaidtaken(double s){
//         unpaidtaken.sethours(s);
//     }

//     void display(){
//         cout<<"Employee : "<<employeename<<endl;
//         cout<<"Employee Id Number : "<<idnum<<endl;
//         cout<<"Number Of Months Employee Worked : "<<numworkedmonths<<endl;
//         cout<<"Max Sick Days : "<<maxsickdays.getdays()<<" ("<<maxsickdays.gethours()<<" hours)."<<endl;
//         cout<<"Sick Tacken Days : "<<sicktaken.getdays()<<" ("<<sicktaken.gethours()<<" hours)."<<endl;
//         cout<<"Max Vacation Days : "<<maxvacation.getdays()<<" ("<<maxvacation.gethours()<<" hours)."<<endl;
//         cout<<"Vacation Taken Days : "<<vactaken.getdays()<<" ("<<vactaken.gethours()<<" hours)."<<endl;
//         cout<<"Max Unpaid Vacation Days : "<<maxunpaid.getdays()<<" ("<<maxunpaid.gethours()<<" hours)."<<endl;
//         cout<<"Unpaid Taken Vacation Days : "<<unpaidtaken.getdays()<<" ("<<unpaidtaken.gethours()<<" hours)."<<endl;
//     }

// };

//**************** 7 ****************/

// class month
// {
// private:
//     string name;
//     static string monthnames[12];
//     static int monthnumbers[12];
//     int monthnumber;

// public:
//     month()
//     {
//         name = "January";
//         monthnumber = 1;
//     }
//     month(string n)
//     {
//         name = n;
//         monthnumber = setmonthnumber(n);
//     }
//     month(int num)
//     {
//         monthnumber = num;
//         name = setmonthname(num);
//     }

//     string setmonthname(int num)
//     {
//         if (num > 12)
//         {
//             num = num % 12;
//         }
//         if (num<1)
//         {
//             num=12-num;
//         }

//         return monthnames[num - 1];
//     }
//     int setmonthnumber(string name)
//     {
//         for (int i = 0; i < 12; i++)
//         {
//             if (name == monthnames[i])
//             {
//                 return i + 1;
//             }
//         }
//     }

//     void setname(int n)
//     {
//         if (n > 12)
//         {
//             monthnumber = n % 12;
//         }

//         name = monthnames[n - 1];
//     }
//     string getname()
//     {
//         return name;
//     }
//     int getnumber()
//     {
//         return monthnumber;
//     }

//     month operator++()
//     {
//         monthnumber++;
//         name = monthnames[monthnumber - 1];
//     }
//     month operator++(int)
//     {
//         month temp;
//         temp.name = monthnames[monthnumber - 1];
//         temp.monthnumber = monthnumber;
//         monthnumber++;
//         name = monthnames[monthnumber - 1];
//         return temp;
//     }
//     month operator--()
//     {
//         monthnumber--;
//         name = monthnames[monthnumber - 1];
//     }
//     month operator--(int)
//     {
//         month temp;
//         temp.name = monthnames[monthnumber - 1];
//         temp.monthnumber = monthnumber;
//         monthnumber--;
//         name = monthnames[monthnumber - 1];
//         return temp;
//     }

//     void display()
//     {
//         cout << "Month Number : " << monthnumber << endl;
//         cout << "Month Name : " << name << endl;
//     }

//     friend istream &operator>>(istream &in, month &m);
//     friend ostream &operator<<(ostream &out, const month &m);
// };

// string month::monthnames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
// int month::monthnumbers[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

// istream &operator>>(istream &in, month &m)
// {
//     month temp;
//     cout << "Month Number : ";
//     in >> m.monthnumber;
//     m.name = m.setmonthname(m.monthnumber);
// }
// ostream &operator<<(ostream &out, const month &m)
// {

//     out << "Name : " << m.name << endl;
//     out << "Month Number : " << m.monthnumber << endl;
//     return out;
// }

//**************** 10 ****************/

// class divsales
// {
// private:
//     double quarterssales[4];
//     static double totalsales;

// public:
//     void divisionsale(double q1, double q2, double q3, double q4)
//     {
//         quarterssales[0] = q1;
//         totalsales += q1;
//         quarterssales[1] = q2;
//         totalsales += q2;
//         quarterssales[2] = q3;
//         totalsales += q3;
//         quarterssales[3] = q4;
//         totalsales += q4;
//     }

//     double showquartersale(int q)
//     {
//         if (q < 1 || q > 4)
//         {
//             cout << "Invalid Quarter Selection!" << endl;
//         }
//         else
//         {
//             return quarterssales[q - 1];
//         }
//     }

//     void displaytotalcorporatesales()
//     {
//         cout << "Total Corporate Sales For The Year : " << totalsales << endl;
//     }
// };
// double divsales::totalsales = 0;

//**************** 11,9,12 ****************/

// class feetinches
// {
// private:
//     int feet;
//     int inches;
//     void simplify()
//     {
//         if (inches >= 12)
//         {
//             feet += inches / 12;
//             inches = inches % 12;
//         }
//         if (inches < 0)
//         {
//             feet -= -inches / 12 + 1;
//             inches = 12 - (-inches % 12);
//         }
//     }

// public:
//     feetinches()
//     {
//         feet = 0;
//         inches = 0;
//     }
//     void setfeet(int f)
//     {
//         feet = f;
//     }
//     void setinches(int i)
//     {
//         if (i > 11)
//         {
//             simplify();
//         }
//         else
//         {
//             inches = i;
//         }
//     }

//     int getfeet()
//     {
//         return feet;
//     }
//     int getinchest()
//     {
//         return inches;
//     }

//     bool operator<=(feetinches &f)
//     {
//         if (feet <= f.feet)
//         {
//             return true;
//         }
//         else if (feet == f.feet && inches <= f.inches)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool operator>=(feetinches &f)
//     {
//         if (feet >= f.feet)
//         {
//             return true;
//         }
//         else if (feet == f.feet && inches >= f.inches)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool operator!=(feetinches &f)
//     {
//         if (feet != f.feet || inches != f.inches)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     friend ostream &operator<<(ostream &out, const feetinches &f)
//     {
//         out << f.feet << " Feet " << f.inches << " Inches.";
//         return out;
//     }

//     friend istream &operator>>(istream &in, feetinches &f)
//     {
//         cout << "Enter Feet : ";
//         in >> f.feet;
//         cout << "Enter Inches : ";
//         in >> f.inches;
//         f.simplify();
//         return in;
//     }

//     feetinches operator+(feetinches &f)
//     {
//         feetinches temp;
//         temp.feet = feet + f.feet;
//         temp.inches = inches + f.inches;
//         temp.simplify();
//         return temp;
//     }
//     feetinches operator-(feetinches &f)
//     {
//         feetinches temp;
//         temp.feet = feet - f.feet;
//         temp.inches = inches - f.inches;
//         temp.simplify();
//         return temp;
//     }

//     feetinches(const feetinches &f)
//     {
//         feet = f.feet;
//         inches = f.inches;
//     }

//     feetinches multiplyfeetinches(feetinches &f)
//     {
//         feetinches temp;
//         temp.feet = feet * f.feet;
//         temp.inches = inches * f.inches;
//         temp.simplify();
//         return temp;
//     }
// };

// class landtract
// {
// private:
//     feetinches length;
//     feetinches width;
//     feetinches a;

// public:
//     void setlengthwidth()
//     {
//         cout << "Length : " << endl;
//         cin >> length;
//         cout << "Width : " << endl;
//         cin >> width;
//     }
//     void area()
//     {
//         a = length.multiplyfeetinches(width);
//         cout << "Area = " << a << endl;
//     }

//     bool operator!=(landtract &l)
//     {
//         return a != l.a;
//     }
// };
// class roomdimension
// {
// private:
//     feetinches length;
//     feetinches width;
//     double picepersquarefoot;

// public:
//     roomdimension()
//     {
//         length.setfeet(0);
//         length.setinches(0);
//         width.setfeet(0);
//         width.setinches(0);
//         picepersquarefoot = 0;
//     }
//     roomdimension(double p)
//     {
//         picepersquarefoot = p;
//     }
//     void setroomlengthwidth()
//     {
//         cout << "Length : " << endl;
//         cin >> length;
//         cout << "Width : " << endl;
//         cin >> width;
//     }

//     feetinches area()
//     {
//         return length.multiplyfeetinches(width);
//     }
// };

// class roomcarpet
// {
//     roomdimension room;
//     double costpersquarefoot;

// public:
//     roomcarpet(double p)
//     {
//         costpersquarefoot = p;
//     }
//     double totalcost()
//     {
//         room.setroomlengthwidth();
//         feetinches area = room.area();
//         cout<<area<<endl;
//         double a = area.getfeet() + ((area.getinchest() / 12.0));
//         cout<<"Area Per Square Feet : "<<a<<endl;
//         double cost = a * costpersquarefoot;
//         return cost;
//     }
// };

//**************** 14 ****************/

// class parkedcar
// {
// private:
//     string maker;
//     int model;
//     string color;
//     int number;
//     int parked_time;

// public:
//     parkedcar()
//     {
//         maker = "";
//         model = 0;
//         color = "";
//         number = 0;
//         parked_time = 0;
//     }
//     parkedcar(string m, int mod, string c, int n, int p)
//     {
//         maker = m;
//         model = mod;
//         color = c;
//         number = n;
//         parked_time = p;
//     }
//     void setmaker(string m)
//     {
//         maker = m;
//     }
//     string getmaker()
//     {
//         return maker;
//     }
//     void setmodel(int m)
//     {
//         model = m;
//     }
//     int getmodel()
//     {
//         return model;
//     }
//     void setcolor(string c)
//     {
//         color = c;
//     }
//     string getcolor()
//     {
//         return color;
//     }
//     void setnumber(int n)
//     {
//         number = n;
//     }
//     int getnumber()
//     {
//         return number;
//     }
//     void setparkedtime(int p)
//     {
//         parked_time = p;
//     }
//     int getparkedtime()
//     {
//         return parked_time;
//     }

//     void displaycarspecifications()
//     {
//         cout << "Maker : " << maker << endl;
//         cout << "Model : " << model << endl;
//         cout << "Color : " << color << endl;
//         cout << "Number : " << number << endl;
//         cout << "Parked Time : " << parked_time << endl;
//     }
// };
// class parkingmeter
// {
// private:
//     int purchased_parking_time;

// public:
//     parkingmeter() { purchased_parking_time = 0; }
//     parkingmeter(int p) { purchased_parking_time = p; }
//     void set_purchased_parking_time(int p)
//     {
//         purchased_parking_time = p;
//     }
//     int get_purchased_parking_time()
//     {
//         return purchased_parking_time;
//     }
// };
// class parkingticket
// {
// private:
//     parkedcar car_details;
//     parkingmeter purchaed_time;
//     int total_time_parked;
//     int fine = 0;
//     string officer_name;
//     int officer_badge_number;
//     int num_hours = 0;
//     int extra_time = 0;

// public:
//     parkingticket(parkedcar &c, parkingmeter &p)
//     {
//         car_details = c;
//         purchaed_time = p;
//         total_time_parked = car_details.getparkedtime();
//         if (total_time_parked > purchaed_time.get_purchased_parking_time())
//         {
//             extra_time = total_time_parked - purchaed_time.get_purchased_parking_time();
//             if (extra_time % 60 == 0)
//             {
//                 num_hours = extra_time / 60;
//             }
//             else
//             {
//                 num_hours = (extra_time / 60) + 1;
//             }

//             if (num_hours == 1)
//             {
//                 fine = 25;
//             }
//             else
//             {
//                 int h = num_hours - 1;
//                 fine = 25 + (h * 10);
//             }
//         }
//     }

//     void setofficername(string n)
//     {
//         officer_name = n;
//     }
//     string getofficername()
//     {
//         return officer_name;
//     }
//     void setofficerbadge(int b)
//     {
//         officer_badge_number = b;
//     }
//     int getofficerbadge()
//     {
//         return officer_badge_number;
//     }

//     void display_ticket()
//     {
//         cout << "TICKET" << endl;
//         cout << "Maker : " << car_details.getmaker() << endl;
//         cout << "Model : " << car_details.getmodel() << endl;
//         cout << "Color : " << car_details.getcolor() << endl;
//         cout << "License Number : " << car_details.getnumber() << endl;
//         cout << "Parked Time (in minutes) : " << car_details.getparkedtime() << endl;
//         cout << "Purchased Parking Time : " << purchaed_time.get_purchased_parking_time() << endl;
//         cout << "Total Minutes Parked  : " << total_time_parked << endl;
//         cout << "Extra Minutes Parked  : " << extra_time << endl;
//         cout << "Fine : $" << fine << endl;
//     }
// };

// class policeofficer
// {
// private:
// public:
//     parkedcar car;
//     parkingmeter p;
//     policeofficer()
//     {
//         if (car.getparkedtime() > p.get_purchased_parking_time())
//         {
//             parkingticket ticket(car, p);
//             ticket.display_ticket();
//         }
//     }
// };

//**************** 15 ****************/

class fuelgauge
{
private:
    int current_fuel;

public:
    fuelgauge()
    {
        current_fuel = 0;
    }
    fuelgauge(int f)
    {
        if (f < 16)
        {
            current_fuel = f;
        }
        else
        {
            cout << "Maximum Capcity Is 15 Gallons!" << endl;
        }
    }
    void setcurrentfuel(int f)
    {
        current_fuel = f;
    }
    int getcurrentfuel()
    {
        return current_fuel;
    }
    fuelgauge operator++()
    {
        if (current_fuel < 15)
        {
            ++current_fuel;
        }
        else
        {
            cout << "Tank Is Full. Can Not Add More Fuel." << endl;
        }
    }
    fuelgauge operator++(int)
    {
        if (current_fuel < 15)
        {
            current_fuel++;
        }
        else
        {
            cout << "Tank Is Full. Can Not Add More Fuel." << endl;
        }
    }
    fuelgauge operator--()
    {
        if (current_fuel > 0)
        {
            --current_fuel;
        }
        else
        {
            cout << "Tank Is Empty." << endl;
        }
    }
    fuelgauge operator--(int)
    {
        if (current_fuel > 0)
        {
            current_fuel--;
        }
        else
        {
            cout << "Tank Is Empty." << endl;
        }
    }
};

class odometer
{
private:
    int current_milage;
    int maximum_milage;

public:
    int miles = 0;
    odometer() {};
    odometer(int c, int m)
    {
        current_milage = c;
        maximum_milage = m;
    }
    void setcurrentmilage(int m)
    {
        current_milage = m;
    }
    int getcurrentmilage()
    {
        return current_milage;
    }
    void setmaxmilage(int m)
    {
        current_milage = m;
    }
    int getmaxmilage()
    {
        return current_milage;
    }

    odometer operator++()
    {
        if (current_milage > maximum_milage)
        {
            current_milage = 0;
            ++current_milage;
            ++miles;
        }
        else
        {
            ++current_milage;
            ++miles;
        }
    }
    odometer operator++(int)
    {
        if (current_milage == maximum_milage)
        {
            current_milage = 0;
            ++current_milage;
            ++miles;
        }
        else
        {
            ++current_milage;
            ++miles;
        }
    }
};

int main()
{
    //**************** 15 ****************/

    fuelgauge f(10);
    odometer o(200, 999999);
    f++;
    f++;
    f++;
    cout << "Current Fuel : " << f.getcurrentfuel() << " Gallons." << endl;
    ;

    while (f.getcurrentfuel() != 0)
    {
        o++;
        if (o.miles == 24)
        {
            --f;
            cout << "Current Milage : " << o.getcurrentmilage() << endl;
            cout << "Amount Of Fuel : " << f.getcurrentfuel()<<" Gallons." << endl;
            o.miles=0;
        }
    }

    //**************** 14 ****************/
    // int number, model, parkedtime, purchasedtime, officer_badge_number;
    // ;
    // string name, color, officer_name;
    // cout << "Maker Company : ";
    // cin >> name;
    // cout << "Model : ";
    // cin >> model;
    // cout << "Color : ";
    // cin >> color;
    // cout << "Number : ";
    // cin >> number;
    // cout << "Parked Time (in minutes) : ";
    // cin >> parkedtime;
    // cout << "Purchased Time : ";
    // cin >> purchasedtime;
    // cout << "Officer Name : ";
    // cin>>officer_name;
    // cout<<"Officer Badge Number : ";
    // cin>>officer_badge_number;

    // policeofficer p;
    // p.car.setcolor(color);
    // p.car.setmaker(name);
    // p.car.setmodel(model);
    // p.car.setnumber(number);
    // p.car.setparkedtime(parkedtime);
    // p.p.set_purchased_parking_time(purchasedtime);

    // parkingticket ticket(p.car, p.p);
    // ticket.display_ticket();

    //**************** 13 ****************/
    // int cost_per_square_foot;
    // double total_cost;

    // cout<<"Cost Per Square Foot : $";
    // cin>>cost_per_square_foot;

    // roomcarpet room1(cost_per_square_foot);
    // total_cost=room1.totalcost();
    // cout<<"Total Cost Of The Room : $"<<total_cost<<endl;

    //**************** 11,9,12 ****************/

    // CLASS LANDTRACT

    // landtract l1, l2;
    // cout << "Enter Tract 1 Values : " << endl;
    // l1.setlengthwidth();
    // cout << "Area Of Tract 1 : ";
    // l1.area();
    // cout << "Enter Tract 2 Values : " << endl;
    // l2.setlengthwidth();
    // cout << "Area Of Tract 2 : ";
    // l2.area();
    // if (l1 != l2)
    // {
    //     cout << "Tracts Are Of DIFFERENT Sizes." << endl;
    // }
    // else
    // {
    //     cout << "Tracts Are Of EQUAL Sizes." << endl;
    // }

    // CLASS FEETINCHES

    // feetinches length1, length2;

    // cout << "Enter Length 1 : " << endl;
    // cin >> length1;
    // cout << "Enter Length 2 : " << endl;
    // cin >> length2;
    // // feetinches length2(length1);

    // cout << "Length 1 : " << endl;
    // cout << length1 << endl;
    // cout << "Length 2 : " << endl;
    // cout << length2 << endl;
    // feetinches length3;
    // length3 = length2.multiplyfeetinches(length1);
    // cout << "Length 3 : " << endl;
    // cout << length3;

    // if (length1 != length2)
    // {
    //     cout << "Length1 != Length2" << endl;
    // }
    // if (length1 >= length2)
    // {
    //     cout << "Length1 >= Length2" << endl;
    // }
    // if (length1 <= length2)
    // {
    //     cout << "Length1 <= Length2" << endl;
    // }

    // feetinches sum = length1 + length2;
    // feetinches difference = length1 - length2;
    // cout << "Sum : " << sum << endl;
    // cout << "Dufference : " << difference << endl;

    //**************** 10 ****************/

    // divsales d[6];

    // double q1, q2, q3, q4;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Division : " << i + 1 << endl;

    //     cout << "Enter Quarter 1 Sales :$ ";
    //     cin >> q1;
    //     cout << "Enter Quarter 2 Sales :$ ";
    //     cin >> q2;
    //     cout << "Enter Quarter 3 Sales :$ ";
    //     cin >> q3;
    //     cout << "Enter Quarter 4 Sales :$ ";
    //     cin >> q4;

    //     if (q1 >= 0 && q2 >= 0 && q3 >= 0 && q4 >= 0)
    //     {
    //         d[i].divisionsale(q1, q2, q3, q4);
    //     }
    //     else{
    //         cout << "Error: Sales figures must be positive." << endl;
    //     }
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Division : " << i + 1 << endl;

    //     cout << "Quarter 1 :$ " << d[i].showquartersale(1) << endl;
    //     cout << "Quarter 2 :$ " << d[i].showquartersale(2) << endl;
    //     cout << "Quarter 3 :$ " << d[i].showquartersale(3) << endl;
    //     cout << "Quarter 4 :$ " << d[i].showquartersale(4) << endl;
    // }

    // d->displaytotalcorporatesales();

    //**************** 7 ****************/

    // month m1, m2(3), m3("December"), m4;

    // cin >> m4;
    // cout << m4;

    //**************** 4,5,6 ****************/

    // string name;
    // cout<<"Employee Name : ";
    // getline(cin,name);
    // int id;
    // cout<<"Enter Id Number : ";
    // cin>>id;

    // double msh,sth,mvh,vth,muh,uth;
    // cout<<"Enter Maximum Sick Hours : ";
    // cin>>msh;
    // cout<<"Enter Sick Taken Hours : ";
    // cin>>sth;
    // cout<<"Enter Maximum Vacation Hours : ";
    // cin>>mvh;
    // cout<<"Enter Vacation Taken Hours : ";
    // cin>>vth;
    // cout<<"Enter Maximum Unpaid Vacation Hours : ";
    // cin>>muh;
    // cout<<"Enter Unpaid Vacation Taken Hours : ";
    // cin>>uth;

    // cout<<" T1 "<<endl;
    // timeoff t1(name,id,msh,sth,mvh,vth,muh,uth);
    // t1.display();
    // cout<<" T2 "<<endl;
    // timeoff t2;
    // t2.setname("Atta");
    // t2.setidnumber(11);
    // t2.setmaxsickhrs(240);
    // t2.setsicktaken(150);
    // t2.setmaxvacation(120);
    // t2.setvactaken(100);
    // t2.setmaxunpaid(40);
    // t2.setunpaidtaken(40);
    // t2.display();

    // timeoff t3("Atta Ul Mustafa",11,12,120,80,40,24);
    // t3.display();

    // // numdays n1(25), n2(18), n3;
    // // // n3 = n1 + n2;
    // // n3 = n1 - n2;
    // // ++n3;
    // // n2=n3++;
    // // n2=n3--;
    // // --n3;
    // // double days2=n2.getdays();
    // // double days3=n3.getdays();
    // // cout<<"n2 : "<<days2<<endl<<"n3 : "<<days3<<endl;

    //**************** 2,3 ****************/

    // cout << "Enter A Day Out Of 365 Days Of A Year : ";
    // int day;
    // cin >> day;
    // string name;
    // // cout << "Enter Month Name : ";
    // // cin >> name;

    // // dayofyear d1(name, day);
    // // d1.checkmonthrange();

    // dayofyear d2(day);
    // d2.print();
    // ++d2;
    // d2.print();
    // --d2;
    // --d2;
    // --d2;
    // d2.print();

    //**************** 1 ****************/
    // int number;
    // cout << "Enter A Number (Between 0-9999) : ";
    // cin >> number;
    // while (number > 9999 || number < 0)
    // {
    //     cout << "Invalid Input!, Enter Again Only Between 0-9999 : ";
    //     cin >> number;
    // }

    // numbers n(number);
    // n.printnumber();

    return 0;
}