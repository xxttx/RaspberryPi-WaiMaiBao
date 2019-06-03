#include "string"
#include "file/record.h"

using namespace std;

class Thread
{
public:
    int Ser;
    string NowKey;
    File nowfile;

    bool WaitChoice();
    bool WaitKey();
    bool IsLegal();
    Record Find();
    int Open(int tar);
    bool Close(int tar);
    void sendmsg(int type);
    void Run();
}