#include<iostream>
#include<string.h>

using namespace std;
void myFunction(string name)
{
    cout<<"Your name is : "<<name<<endl;
}

//default parameter
void func(int age=23)
{
    cout<<age<<endl;
}

int main(int argc, char const *argv[])
{

    myFunction("Shihab");
    myFunction("Sajed");
    func();
    func(25);
    return 0;
}

