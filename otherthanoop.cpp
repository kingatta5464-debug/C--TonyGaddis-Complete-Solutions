#include<iostream>
#include<cmath>
using namespace std;


bool isprime(int n){
    if (n<=1){
        return false;
    }
    for (int i = 2; i < n/2; i++)
    {
        if (n%i==0){
            return false;
        }
    }
    return true;

    
}











// int averageofarray (int arr[],int size){
//     int sum=0;
//             for (int i = 0; i < size; i++)
//             {
//                 sum=sum+arr[i];
//             }
//         return sum/size;

// }

// int square(int n){
//     return pow(n,2);
// }
int main() {

        // int arr[]={2,4,6,8,2};
        // int size= sizeof(arr)/sizeof(arr[0]);
        // cout<<"average of array numbers is : "<<averageofarray(arr,size);
        
            int low,high;
            cout<<"enter a low and a high number : ";
            cin>>low>>high;
            cout<<endl;
            cout<<"list of prime numbers between low and high is : ";
            for (int i = low; i < high ; i++)
            {
                if(isprime(i)){
                    cout<<i<<" , ";
                }
            }
            cout<<endl;
            









        // int a;
        // cout<<"enter number to find square : ";
        // cin>>a;
        // cout<<"square of the number is : "<< square(a)<<endl;
    
    return 0;
}