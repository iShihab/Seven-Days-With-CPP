#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string food ="Pizza";
    string* ptr = &food;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}
