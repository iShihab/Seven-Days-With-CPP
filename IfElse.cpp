#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"You have entered an even number";
    }
    else
    {
        cout<<"You have entered an odd number";
    }
    
    return 0;
}
