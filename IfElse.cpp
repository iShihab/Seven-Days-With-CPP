#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number to check even or odd! : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("You have entered an even number");

    }
    else
    {
        printf("You have entered an odd number");
    }
    
    return 0;
}
