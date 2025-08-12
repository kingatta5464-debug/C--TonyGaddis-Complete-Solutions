// #include<iostream>
// using namespace std;
// class y;

// class x {
//     int a;
//     public:
//     void setvalue(int v){
//         a=v;
//     }
//     friend int sum(x,y);

// };

// class y {
//     int b;
//     public:
//     void setvalue(int v){
//         b=v;
//     }
//     friend int sum(x,y);

// };

// int sum(x a1, y b1){
//     return a1.a+b1.b;
// }

// int main() {

//     x n;
//     n.setvalue(5);
//     y m;
//     m.setvalue(4);

//     // sum(n,m);
//     cout<<"sum of given values is : "<<sum(n,m)<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class a;
class b
{
    int x;
    friend void a:: printvalue();

public:
    friend class a;
    void setvalue(int v)
    {
        x = v;
    }
};
class a
{
    int y;

public:
    void setvalue(int v)
    {
        y = v;
    }
    void printvalue()
    {
        cout << "value is given as : " << y << endl;
    }
};
int main()
{

    a a1;
    a1.setvalue(8);
    a1.printvalue();
    
    b b1;
    b1.setvalue(5);
    

    return 0;
}