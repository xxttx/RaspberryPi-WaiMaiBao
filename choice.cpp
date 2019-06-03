#include <choice.h>
#include <iostream>
using namespace std;

void Choice::Get()
{
    printf("cin is there choice input? = 0 or 1");
    cin >> Success;
    if(Success == true)
    printf("cin service choice 0:cun or 1:qu");
    cin >> Ser;
}