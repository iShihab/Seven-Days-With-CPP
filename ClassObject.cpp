#include <iostream>

using namespace std;

class myClass
{
public:
    int myNum;
    string myString;
};

int main(int argc, char const *argv[])
{
    myClass myObj;
    myObj.myNum = 15;
    myObj.myString = "Shihab";

    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
