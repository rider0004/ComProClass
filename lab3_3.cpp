#include <iostream>
using namespace std;
int main()
{
    float sum = 0,x = 1;
    while(x <= 69)
    {
        sum = sum + (1/x);
        x++;
    }
    cout << sum;
}