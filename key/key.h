#include <string>
#include "record"
#include <vector>
using namespace std;

class Key
{
public:
    int Type;//0 for num,1 for image
    string GottenKey;
    bool GetKey();
};

