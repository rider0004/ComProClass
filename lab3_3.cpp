#include <iostream>
int main()
{
    float sum = 0,x = 6;
    while(x <= 19)
    {
        sum = sum + (1/x);
        x++;
    }
    std::cout << sum;
    return 0;
}