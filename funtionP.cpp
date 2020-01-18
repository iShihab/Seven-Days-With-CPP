#include <iostream>
#include <string.h>

using namespace std;
void myFunction(string name)
{
    cout << "Your name is : " << name << endl;
}

//default parameter
void func(int age = 23)
{
    cout << age << endl;
}

int sub(int x, int y)
{
    int res = x - y;
    return res;
}

int main(int argc, char const *argv[])
{

    // myFunction("Shihab");
    // myFunction("Sajed");
    // func();
    // func(25);
    int a = 10, b = 2;
    int z = sub(7, 4);
    cout << "The first result is : " << z << endl;
    cout << "The second result is : " << sub(a, b) << endl;
    cout << "The third result is : " << sub(30, 22) << endl;

    return 0;
}
