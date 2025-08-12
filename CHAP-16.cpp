#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <climits>
using namespace std;

//******************* 1 *******************/

// class date
// {
// public:
//     int day;
//     int month;
//     string month_name;
//     int year;

//     class invalidday
//     {
//     };
//     class invalidmonth
//     {
//     };

//     void setdate(int d, int m, int y)
//     {
//         year = y;
//         if (d < 1 || d > 31)
//         {
//             throw invalidday();
//         }
//         else
//         {
//             day = d;
//         }
//         if (m < 1 || m > 12)
//         {
//             throw invalidmonth();
//         }
//         else
//         {
//             month = m;
//         }

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

//******************* 2 *******************/

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
//         setmiltime(h, s);
//     }

//     class badhour
//     {
//     };
//     class badseconds
//     {
//     };
//     void setmiltime(int h, int s)
//     {
//         if (h < 0 || h > 2359)
//         {
//             throw badhour();
//         }
//         else
//         {
//             milhours = h;
//         }
//         if (s < 0 || s > 59)
//         {
//             throw badseconds();
//         }
//         else
//         {
//             milseconds = s;
//         }

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

//******************* 3 *******************/

// template<class min>
// min minimum(min a,min b){
//     if (a<b)
//     {
//         return a;
//     }
//     else{
//         return b;
//     }
//     return -1;

// }
// template<class max>
// max maximum(max a,max b){
//     if (a<b)
//     {
//         return b;
//     }
//     else{
//         return a;
//     }
//     return -1;

// }

//******************* 4 *******************/

// template<class t>
// t absolutevalue(t a){
//     if (a<0)
//     {
//         return -a;
//     }
//     return a;

// }

//******************* 5 *******************/

// template <class t>
// t total(int n)
// {

//     t sum = 0;
//     t value;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter Value " << i + 1 << " : ";
//         cin >> value;
//         sum += value;
//     }
//     return sum;
// }

//******************* 6 *******************/

// class error : public exception
// {
// public:
//     const char* what()
//     {
//         return "Invalid array index!";
//     }
// };

// class intarray
// {
// private:
//     int *arr;
//     int size;

// public:
//     intarray(int s)
//     {
//         size = s;
//         arr = new int[size];
//     }

//     int &operator[](int index)
//     {
//         if (index < 0 || index >= size)
//         {
//             throw error();
//         }
//         return arr[index];
//     }
// };

//******************* 7 *******************/

// class testscore
// {
// private:
//     int size;
//     int *array;

// public:
//     testscore(int arr[], int s)
//     {
//         size = s;
//         array = new int[size];
//         for (int i = 0; i < size; i++)
//         {
//             array[i] = arr[i];
//         }
//     }
//     double average()
//     {
//         int total = 0;
//         for (int i = 0; i < size; i++)
//         {
//             if (array[i] > 100 || array[i] < 0)
//             {
//                 throw runtime_error("Invalid! TestScore");
//             }

//             total += array[i];
//         }
//         return total / double(size);
//     }
// };

//******************* 8,9,10,11,12 *******************/

// template <class t>
// class simplevector
// {

// private:
//     t *aptr;
//     int arraysize;

// public:
//     vector<int> v;
//     simplevector()
//     {
//         arraysize = 0;
//         aptr = nullptr;
//     }
//     simplevector<t>(int s)
//     {
//         arraysize = s;
//         try
//         {
//             aptr = new t[s];
//         }
//         catch (bad_alloc)
//         {
//             handleMemError();
//         }

//         for (int i = 0; i < arraysize; i++)
//         {
//             aptr[i] = i * i;
//             v.push_back(aptr[i]);
//         }
//     }
//     void displayvectorarray()
//     {
//         cout << "Vector Array Is : ";
//         for (int i = 0; i < v.size(); i++)
//         {
//             cout << v[i] << " ";
//         }
//     }
//     int size()
//     {
//         return arraysize;
//     }
//     simplevector(const simplevector &s)
//     {
//         arraysize = s.arraysize;
//         aptr = new t[arraysize];
//         if (aptr == 0)
//         {
//             handleMemError();
//         }
//         for (int i = 0; i < arraysize; i++)
//         {
//             aptr[i] = s.aptr[i];
//         }
//     }
//     t &operator[](const int &sub)
//     {
//         if (sub < 0 || sub >= arraysize)
//         {
//             handleSubError();
//         }
//         return aptr[sub];
//     }

//     t getelemnt(int sub)
//     {
//         if (sub < 0 || sub >= arraysize)
//         {
//             handleSubError();
//         }
//         return aptr[sub];
//     }
//     void handleMemError()
//     {
//         cout << "Error:Cannot allocate memory.\n";
//         exit(EXIT_FAILURE);
//     }
//     void handleSubError()
//     {
//         cout << "ERROR: Subscript out of range.\n";
//         exit(EXIT_FAILURE);
//     }
//     ~simplevector()
//     {
//         delete[] aptr;
//     }

//     void popback()
//     {
//         v.pop_back();
//     }
//     void pushback(int n)
//     {
//         v.push_back(n);
//     }
// };

// template <>
// class simplevector<string>
// {

// private:
//     string *aptr;
//     int arraysize;

// public:
//     vector<string> v;
//     simplevector()
//     {
//         arraysize = 0;
//         aptr = nullptr;
//     }
//     simplevector<string>(int s)
//     {
//         arraysize = s;
//         try
//         {
//             aptr = new string[s];
//         }
//         catch (bad_alloc)
//         {
//             handleMemError();
//         }

//         for (int i = 0; i < arraysize; i++)
//         {
//             v.push_back("Default-String");
//         }
//     }
//     void displayvectorarray()
//     {
//         cout << "Vector Array Is : ";
//         for (int i = 0; i < v.size(); i++)
//         {
//             cout << v[i] <<endl;
//         }
//     }
//     int size()
//     {
//         return arraysize;
//     }
//     simplevector(const simplevector &s)
//     {
//         arraysize = s.arraysize;
//         aptr = new string[arraysize];
//         if (aptr == 0)
//         {
//             handleMemError();
//         }
//         for (int i = 0; i < arraysize; i++)
//         {
//             aptr[i] = s.aptr[i];
//         }
//     }
//     string &operator[](const int &sub)
//     {
//         if (sub < 0 || sub >= arraysize)
//         {
//             handleSubError();
//         }
//         return aptr[sub];
//     }

//     string getelemnt(int sub)
//     {
//         if (sub < 0 || sub >= arraysize)
//         {
//             handleSubError();
//         }
//         return aptr[sub];
//     }
//     void handleMemError()
//     {
//         cout << "Error:Cannot allocate memory.\n";
//         exit(EXIT_FAILURE);
//     }
//     void handleSubError()
//     {
//         cout << "ERROR: Subscript out of range.\n";
//         exit(EXIT_FAILURE);
//     }
//     ~simplevector()
//     {
//         delete[] aptr;
//     }

//     void popback()
//     {
//         v.pop_back();
//     }
//     void pushback(string n)
//     {
//         v.push_back(n);
//     }
// };

// template <class t>
// class searchablevector : public simplevector<t>
// {

// public:
//     searchablevector() : simplevector<t>() {};
//     searchablevector(int s) : simplevector<t>(s) {};
//     int finditem(const t item)
//     {
//         // for (int i = 0; i < this->size(); i++)
//         // {
//         //     if (this->getelemnt(i) == item)
//         //     {
//         //         return i;
//         //     }
//         // }

//         int s = 0;
//         int mid;
//         int e = this->size() - 1;
//         while (e <= s)
//         {
//             mid = (s + e) / 2;
//             if (this->v[mid] == item)
//             {
//                 return mid;
//             }
//             if (item > this->v[mid])
//             {
//                 s = mid + 1;
//             }
//             if (item < this->v[mid])
//             {
//                 e = mid - 1;
//             }
//         }

//         return -1;
//     }
//     searchablevector(const searchablevector &obj) : simplevector<t>(obj) {};
// };

// template <>
// class searchablevector<string> : public simplevector<string>
// {

// public:
//     searchablevector() : simplevector<string>() {};
//     searchablevector(int s) : simplevector<string>(s) {};
//     int finditem(const string &item)
//     {
//         // for (int i = 0; i < this->size(); i++)
//         // {
//         //     if (this->getelemnt(i) == item)
//         //     {
//         //         return i;
//         //     }
//         // }

//         int s = 0;
//         int mid;
//         int e = this->size() - 1;
//         while (s <= e)
//         {
//             mid = (s + e) / 2;
//             if (this->v[mid] == item)
//             {
//                 return mid;
//             }
//             if (item > this->v[mid])
//             {
//                 s = mid + 1;
//             }
//             if (item < this->v[mid])
//             {
//                 e = mid - 1;
//             }
//         }

//         return -1;
//     }
//     searchablevector(const searchablevector &obj) : simplevector<string>(obj) {};
// };

// template <class t>
// class sortablevector : public simplevector<t>
// {
// public:
//     sortablevector() : simplevector<t>() {};
//     sortablevector(int size) : simplevector<t>(size) {};
//     void decendingsortvector()
//     {
//         sort(this->v.begin(), this->v.end());
//         reverse(this->v.begin(), this->v.end());
//     }
//     void displayvectorarray()
//     {
//         cout << "Vector Array Is : ";
//         for (int i = 0; i < this->size(); i++)
//         {
//             cout << this->v[i] << " ";
//         }
//         decendingsortvector();
//         cout << "Vector Array After Reverse Sort : ";
//         for (int i = 0; i < this->size(); i++)
//         {
//             cout << this->v[i] << " ";
//         }
//     }
// };

// template <class t>
// class searchablevector2 : public sortablevector<t>
// {

// public:
// int item;
//     searchablevector2() : sortablevector<t>() {};
//     searchablevector2(int size) : sortablevector<t>(size) {};
//     int finditem2(const t item)
//     {
//         // for (int i = 0; i < this->size(); i++)
//         // {
//         //     if (this->getelemnt(i) == item)
//         //     {
//         //         return i;
//         //     }
//         // }
//         this->item=item;

//         int s = 0;
//         int mid;
//         int e = this->size() - 1;
//         while (s <= e)
//         {
//             mid = (s + e) / 2;
//             if (this->getelemnt(mid) == item)
//             {
//                 return mid;
//             }
//             if (item > this->getelemnt(mid))
//             {
//                 s = mid + 1;
//             }
//             if (item < this->getelemnt(mid))
//             {
//                 e = mid - 1;
//             }
//         }

//         return -1;
//     };
//     void sort_and_search()
//     {
//         this->displayvectorarray();
//         int index = finditem2(item);
//         if (index != -1)
//             cout << "\nSearch Item " << item << " is At Index: " << index << endl;
//         else
//             cout << "\nSearch Item " << item << " not found!" << endl;
//     }
// };

//******************* 14 *******************/

// void sorting(vector<int> &scores, vector<string> &names, int size)
// {
//     int least;
//     for (int i = 0; i < size; i++)
//     {
//         int index = i;
//         least = scores[i];
//         for (int j = i + 1; j < size; j++)
//         {
//             if (least > scores[j])
//             {
//                 least = scores[j];
//                 index = j;
//             }
//         }
//         cout << "Least on pass " << i + 1 << " : " << least << endl;
//         if (scores[index] < scores[i])
//         {
//             int temp1 = scores[index];
//             scores[index] = scores[i];
//             scores[i] = temp1;

//             string temp2 = names[index];
//             names[index] = names[i];
//             names[i] = temp2;
//         }
//     }
// }

// int averagescores(vector<int> scores, int size)
// {
//     int total = 0;
//     int average;
//     int least = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (least > scores[i])
//         {
//             least = scores[i];
//         }

//         total += scores[i];
//     }
//     // return ((total-least) / (size-1)); //for question 3
//     return (total / size);
// }

//******************* 16 *******************/

// class employee
// {
// private:
//     string name;
//     string number;
//     string hdate;

// public:
//     class invalidemployeenumber
//     {
//     };
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
//         name = n;
//         int x = stoi(num);
//         if (x < 0 || x > 9999)
//         {
//             throw invalidemployeenumber();
//         }
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
//     class invalidshift
//     {
//     };
//     class invalidpayrate
//     {
//     };
//     productionworker()
//     {
//         shift = 0;
//         pay_rate = 0.0;
//     }
//     productionworker(string n, string num, string d, int s, double p) : employee(n, num, d)
//     {
//         if (s < 1 || s > 2)
//         {
//             throw invalidshift();
//         }

//         shift = s;

//         if (p < 0 || p > 50)
//         {
//             throw invalidpayrate();
//         }

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

//******************* 17 *******************/

class phonebookentry
{
public:
    string name;
    string number;
    phonebookentry()
    {
        name = "";
        number = "";
    }
    phonebookentry(string n, string num)
    {
        name = n;
        number = num;
    }
    void setname(string n)
    {
        name = n;
    }
    void setnumber(string n)
    {
        number = n;
    }
    void displayphonebook()
    {
        cout << "Name : " << name << endl;
        cout << "Number : " << number << endl;
    }
};
int main()
{
    //******************* 17 *******************/

    string name;
    string number;

    vector<phonebookentry> v;
    v.emplace_back("Atta", "11");
    v.emplace_back("Sohaib", "85");
    v.emplace_back("Haseeb", "46");
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << "Enter Person " << i + 1 << " Name : ";
    //     cin >> name;
    //     v[i].setname(name);
    //     cout << name << "'s Number? ";
    //     cin >> number;
    //     v[i].setnumber(number);
    // }

    for (int i = 0; i < v.size(); i++)
    {
        cout << "PERSON " << i + 1 << " : " << endl;
        v[i].displayphonebook();
    }

    //******************* 16 *******************/

    // try
    // {
    //     productionworker p("Atta","-1","11/12/2001",1,8.7);
    //     p.display();
    // }
    // catch(productionworker::invalidemployeenumber)
    // {
    //     cout<<"Invalid Number Entry!"<<endl;
    // }
    // catch(productionworker::invalidshift)
    // {
    //     cout<<"Invalid Shift Entry!"<<endl;
    // }
    // catch(productionworker::invalidpayrate)
    // {
    //     cout<<"Invalid Pay-Rate!"<<endl;
    // }

    //******************* 15 *******************/

    // vector<int> array = {5658845,
    //                      4520125,
    //                      7895122,
    //                      8777541,
    //                      8451277,
    //                      1302850,
    //                      8080152,
    //                      4562555,
    //                      5552012,
    //                      5050552,
    //                      7825877,
    //                      1250255,
    //                      1005231,
    //                      6545231,
    //                      3852085,
    //                      7576651,
    //                      7881200,
    //                      4581002};
    // int charge_account_number;
    // cout << "Enter Charge Account Number : ";
    // cin >> charge_account_number;

    // bool found = false;
    // cout << "*******LINEAR SEARCH*********" << endl;
    // for (int i = 0; i < array.size(); i++)
    // {
    //     if (array[i] == charge_account_number)
    //     {
    //         found = true;
    //         break;
    //     }
    // }

    // if (found)
    // {
    //     cout << "The account number " << charge_account_number << " is valid." << endl;
    // }
    // else
    // {
    //     cout << "The account number " << charge_account_number << " is Invalid." << endl;
    // }

    // cout << "*******SORTING OF ARRAY*********" << endl;
    // int index;

    // sort(array.begin(), array.end());

    // cout << "Sorted Array Is : " << endl;
    // for (int i = 0; i < array.size(); i++)
    // {
    //     cout << array[i] << endl;
    // }

    // cout << "\n*******BINARY SEARCH*********" << endl;
    // cout << "Enter Key To Find : ";
    // int key;
    // cin >> key;
    // bool found1 = binary_search(array.begin(), array.end(), key);

    // if (found1)
    // {
    //     cout << "The account number " << charge_account_number << " is valid." << endl;
    // }
    // else
    // {
    //     cout << "The account number " << charge_account_number << " is Invalid." << endl;
    // }

    //******************* 14 *******************/

    // int size, average;
    // cout << "Enter Number Of Players Scores : ";
    // cin >> size;

    // vector<string> names(size);
    // vector<int> scores(size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Player " << i + 1 << " Name : ";
    //     cin >> names[i];
    //     cout << names[i] << " Test Scores : ";
    //     cin >> scores[i];
    //     while ((scores[i]) < 0)
    //     {
    //         cout << "Score Can't Be In Negative Numbers. Try Again" << endl;
    //         cout << names[i] << " Test Scores : ";
    //         cin >> scores[i];
    //     }
    // }
    // sorting(scores, names, size);
    // cout << "scores After Sorting :" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << names[i] << " Scores : " << scores[i] << endl;
    // }
    // average = averagescores(scores, size);
    // cout << "\nAverage Scores Of All Players : " << average << endl;

    //******************* 13 *******************/

    // const int size = 3;
    // vector<double> v(size);
    // double average, total = 0, smallest = INT_MAX, largest = INT_MIN;
    // double r;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Month " << i + 1 << " Rain Fall : ";
    //     cin >> v[i];
    //     while (v[i] < 0)
    //     {
    //         cout << "RainFall Can Not Be In Negative Numbers." << endl;
    //         cout << "Enter Again Month " << i + 1 << " Rain Fall : ";
    //         cin >>v[i];
    //     }

    //     if (largest < v[i])
    //     {
    //         largest = v[i];
    //     }
    //     if (smallest > v[i])
    //     {
    //         smallest = v[i];
    //     }
    //     total += v[i];
    // }

    // cout << "Highest : " << largest << endl;
    // cout << "Lowest : " << smallest << endl;

    // cout << "Total RainFall : " << total << endl;
    // cout << "Average RainFall Each Month : " << total / size << endl;

    //******************* 8,9,10,11,12 *******************/

    // Create a SimpleVector of size 5
    // simplevector<int> s(4);
    // cout << "Element at index 3: " << s.getelemnt(0) << endl;

    // // Test the copy constructor
    // simplevector<int> sCopy = s;
    // cout << "Element at index 3 in copied vector: " << sCopy.getelemnt(0) << endl;

    // s.displayvectorarray();
    // s.pushback(12);
    // s.displayvectorarray();
    // s.popback();
    // s.displayvectorarray();
    // s.popback();
    // s.displayvectorarray();

    // searchablevector<int> obj(4);
    // int index;
    // obj.displayvectorarray();
    // index = obj.finditem(64);
    // cout << "Index: " << index << endl;

    // sortablevector<int> s(6);
    // s.displayvectorarray();

    // searchablevector2<int> s2(4);
    // s2.finditem2(4);
    // s2.sort_and_search();

    // searchablevector<string> s(4);

    // // Initializing and displaying the vector
    // s.displayvectorarray();

    // // Adding new strings
    // s.pushback("Sohaib");
    // s.pushback("Atta");
    // s.pushback("Haseeb");

    // // Sorting the vector to ensure binary search works correctly
    // sort(s.v.begin(), s.v.end());

    // // Displaying the vector after insertion and sorting
    // s.displayvectorarray();

    // // Searching for "Sohaib"
    // int index = s.finditem("Sohaib");
    // cout << "Index : " << index << endl;

    //******************* 7 *******************/

    // const int size = 5;
    // int arr[size] = {1002, 4, 3, 2, 1};

    // try
    // {
    //     testscore t(arr, size);
    //     t.average();
    // }
    // catch (const runtime_error &e)
    // {
    //     cout <<"Error"<< e.what();
    // }

    //******************* 6 *******************/

    // intarray i(5);
    // try
    // {
    //     i[0] = 20;
    //     i[5] = 20;
    // }
    // catch (error &e)
    // {
    //     cout << e.what();
    // }

    //******************* 5 *******************/

    // double sum=total<double>(2);
    // cout<<"Sum : "<<sum<<endl;

    //******************* 4 *******************/

    // int x=absolutevalue(2);
    // cout<<x<<endl;

    //******************* 3 *******************/

    // double x=minimum(12.3,11.0);
    // cout<<x<<endl;
    // double y=maximum(12.3,11.0);
    // cout<<y<<endl;

    //******************* 2 *******************/

    // miltime m;
    // try
    // {
    //     m.setmiltime(2344, 60);
    //     m.displaymilitarytime();
    // }
    // catch(miltime::badhour){
    //     cout<<"Error : Invalid Hours Input!"<<endl;
    // }
    // catch(miltime::badseconds){
    //     cout<<"Error : Invalid Seconds Input!"<<endl;
    // }

    //******************* 1 *******************/

    // date d1;

    // try
    // {
    //     d1.setdate(11, 13, 2001);
    //     d1.getdate();
    // }
    // catch (date::invalidday)
    // {
    //     cout << "Error:  Invalid Day Input." << endl;
    // }
    // catch (date::invalidmonth)
    // {
    //     cout << "Error:  Invalid Month Input." << endl;
    // }

    return 0;
}