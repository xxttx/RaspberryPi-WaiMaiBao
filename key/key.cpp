#include <key.h>
#include <string>
#include <keyimage.h>
#include <keynum.h>

using namespace std;

bool Key::GetKey()
{
    cout << "is there a key ?  0,1";
    int ans;
    cin >> ans;
    if(ans == 1)
    {
        cout << "cin the key";
        cin >> GottenKey;
    }
    return ans;
}

AllKey::AllKey(string path)
{
    Path = path;
    Init();
}

void AllKey::Init()
{
    
}


