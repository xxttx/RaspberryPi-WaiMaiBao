#include <choice.h>
#include <iostream>
using namespace std;

void Choice::Get()
{
    printf("cin Success = 0 or 1");
    cin >> Success;
    if(Success == true)
    printf("cin Service 0:cun or 1:qu");
    cin >> Ser;
}