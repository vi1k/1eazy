#include <iostream>
#include <stdlib.h>
int main()
{
    std::cout << "Enter the value less than 100:";
    int value;
    std::cin >> value;
    if (value<100)
    {
        int f_value = value/10;
        int s_value = value%10;
        std::cout << f_value << " " << s_value;
    }
    else
    {
        exit(1);
    }
}
