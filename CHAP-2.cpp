#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // double sales=8600000;
    // double per=(58.0/100.0);

    // double total;
    // total=sales*per;
    // cout<<total;

    // double sale=95;
    // float salestax=4.0,countysalestax=2.0;
    // double total_tax=salestax+countysalestax;
    // double tax=95*(total_tax/100.0);
    // cout<<tax;

    // double tax,tip,charges,totalcharges;
    // charges=88.67;
    // tax=(charges)*(6.75/100.0);
    // totalcharges=charges+tax;
    // tip=totalcharges*(20.0/100.0);
    // cout<<"meal cost: "<<charges<<endl;
    // cout<<"tax amount: "<<tax<<endl;
    // cout<<"tip amount: "<<tip<<endl;
    // cout<<"total bill: "<<totalcharges;

    // double a=28,b=32,c=37,d=24,e=33,f=5.0,sum;
    // sum=a+b+c+d+e;
    // double average;
    // average=sum/f;
    // cout<<"Average : "<<average;

    // double payamount=2200.0,payperiods=26,annualpay;
    // annualpay=payamount*payperiods;
    // cout<<"total annualpay: "<<annualpay;

    // double pyr=1.5;
    // cout<<" the ocean's level in 5 years will be : "<<5*pyr<<endl;
    // cout<<" the ocean's level in 7 years will be : "<<7*pyr<<endl;
    // cout<<" the ocean's level in 10 years will be : "<<10*pyr<<endl;

    // double p1 = 15.95, p2 = 24.95, p3 = 6.95, p4 = 12.95, p5 = 3.95,total;
    // cout << "Price of item 1 = $" << p1 << endl;
    // cout << "Price of item 2 = $" << p2 << endl;
    // cout << "Price of item 3 = $" << p3 << endl;
    // cout << "Price of item 4 = $" << p4 << endl;
    // cout << "Price of item 5 = $" << p5 << endl;

    // total=p1+p2+p3+p4+p5;
    // cout << "Total Price = $" << total << endl;
    // double tax;
    // tax=total*(7.0/100.0);
    // total=total+tax;
    // cout << "Total Price after tax = $" << total << endl;

    // cout << "The size of a char is: " << sizeof(char) << " byte(s)" << endl;
    // cout << "The size of an int is: " << sizeof(int) << " byte(s)" << endl;
    // cout << "The size of a float is: " << sizeof(float) << " byte(s)" << endl;
    // cout << "The size of a double is: " << sizeof(double) << " byte(s)" << endl;
    // cout << "The size of a string is: " << sizeof(string) << " byte(s)" << endl;

    // int gallons=15;
    // int miles=375;
    // cout<<"miles per gallon : "<<miles/gallons<<"-miles";

    // int gallon=20;
    // double averageintown=23.5;
    // double averageonhighway=28.9;

    // double dpgit=gallon*averageintown;
    // cout<<"distance the car can travel on one tank of gas when driven in town :"<<dpgit<<endl;
    // double dpgoh=gallon*averageonhighway;
    // cout<<"distance the car can travel on one tank of gas when driven on highway :"<<dpgoh<<endl;

    // double sf=43560,gsf;
    // // cout<<"Write squares feet in an acre : ";
    // // cin>>sf;
    // cout<<"Write squares feet you want to calculate in acres : ";
    // cin>>gsf;
    // double acre=gsf/sf;
    // cout<<"Acres in given Square feet are : "<<acre;

    // double cost;
    // cout<<"Cost : ";
    // cin>>cost;
    // double profit=cost*(35.0/100.0);
    // double selling_price=profit+cost;
    // cout<<"Selling ptice : "<<selling_price;





    // int size;
    // cout<<"Enter number of rows : ";
    // cin>>size;
    // int row;
    // int col;
    // int space;
    // for (row = 1; row <= size; row++)
    // {
    //     //for spaces
    //     for ( space = 1; space <=size-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for ( col = 1;col <= row*2-1; col++)
    //     {
    //             cout<<"*";  
    //     }
        
        
    //     cout<<endl;
    // }
    // for (row = size; row>= 1; row--)
    // {
    //     for (space = 1; space<=size-row; space++)
    //     {
    //         cout<<" ";
    //     }
    //     for (col = 1; col <=row*2-1; col++)
    //     {
    //         cout<<"*";
    //     }
        
        
    //     cout<<endl;
    // }




    // float surv=16500.0;
    // //persons who purchased drinks
    // float per=16500*(15.0/100.0);
    // cout<<"Persons who purchased drinks out of 16500 are : "<<per<<endl;
    // float cf;
    // cf=per*(58.0/100);
    // cout<<"Persons who prefered citrus drinks out of those 15% are: "<<cf<<endl;
    // cout<<"Persons who prefered citrus drinks out of those 16500 are: "<<(cf/surv)*100.0<<"%"<<endl;
    
    int size;
    cout<<"size of diamoned : ";
    cin>>size;
    char c;
    cout<<"Enter character to make diamoned : ";
    cin>>c;
    int row;
    int col;
    int space;
    for (row  = 1; row <= size; row++)
    {
        for (space = 1; space <= size-row; space++)
        {
           cout<<" ";
        }
        for (col  = 1; col <= row*2-1 ; col++)
        {
            cout<<c;
        } 
        cout<<endl;
    
    }
    for (row = size; row >=1; row--)
    {
        for (space = 1;space<= size-row; space++)
        {
            cout<<" ";
        }
        for (col  = 1; col <= row*2-1; col++)
        {
            cout<<c;
        }
        
       cout<<endl;
    }

//     int num1 = 2897, num2 = 5, num3 = 837, 
//  num4 = 34, num5 = 7, num6 = 1623, 
// num7 = 390, num8 = 3456, num9 = 12; 

//  // Display the first row of numbers 
//  cout << num1 << " " << num2 << " " << num3 << endl; 

//  // Display the second row of numbers 
//  cout << num4 << " " << num5 << " " << num6 << endl; 

//  // Display the third row of numbers 
//  cout << num7 << " " << num8 << " " << num9 << endl; 




//  int num1 = 2897, num2 = 5, num3 = 837, 
//  num4 = 34, num5 = 7, num6 = 1623, 
//  num7 = 390, num8 = 3456, num9 = 12;


//  // Display the first row of numbers 
//  cout << setw(6) << num1 << setw(6) 
//  << num2 << setw(6) << num3 << endl; 

//  // Display the second row of numbers 
//  cout << setw(6) << num4 << setw(6) 
//  << num5 << setw(6) << num6 << endl; 

//  // Display the third row of numbers 
//  cout << setw(6) << num7 << setw(6) 
// << num8 << setw(6) << num9 << endl;
    
    
//     int intValue = 3928; 
//  double doubleValue = 91.5; 
//  string stringValue = "John J. Smith"; 

//  cout <<  setw(16) << intValue <<  endl; 
//  cout <<  setw(16) << doubleValue <<  endl; 
//  cout <<  setw(16) << stringValue <<  endl; 

    



//  double div;
//  div=4.3455/2.1242;
//  cout<<setprecision(100)<<div<<endl;




    return 0;
}