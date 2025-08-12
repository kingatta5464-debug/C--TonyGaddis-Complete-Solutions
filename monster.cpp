#include <iostream>
#include "monster.h"
using namespace std;

monster::monster() {};
void monster::seta(int x)
{
    a = x;
}
int monster::geta()
{
    return a;
}