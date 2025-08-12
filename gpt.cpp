// #include <iostream>
// #include <string>
// using namespace std;

// string reversestring(string str){

//     int n=str.length();             //mustafa 7
//     for (int i=0;i<n/2;i++){                //
//             swap(str[i],str[n-i-1]);
//     }
//     return str ;
// }

// int main(){
//     string name;
//     cout<<"write string : ";
//     cin>>name;
//     cout<<endl;
//     cout<<"reverse string is :"<<reversestring(name)<<endl;






//     return 0;
// }













// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

// int main() {
//     int num1 = 56, num2 = 98;
//     cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
//     return 0;
// }





#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main() {
    int base = 2, exp = 3;
    cout << base << " raised to the power of " << exp << " is " << power(base, exp) << endl;
    return 0;
}
