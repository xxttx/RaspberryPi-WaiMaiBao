#include <string>

using namespace std;

class Thread
{
public:
    int Ser;
    string NowKey;
    string FilePath;

    bool WaitChoice();
    bool WaitKey();
    bool IsLegal();
    int Find();
    int Open(int tar);
    bool Close(int tar);
    void sendmsg(int type);
    void Run();
}