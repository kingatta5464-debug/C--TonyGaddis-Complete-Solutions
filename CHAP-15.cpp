#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;

//******************** 1,2,3 ********************/

// class employee
// {
// private:
//     string name;
//     string number;
//     string hdate;

// public:
//     employee()
//     {
//         name = "";
//         number = "";
//         hdate = "";
//     }
//     employee(string n, string num, string d)
//     {
//         setdata(n, num, d);
//     }
//     void setdata(string n, string num, string d)
//     {
//         name = n,
//         number = num;
//         hdate = d;
//     }
//     string getname()
//     {
//         return name;
//     }
//     string getnumber()
//     {
//         return number;
//     }
//     string getdate()
//     {
//         return hdate;
//     }
// };
// class productionworker : public employee
// {

// private:
//     int shift;
//     double pay_rate;

// public:
//     productionworker()
//     {
//         shift = 0;
//         pay_rate = 0.0;
//     }
//     productionworker(string n, string num, string d, int s, double p) : employee(n, num, d)
//     {
//         shift = s;
//         pay_rate = p;
//     }
//     int getshift()
//     {
//         return shift;
//     }
//     double getpayrate()
//     {
//         return pay_rate;
//     }
//     void display()
//     {
//         string shift_time;
//         if (shift == 1)
//         {
//             shift_time = "Day";
//         }
//         else if (shift == 2)
//         {
//             shift_time = "Night";
//         }
//         if (shift_time == "Day" || shift_time == "Night")
//         {
//             cout << "Employee Details" << endl;
//             cout << "Name : " << getname() << endl;
//             cout << "Number : " << getnumber() << endl;
//             cout << "Hire Date : " << getdate() << endl;
//             cout << "Shift Time : " << shift_time << endl;
//             cout << "Pay Rate : $" << pay_rate << " Per Hour." << endl;
//         }
//         else
//         {
//             cout << "Invalid Shift!" << endl;
//         }
//     }
// };
// class shiftsupervisor : public employee
// {
// private:
//     double annual_salary;
//     double production_bonus;

// public:
//     shiftsupervisor()
//     {
//         annual_salary = 0.0;
//         production_bonus = 0.0;
//     }
//     shiftsupervisor(string n, string num, string d, double as) : employee(n, num, d)
//     {
//         annual_salary = as;
//         production_bonus = (as / 100) * 30;
//     }
//     double getannualsalary()
//     {
//         return annual_salary;
//     }
//     double getproductionbonus()
//     {
//         return production_bonus;
//     }

//     void display()
//     {
//         cout << "Shift Supervisor Details" << endl;
//         cout << "Name : " << getname() << endl;
//         cout << "Number : " << getnumber() << endl;
//         cout << "Hire Date : " << getdate() << endl;
//         cout << "Annual Salary : $" << annual_salary << endl;
//         cout << "Production Bonus : $" << production_bonus << endl;
//     }
// };
// class teamleader : public productionworker
// {
// private:
//     double monthly_bonus;
//     int required_hours;
//     int attended_hours;

// public:
//     teamleader()
//     {
//         monthly_bonus = 0.0;
//         required_hours = 0;
//         attended_hours = 0;
//     }
//     teamleader(string n, string num, string d, int s, double p, int rh, int ah) : productionworker(n, num, d, s, p)
//     {
//         monthly_bonus = ((getpayrate() * 240) / 100) * 5;
//         required_hours = rh;
//         attended_hours = ah;
//     }
//     double getmonthlybonus()
//     {
//         return monthly_bonus;
//     }
//     int getrequiredhours()
//     {
//         return required_hours;
//     }
//     int getattendedhours()
//     {
//         return attended_hours;
//     }
//     void display()
//     {
//         string shift_time;
//         if (getshift() == 1)
//         {
//             shift_time = "Day";
//         }
//         else if (getshift() == 2)
//         {
//             shift_time = "Night";
//         }
//         if (shift_time == "Day" || shift_time == "Night")
//         {
//             cout << "Team Leader Details" << endl;
//             cout << "Name : " << getname() << endl;
//             cout << "Number : " << getnumber() << endl;
//             cout << "Hire Date : " << getdate() << endl;
//             cout << "Shift Time : " << shift_time << endl;
//             cout << "Pay Rate : $" << getpayrate() << " Per Hour." << endl;
//             cout << "Monthly Bonus (if 8 working hours per day) : $" << monthly_bonus << endl;
//             cout << "Required Training Hours : " << required_hours << endl;
//             cout << "Attended Training Hours : " << attended_hours << endl;
//         }
//         else
//         {
//             cout << "Invalid Shift!" << endl;
//         }
//     }
// };

//******************** 4,5 ********************/

// class time
// {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     time()
//     {
//         hours = 0;
//         minutes = 0;
//         seconds = 0;
//     }
//     time(int h, int m, int s)
//     {
//         settime(h, m, s);
//     }
//     void settime(int h, int m, int s)
//     {

//         if (h < 24 && m < 60 && s < 60)
//         {
//             hours = h;
//             minutes = m;
//             seconds = s;
//         }
//         else
//         {
//             cout << "Invalid Time Input!" << endl;
//         }
//     }
//     void sethours(int h)
//     {
//         hours = h;
//     }
//     void setminutes(int h)
//     {
//         minutes = h;
//     }
//     void setseconds(int h)
//     {
//         seconds = h;
//     }
//     int gethours()
//     {
//         return hours;
//     }
//     int getminutes()
//     {
//         return minutes;
//     }
//     int getseconds()
//     {
//         return seconds;
//     }

//     void displaystandardtime()
//     {
//         string ap = (hours >= 12) ? "PM" : "AM";
//         int standardhours = (hours == 0 || hours == 12) ? 12 : hours % 12;

//         cout << "Standard Time : " << standardhours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << " " << ap << endl;
//     }
// };
// class miltime : public time
// {

// private:
// public:
//     int milhours;
//     int milseconds;
//     string ap;
//     miltime() : time()
//     {
//         milhours = 0;
//         milseconds = 0;
//     }
//     miltime(int h, int s)
//     {
//         milhours = h;
//         milseconds = s;
//         setmiltime(milhours, milseconds);
//     }
//     void setmiltime(int h, int s)
//     {
//         milhours = h;
//         milseconds = s;
//         sethours((milhours / 100));
//         setminutes((milhours % 100));
//         setseconds(milseconds);
//     }
//     int getmilhours()
//     {
//         return milhours;
//     }
//     int getmilseconds()
//     {
//         return milseconds;
//     }

//     void displaymilitarytime()
//     {
//         cout << "Military Time : " << (milhours / 100 < 10 ? "0" : "") << milhours / 100 << ":" << (milhours % 100 < 10 ? "0" : "") << milhours % 100 << ":" << (milseconds < 10 ? "0" : "") << milseconds << endl;
//     }
//     bool validatetime(int h, int s)
//     {
//         if (h < 0 || h > 2359 || s > 59 || s < 0)
//         {
//             return false;
//         }
//         return true;
//     }
// };
// class timeclock : public miltime
// {
// private:
//     int starting;
//     int ending;
//     int elapsed = 0;

// public:
//     timeclock(int s, int e)
//     {
//         starting = s;
//         ending = e;
//     }
//     int getelapsed()
//     {
//         int startinghours = starting / 100;
//         int startingminutes = starting % 100;
//         int endinghours = ending / 100;
//         int endingminutes = ending % 100;
//         int totaltstartingminutes = startinghours * 60 + startingminutes;
//         int totalendingminutes = endinghours * 60 + endingminutes;
//         int elapsedminutes;

//         if (totaltstartingminutes < totalendingminutes)
//         {
//             elapsedminutes = totalendingminutes - totaltstartingminutes;
//         }
//         else
//         {
//             elapsedminutes = (1440 - totaltstartingminutes) + totalendingminutes;
//         }

//         int elapsedhours = elapsedminutes / 60;
//         elapsed = elapsedhours;
//         return elapsed;
//     }
// };

//******************** 6 ********************/

// class gradeactivity
// {
// protected:
//     double score;

// public:
//     gradeactivity()
//     {
//         score = 0.0;
//     }
//     gradeactivity(double s)
//     {
//         score = s;
//     }
//     void setscore(int s)
//     {
//         score = s;
//     }
//     double getscore()
//     {
//         return score;
//     }
//     char getlettergrade()
//     {

//         char lettergrade;
//         if (score > 89)
//         {
//             lettergrade = 'A';
//         }
//         else if (score > 79)
//         {
//             lettergrade = 'B';
//         }
//         else if (score > 69)
//         {
//             lettergrade = 'C';
//         }
//         else if (score > 59)
//         {
//             lettergrade = 'D';
//         }
//         else
//         {
//             lettergrade = 'F';
//         }
//         return lettergrade;
//     }
// };

// class essay : public gradeactivity
// {
// private:
//     int grammar;
//     int spelling;
//     int correct_length;
//     int content;

// public:
//     essay() : gradeactivity()
//     {
//         grammar = 0;
//         spelling = 0;
//         correct_length = 0;
//         content = 0;
//     }
//     essay(int g, int s, int c, int cont)
//     {
//         setpoints(g, s, c, cont);
//     }
//     void setpoints(int g, int s, int c, int cont)
//     {
//         grammar = g;
//         spelling = s;
//         correct_length = c;
//         content = cont;
//         setscore(grammar + spelling + correct_length + content);
//     }
//     int getgrammerpoints()
//     {
//         return grammar;
//     }
//     int getspellingpoints()
//     {
//         return spelling;
//     }
//     int getcoorect_lengthpoints()
//     {
//         return correct_length;
//     }
//     int getcontentpoints()
//     {
//         return content;
//     }
// };

//******************** 7,8 ********************/

// class persondata
// {
// private:
//     string lastname;
//     string firstname;
//     string address;
//     string city;
//     string state;
//     string zip;
//     string phone;

// public:
//     persondata()
//     {
//         lastname = "";
//         firstname = "";
//         address = "";
//         city = "";
//         state = "";
//         zip = "";
//         phone = "";
//     }
//     persondata(string f, string l, string a, string c, string s, string z, string p)
//     {
//         lastname = l;
//         firstname = f;
//         address = a;
//         city = c;
//         state = s;
//         zip = z;
//         phone = p;
//     }
//     void setlastname(string l) { lastname = l; }
//     void setfirstname(string f) { firstname = f; }
//     void setaddres(string a) { address = a; }
//     void setcity(string c) { city = c; }
//     void setstate(string s) { state = s; }
//     void setzip(string z) { zip = z; }
//     void setphone(string p) { phone = p; }

//     string getlastname() { return lastname; }
//     string getfirstname() { return firstname; }
//     string getaddress() { return address; }
//     string getcity() { return city; }
//     string getstate() { return state; }
//     string getzip() { return zip; }
//     string getphone() { return phone; }

//     void displayPersonData() const
//     {
//         cout << "Name: " << firstname << " " << lastname << endl;
//         cout << "Address: " << address << ", " << city << ", " << state << " " << zip << endl;
//         cout << "Phone: " << phone << endl;
//     }
// };

// class customerdata : public persondata
// {
// private:
//     int customernumber;
//     bool mailinglist;

// public:
//     customerdata() : persondata()
//     {
//         customernumber = 0;
//         mailinglist = false;
//     }
//     customerdata(string l, string f, string a, string c, string s, string z, string p, int num, bool b) : persondata(l, f, a, c, s, z, p)
//     {
//         customernumber = num;
//         mailinglist = b;
//     }
//     void setcustomernumber(int n)
//     {
//         customernumber = n;
//     }
//     void setmailinglist(bool b)
//     {
//         mailinglist = b;
//     }
//     int getcustomernumber() { return customernumber; }
//     bool getmailinglist() { return mailinglist; }

//     void displaycustomerdata()
//     {
//         displayPersonData();
//         cout << "Customer Number : " << customernumber << endl;
//         cout << "Mailing List : " << (mailinglist ? "Yes" : "No") << endl;
//     }
// };
// class preferredcustomer : public customerdata
// {
// private:
//     double purchasedamount;
//     double discountlevel;

// public:
//     preferredcustomer(string l, string f, string a, string c, string s, string z, string p, int num, bool b, double pa) : customerdata(l, f, a, c, s, z, p, num, b)
//     {

//         purchasedamount = pa;
//         setdiscount(pa);
//     }
//     void setdiscount(int pa)
//     {
//         purchasedamount=pa;
//         if (pa >= 500 && pa < 1000)
//         {
//             discountlevel = 5;
//         }
//         else if (pa >= 1000 && pa < 1500)
//         {
//             discountlevel = 6;
//         }
//         else if (pa >= 1500 && pa < 2000)
//         {
//             discountlevel = 7;
//         }
//         else if (pa >= 2000)
//         {
//             discountlevel = 10;
//         }
//         else
//         {
//             cout << "Invalid Purchased Amount." << endl;
//         }
//     }

//     double getdiscount()
//     {
//         return discountlevel;
//     }
//     void setpurchasedamount(int pa)
//     {
//         purchasedamount = pa;
//         setdiscount(pa);
//     }
//     double getpurchasedamount()
//     {
//         return purchasedamount;
//     }
//     void displaypreferredcustomer()
//     {
//         displaycustomerdata();
//         cout << "Purchased Amount : " << purchasedamount << endl;
//         cout << "Discount Level : " << discountlevel << "%" << endl;
//         cout << "-------------------------------------------" << endl;
//     }
// };

//******************** 9,10 ********************/

// class base
// {
// public:
//     virtual char transform(char) = 0;
//     void dofilter(ifstream &in, ofstream &out)
//     {
//         char ch;
//         while (in.get(ch))
//         {
//             out.put(transform(ch));
//         }
//     }
// };
// class encryption : public base
// {
// public:
//     int key;
//     encryption(int k)
//     {
//         key = k;
//     }
//     char transform(char c)
//     {

//         return c + key;
//     }
// };

// class uppercaseclass : public base
// {
// public:
//     char transform(char c)
//     {
//         return toupper(c);
//     }
// };
// class copyfile : public base
// {
// public:
//     char transform(char c)
//     {
//         return c;
//     }
// };

// class doublespace:public base{
//     public:
//     char ch;
//     char transform(char c){
//         return c;
//     }
//     void dofilter(ifstream &in,ofstream &out){
//         // string line;
//         // while (getline(in,line))
//         // {
//         //     out<<line<<'\n';
//         //     out<<'\n';
//         // }

//         while (in.get(ch))
//         {
//             if (ch=='\n')
//             {
//                 out<<"\n\n";
//             }
//             out.put(ch);

//         }

//     }
// };

//******************** 11 ********************/

// class gradeactivity
// {
// protected:
//     double score;

// public:
//     gradeactivity()
//     {
//         score = 0.0;
//     }
//     gradeactivity(double s)
//     {
//         score = s;
//     }
//     void setscore(int s)
//     {
//         score = s;
//     }
//     double getscore()
//     {
//         return score;
//     }
//     virtual char getlettergrade()
//     {

//         char lettergrade;
//         if (score > 89)
//         {
//             lettergrade = 'A';
//         }
//         else if (score > 79)
//         {
//             lettergrade = 'B';
//         }
//         else if (score > 69)
//         {
//             lettergrade = 'C';
//         }
//         else if (score > 59)
//         {
//             lettergrade = 'D';
//         }
//         else
//         {
//             lettergrade = 'F';
//         }
//         return lettergrade;
//     }
// };

// class essay : public gradeactivity
// {
// private:
//     int grammar;
//     int spelling;
//     int correct_length;
//     int content;

// public:
//     essay() : gradeactivity()
//     {
//         grammar = 0;
//         spelling = 0;
//         correct_length = 0;
//         content = 0;
//     }
//     essay(int g, int s, int c, int cont)
//     {
//         setpoints(g, s, c, cont);
//     }
//     void setpoints(int g, int s, int c, int cont)
//     {
//         grammar = g;
//         spelling = s;
//         correct_length = c;
//         content = cont;
//         setscore(grammar + spelling + correct_length + content);
//     }
//     int getgrammerpoints()
//     {
//         return grammar;
//     }
//     int getspellingpoints()
//     {
//         return spelling;
//     }
//     int getcoorect_lengthpoints()
//     {
//         return correct_length;
//     }
//     int getcontentpoints()
//     {
//         return content;
//     }
// };

// class passfailexam : public gradeactivity
// {
// private:
//     int totalquestions;
//     int missedquestions;

// public:
//     passfailexam(int t = 0, int m = 0)
//     {
//         totalquestions = t;
//         missedquestions = m;
//         setpassfailscore();
//     }
//     int gettotalquestions()
//     {
//         return totalquestions;
//     }
//     int getmissedquestions()
//     {
//         return missedquestions;
//     }
//     void setpassfailscore()
//     {
//         int eachquestionpoints = 100 / totalquestions;
//         int totalscores = 100 - (eachquestionpoints * missedquestions);
//         setscore(totalscores);
//     }

//     char getlettergrade()
//     {
//         char ch;
//         if (score >= 70)
//         {
//             ch = 'p';
//         }
//         else
//         {
//             ch = 'F';
//         }
//     }
// };

// class finalexam : public gradeactivity
// {
// private:
//     int numquestions;
//     double pointseach;
//     int missedquestions;

// public:
//     finalexam()
//     {
//         numquestions = 0;
//         pointseach = 0.0;
//         missedquestions = 0;
//     }
//     void set(int n, int m)
//     {
//         pointseach = 100 / n;
//         int s = 100 - (m * pointseach);
//         setscore(s);
//         adjustscores();
//     }
//     int getnumquestions()
//     {
//         return numquestions;
//     }
//     int getmissedquestions()
//     {
//         return missedquestions;
//     }
//     double getpointseach()
//     {
//         return pointseach;
//     }
//     void adjustscores()
//     {
//         double s = score - int(score);
//         if (s >= 5)
//         {
//             score += (1.0 - s);
//         }
//     }
// };
// class coursegrade
// {
// private:
//     gradeactivity *grade[4];

// public:
//     void setlab(gradeactivity &g)
//     {
//         grade[0] = &g;
//     }
//     void setpassfailexam(passfailexam &p)
//     {
//         grade[1] = &p;
//     }
//     void setessay(essay &e)
//     {
//         grade[2] = &e;
//     }
//     void setfinalexam(finalexam &f)
//     {
//         grade[3] = &f;
//     }
//     void print()
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             cout << "Grades Element " << i + 1 << " : " << endl;
//             cout << "Numeric Scores : " << grade[i]->getscore() << endl;
//             cout << "Grade : " << grade[i]->getlettergrade() << endl;
//         }
//     }
// };

//******************** 12 ********************/

// class ship
// {
// private:
//     string name;
//     string year_built;

// public:
//     ship()
//     {
//         name = "";
//         year_built = "";
//     }
//     ship(string n, string b)
//     {
//         name = n;
//         year_built = b;
//     }
//     void setshipname(string n)
//     {
//         name = n;
//     }
//     void setyearbuilt(string y)
//     {
//         year_built = y;
//     }
//     string getshipname()
//     {
//         return name;
//     }
//     string getyearbuilt()
//     {
//         return year_built;
//     }
//     virtual void print()
//     {
//         cout << "Ship Name : " << name << endl;
//         cout << "Ship Year Built : " << year_built << endl;
//     }
// };
// class cruiseship : public ship
// {
// private:
//     int maxpassengers;

// public:
//     cruiseship() : ship()
//     {
//         maxpassengers = 0;
//     }
//     cruiseship(string nam, string y, int n) : ship(nam, y)
//     {
//         maxpassengers = n;
//     }
//     void setmaxpassengers(int n)
//     {
//         maxpassengers = n;
//     }
//     int getmaxpassengers()
//     {
//         return maxpassengers;
//     }
//     void print() override
//     {
//         cout << "Ship Name : " << getshipname() << endl;
//         cout << "Passengers Capacity : " << maxpassengers << " Passengers" << endl;
//     }
// };
// class cargoship : public ship
// {
// private:
//     int capacity;

// public:
//     cargoship() : ship()
//     {
//         capacity = 0;
//     }
//     cargoship(string n, string y, int c) : ship(n, y)
//     {
//         capacity = c;
//     }
//     void setcapacity(int c)
//     {
//         capacity = c;
//     }
//     int getcapacity()
//     {
//         return capacity;
//     }
//     void print() override
//     {
//         cout << "Cargo Ship Name : " << getshipname() << endl;
//         cout << "Lugage Capacity : " << capacity << " Ton" << endl;
//     }
// };

//******************** 13 ********************/

class basicshape
{
private:
    double area;

public:
    void setarea(double a)
    {
        area = a;
    }
    double getarea()
    {
        return area;
    }
    virtual void calcarea() = 0;
};
class circle : public basicshape
{
private:
    long centerx;
    long centery;
    double radius;

public:
    circle(long x, long y, double r)
    {
        centerx = x;
        centery = y;
        radius = r;
        calcarea();
    }
    long getcenterx()
    {
        return centerx;
    }
    long getcentery()
    {
        return centery;
    }
    double getradius(){
        return radius;
    }

    void calcarea()
    {
        double a = 3.14159 * radius * radius;
        setarea(a);
    }
};
class rectangle : public basicshape
{
private:
    long width;
    long length;

public:
rectangle (long w,long l){
    width=w;
    length=l;
    calcarea();
}
    long getwidth() { return width; }
    long getlength() { return length; }
    void calcarea()
    {
        double a = length * width;
        setarea(a);
    }
};

int main()
{
    //******************** 13 ********************/

     circle c1(5, 10, 4.5);
    cout << "Circle Information:" << endl;
    cout << "Center X: " << c1.getcenterx() << endl;
    cout << "Center Y: " << c1.getcentery() << endl;
    cout << "Radius: " << c1.getradius() << endl;
    cout << "Area of Circle: " << c1.getarea() << endl;
    cout << endl;

    // Create a Rectangle object with width 8 and length 12
    rectangle r1(8, 12);
    cout << "Rectangle Information:" << endl;
    cout << "Width: " << r1.getwidth() << endl;
    cout << "Length: " << r1.getlength() << endl;
    cout << "Area of Rectangle: " << r1.getarea() << endl;



    //******************** 12 ********************/

    // ship *s = new ship("Titanic", "1998");
    // cruiseship *c = new cruiseship("Titanic", "1998", 310);
    // cargoship *cargo = new cargoship("Titanic", "1998", 5000);
    // ship *array[3] = {s, c, cargo};
    // for (int i = 0; i < 3; i++)
    // {
    //     if (i == 0)
    //     {
    //         cout << "Ship Print Function Shows : " << endl;
    //     }
    //     else if (i == 1)
    //     {
    //         cout << "Cruise Ship Print Function Shows : " << endl;
    //     }
    //     else
    //     {
    //         cout << "Cargo Ship Print Function Shows : " << endl;
    //     }
    //     array[i]->print();
    // }

    //******************** 11 ********************/

    // gradeactivity g(90);
    // passfailexam p(10, 3);
    // essay e(25, 13, 19, 18);
    // finalexam f;
    // f.set(50, 7);
    // coursegrade c;
    // c.setlab(g);
    // c.setpassfailexam(p);
    // c.setessay(e);
    // c.setfinalexam(f);
    // c.print();

    //******************** 9,10 ********************/
    // ifstream fin("file1.txt");
    // ofstream fout("file2.txt");

    // // encryption e(10);
    // // e.dofilter(fin,fout);

    // // uppercaseclass u;
    // // u.dofilter(fin,fout);

    // // copyfile c;
    // // c.dofilter(fin,fout);

    // doublespace d;
    // d.dofilter(fin,fout);

    //******************** 7,8 ********************/

    // // customerdata c("Atta", "Ul Mustafa", "Adda Bagh 14th Street", "Jhang", "Faisalabad", "35301", "0300-7783334", 11, true);
    // // c.displaycustomerdata();
    // // c.setmailinglist(false);
    // // c.displaycustomerdata();
    // // c.setfirstname("Malaika");
    // // c.setlastname("Atta");
    // // c.displaycustomerdata();

    // preferredcustomer p("Atta", "Ul Mustafa", "Adda Bagh 14th Street", "Jhang", "Faisalabad", "35301", "0300-7783334", 11, true,900);
    // p.displaypreferredcustomer();
    // p.setdiscount(1800);
    // p.setpurchasedamount(2500);
    // p.displaypreferredcustomer();

    //******************** 6 ********************/

    // int grammar, spelling, correct_length, content;
    // cout << "Enter Grammar Points (out of 30) : ";
    // cin >> grammar;
    // cout << "Enter Spelling Points (out of 20) : ";
    // cin >> spelling;
    // cout << "Enter Correct Length Points (out of 20) : ";
    // cin >> correct_length;
    // cout << "Enter Contents Points (out of 30) : ";
    // cin >> content;

    // essay e;
    // e.setpoints(grammar, spelling, correct_length, content);
    // int score = e.getscore();
    // char grade = e.getlettergrade();
    // cout << "Student Score Is " << score << " and Grade Is " << grade << "." << endl;

    //******************** 4,5 ********************/

    // miltime m(1620, 15);
    // m.displaymilitarytime();
    // m.displaystandardtime();

    // timeclock t(1400,1300);
    // int e;
    // e=t.getelapsed();
    // cout<<"Elapsed : "<<e<<endl;

    //******************** 1,2,3 ********************/

    // productionworker p("Atta", "0300-7783334", "11 December", 1, 15);
    // p.display();
    // shiftsupervisor s("Mustafa", "0314-2726302", "12/11/2024", 100000);
    // s.display();
    // teamleader t("Laraib","0302-85202001","15/2/2020",2,25,60,60);
    // t.display();

    return 0;
}