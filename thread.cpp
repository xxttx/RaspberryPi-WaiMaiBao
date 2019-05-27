#include "thread.h"
#include "choice.h"
#include "key.h"
#include "time.h"
#include "file.h"

using namespace std;

bool Thread::WaitChoice()
{
    Choice choice;
    choice.Get();
    if(choice.Success == true)
    {
        Ser = choice.Ser;
        return true;
    }
    return false;
}

bool Thread::WaitKey()
{
    Key key;
    if(key.GetKey == true)
    {
        NowKey = key.GottenKey;
        return true;
    }
    return false;
}

bool Thread::IsLegal()
{

}

int Thread::Find()
{
    FindKey list(FilePath);
    return list.Find(NowKey);
}

int Thread::Open(int tar)
{

}

bool Thread::Close(int tar)
{


}

void Thread::sendmsg(int type,int boxnum)
{

}

void Thread::Run()
{
    while(WaitChoice() == false);
    Time time;
    bool overtime = false;
    while(WaitKey() == false)
    {
        if(time.Get() - time.st > maxtime)
        {
            overtime = true;
            break;
        }
    }
    if(overtime)
        return;

    if(IsLegal == false)
        return;
    
    File file(FilePath);
    if(Ser == 0) //cun
    {
        int BoxNum = Find();
        if(BoxNum != -1)
            return;
        if(Open(BoxNum) == true)
            sendmsg(0,BoxNum);
        Time time;
        bool overtime = false;
        while(Close(BoxNum) == false)
        {
            if(time.Get() - time.st > maxtime)
            {
                overtime = true;
                break;
            }
        }
        if(overtime)
            sendmsg(-1,BoxNum);
    }
    else  //Qu
    {
        int BoxNum = Find();
        if(BoxNum == -1)
            return;
        if(Open(BoxNum) == true)
            sendmsg(0,BoxNum);
        Time time;
        bool overtime = false;
        while(Close(BoxNum) == false)
        {
            if(time.Get() - time.st > maxtime)
            {
                overtime = true;
                break;
            }
        }
        if(overtime);
    }
    

}
/*
    int Ser;
    string Key;
    bool WaitChoice();
    bool WaitKey();
    bool IsLegal();
    int Find(string tar);
    int Open(int tar);
    bool Close(int tar);
    void sendmsg(int type,int boxnum);
    void Run();
*/