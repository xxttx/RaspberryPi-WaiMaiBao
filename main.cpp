#include <iostream>
#include <thread.h>
using namespace std;

int main()
{
    int a;
    while(printf("cin 1 to continue\n"),cin >> a,a == 1)
    {
        Thread mainthread;
        mainthread.Run();
    }
}