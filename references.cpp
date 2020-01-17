#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string food ="Bread";
    string &ref = food;
    cout<<ref<<endl;
    return 0;
}
