#include<iostream>
#include "monster.h"
using namespace std;

int main(){
    monster m;
    m.seta(5);
    int a=m.geta();
    cout<<a<<endl;
    return 0;
}