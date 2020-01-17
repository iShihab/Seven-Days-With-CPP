#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string myString1= "Sajedur";
    string myString2= "Rahman";
    cout<<myString1+myString2<<endl;

    // String length
    cout<<myString1.length()<<endl;

    // Access string
    cout<<myString2[2]<<endl;

    //Replace string character
    myString2[0]='B'; //note single quote
    cout<<myString2<<endl;

    // User input string
    string fullName;
    cout<<"Type fullname: ";
    getline(cin,fullName);
    cout<<"Your full name is : "<<fullName<<endl;

    return 0;


}

