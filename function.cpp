#include<iostream>

using namespace std;
// Function declaration
void myFunction();
void printThis();
int main(int argc, char const *argv[])
{
    printThis();
    myFunction();
    return 0;
}

void printThis(){
    cout<<"I am called to print ;) "<<endl;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}