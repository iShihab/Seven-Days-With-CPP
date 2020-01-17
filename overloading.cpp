#include <iostream>

using namespace std;
int IntNumber(int x, int y)
{
    return x + y;
}

double IntNumber(double x, double y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    int recv1 = IntNumber(12, 14);
    double recv2 = IntNumber(12.4, 14.6);
    cout << recv1 << endl;
    cout << recv2 << endl;
    return 0;
}
