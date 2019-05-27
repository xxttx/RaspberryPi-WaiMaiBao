#include <key.h>
#include <string>
#include <keyimage.h>
#include <keynum.h>

using namespace std;

bool Key::GetKey()
{
    
}

AllKey::AllKey(string path)
{
    Path = path;
    Init();
}

void AllKey::Init()
{
    
}

int AllKey::BinaryFind(int l,int r,string tar)
{

}

int AllKey::Find(string tar)
{
    return BinaryFind(0,tot-1,tar);
}
