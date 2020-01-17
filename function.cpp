#include<iostream>

using namespace std;

void printThis();
int main(int argc, char const *argv[])
{
    printThis();
    return 0;
}

void printThis(){
    cout<<"I am called to print ;) "<<endl;
}