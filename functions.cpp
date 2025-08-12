#include <iostream>
using namespace std;

string greet(string name,string greeting="Hello"){
    cout<<greeting<<" , "<<name<<"!"<<endl;

}

int max(int a,int b){
    cout<<"\nits int";
    if(a>b){
        return a;
    }
    else b;
    
}

double max(double a,double b){
    cout<<"\nits double";
    if(a>b){
        return a;
    }
    else b;   
}

int factorial(int  n){

    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int swap(int a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    // string name,greeting;
    // cout<<"Enter name and greeting"<<endl;
    // cin>>name;
    // cout<<endl;
    // cin>>greeting;
    // cout<<endl;
    // cout<<"Greetings are as : ";
    // cout<<greet(name,greeting)<<endl;


// float x,y;
// cout<<"enter numbers for comaprison : ";
// cin>>x>>y;
// cout<<"max value is : "<<max(x,y)<<endl;

    
    // int a;
    // cout<<"enter number : ";
    // cin>>a;
    // cout<<"factorial of "<<a<<" is : "<<factorial(a)<<endl;


// int x,y;
// cout<<"enter two values to swap : ";
// cin>>x>>y;
// cout<<endl;
// cout<<"before swaping x is "<<x<<" and y is "<<y<<endl;
// swap(x,y);
// cout<<"after swaping x is "<<x<<" and y is "<<y<<endl;

    const int n=5;
    int arr[n];
    cout<<"enter "<<n<<" numbers: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"number "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"your entered numbers are : ";
    for(int i=0; i<n ;i++){
         cout<<"number at "<<i<<" is :"<<arr[i]<<endl;
    }

    return 0;
}