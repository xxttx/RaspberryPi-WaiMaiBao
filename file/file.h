#include <string>
#include <record>

using namespace std;

class File
{
public:
    string Path;
    int tot;
    vector<Record> rec;

    void Init();

    File(string path);

}