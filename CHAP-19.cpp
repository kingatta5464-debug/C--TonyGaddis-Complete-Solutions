#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//***************** BOOK *****************/

// Factorial

// int factorial(int num)
// {
//     if (num == 0)
//     {
//         return 1;
//     }

//     return num * factorial(num - 1);
// }

// COUNT CHARACTERS

// int numchars(char search, string s, int i)
// {
//     if (i >= s.length())
//     {
//         return 0;
//     }
//     else if (s[i] == search)
//     {
//         return 1 + numchars(search, s, i + 1);
//     }
//     else
//     {
//         return numchars(search, s, i + 1);
//     }
// }

// GCD

// int gcd(int x, int y)
// {
//     if (x % y == 0)
//     {
//         return y;
//     }
//     else
//     {
//         return gcd(y, x % y);
//     }
// }

// FIBONACCI

// int fib(int n)
// {
//     if (n <= 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }

// BINARY SEARCH

// int binarysearch(int arr[], int first, int last, int value)
// {
//     if (first > last)
//     {
//         return -1;
//     }
//     int middle = (first + last) / 2;
//     if (arr[middle] == value)
//     {
//         return middle;
//     }
//     else if (value > arr[middle])
//     {
//         binarysearch(arr, middle + 1, last, value);
//     }
//     else
//     {
//         binarysearch(arr, first, middle - 1, value);
//     }
// }

// TOWER OF HANOI

// void movediscs(int num, char frompeg, char topeg, char temppeg)
// {
//     if (num > 0)
//     {
//         movediscs(num - 1, frompeg, temppeg, topeg);
//         cout << "Moving Disc From Peg " << frompeg << " To Peg " << topeg << endl;
//         movediscs(num - 1, temppeg, topeg, frompeg);
//     }
// }

// QUICK SORT

// void swap(int &v1, int &v2)
// {
//     int temp = v1;
//     v1 = v2;
//     v2 = temp;
// }
// int partition(int arr[], int start, int end)
// {
//     int pivotvalue = arr[start];
//     int pivotindex = start;
//     for (int i = start + 1; i <= end ; i++)
//     {
//         if (arr[i] < pivotvalue)
//         {
//             pivotindex++;
//             swap(arr[pivotindex], arr[i]);
//         }
//     }
//     swap(arr[start], arr[pivotindex]);
//     return pivotindex;
// }
// void quicksort(int arr[], int start, int end)
// {
//     int pivotpoint;
//     if (start < end)
//     {
//         pivotpoint = partition(arr, start, end);

//         quicksort(arr, start, pivotpoint - 1);
//         quicksort(arr, pivotpoint + 1, end);
//     }
// }

//***************** 1 *****************/

// int itfactorial(int n)
// {
//     int fact = 1;
//     while (n != 0)
//     {
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }

//***************** 2 *****************/

// void sign(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     else
//     {
//         cout << "No Parking" << endl;
//         sign(n - 1);
//     }
// }

//***************** 3 *****************/

// template <class t>
// void myswap(t &v1, t &v2)
// {
//     t temp = v1;
//     v1 = v2;
//     v2 = temp;
// }
// template <class t>
// int partition(t arr[], int start, int end)
// {
//     t pivotvalue = arr[start];
//     int pivotindex = start;
//     for (int i = start + 1; i <= end; i++)
//     {
//         if (arr[i] < pivotvalue)
//         {
//             pivotindex++;
//             myswap(arr[pivotindex], arr[i]);
//         }
//     }
//     myswap(arr[start], arr[pivotindex]);
//     return pivotindex;
// }
// template <class t>
// void quicksort(t arr[], int start, int end)
// {
//     int pivotpoint;
//     if (start < end)
//     {
//         pivotpoint = partition(arr, start, end);

//         quicksort(arr, start, pivotpoint - 1);
//         quicksort(arr, pivotpoint + 1, end);
//     }
// }

//***************** 4 *****************/

// int arraysum(const int arr[], int size)
// {
//     if (size == 0)
//     {
//         return arr[size];
//     }
//     return arr[size] + arraysum(arr, size - 1);
// }

//***************** 5 *****************/

// int recursivemultiplication(int x,int y){
//     if (x==1)
//     {
//         return y;
//     }

//     return y+recursivemultiplication(x-1,y);

// }

//***************** 6 *****************/

//  int powerr(int num,int ex){
//     if (ex==0)
//     {
//         return 1;
//     }
//     return num*powerr(num,ex-1);
//  }

//***************** 7 *****************/

// int sumall(int n){
//     if (n==1)
//     {
//         return 1;
//     }
//     return n+sumall(n-1);
// }

//***************** 8 *****************/

// bool ismember(const int arr[],int key,int size){
//     if (size<0)
//     {
//         return false;
//     }
//     else if (arr[size]==key)
//     {
//         return true;
//     }
//     return ismember(arr,key,size-1);
// }

//***************** 9 *****************/

// void stringreverser(const string &s, int size)
// {
//     if (size < 0)
//     {
//         return;
//     }
//     stringreverser(s, size - 1);
//     cout << s[size];
// }
// // OR
// void stringreverser(const string &s, int index = 0)
// {
//     if (index > s.length() - 1)
//     {
//         return;
//     }
//     stringreverser(s, index + 1);
//     cout << s[index];
// }

//***************** 11 *****************/

// bool ispalindrome(const string &s, int index, int size)
// {
//     while (index < size && (s[index] == ' ' || s[index] == ','))
//     {
//         index++;
//     }
//     while (size > index && (s[size] == ' ' || s[size] == ','))
//     {
//         size--;
//     }

//     if (index > size)
//     {
//         return true;
//     }
//     else if (toupper(s[index]) != toupper(s[size]))
//     {
//         return false;
//     }
//     return ispalindrome(s, index + 1, size - 1);
// }

//***************** 12 *****************/

int A(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return A(m - 1, 1);
    }
    else
    {
        return A(m - 1,A(m, n - 1));
    }
}

int main()
{
    //***************** 12 *****************/
    // Testing the Ackermann function with specified values
    cout << "A(0, 0) = " << A(0, 0) << endl;
    cout << "A(0, 1) = " << A(0, 1) << endl;
    cout << "A(1, 1) = " << A(1, 1) << endl;
    cout << "A(1, 2) = " << A(1, 2) << endl;
    cout << "A(1, 3) = " << A(1, 3) << endl;
    cout << "A(2, 2) = " << A(2, 2) << endl;
    cout << "A(3, 2) = " << A(3, 2) << endl;

    //***************** 11 *****************/
    // string s = "A man, a plan, a canal, Panama";
    // bool x = ispalindrome(s, 0, s.length() - 1);
    // cout << x;

    //***************** 9 *****************/

    // string s = "Hello World";
    // stringreverser(s, s.length() - 1);

    //***************** 8 *****************/

    // int arr[5]={34,56,78,28,35};
    // bool x=ismember(arr,35,4);
    // cout<<x;

    //***************** 7 *****************/

    // int x=sumall(50);
    // cout<<x;

    //***************** 6 *****************/

    // int p=powerr(7,7);
    // cout<<p;

    //***************** 5 *****************/

    // int m=recursivemultiplication(7,4);
    // cout<<m;

    //***************** 4 *****************/

    // int arr[5] = {1, 3, 2, 5, 4};
    // int sum=arraysum(arr,5-1);
    // cout<<"Sum : "<<sum<<endl;

    //***************** 3 *****************/

    // double arr[5] = {6.5, 3, 6.3, 33.1, 87.755};
    // quicksort(arr, 0, 4);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //***************** 2 *****************/

    // sign(3);

    //***************** 1 *****************/

    // int x=itfactorial(5);
    // cout<<x<<endl;
    return 0;
}