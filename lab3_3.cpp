#include <iostream>
int main()
{
    float sum = 0,x = 2;
    while(x <= 69)
    {
        sum = sum + (1/x);
        x++;
    }
    std::cout << sum;
    return 0;
}