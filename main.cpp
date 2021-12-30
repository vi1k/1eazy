#include <iostream>

int main() {
    std::cout << "Enter the value:";
    char value [5];
    std::cin >> value;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << " value is:" << value[i] << "\n";
    }
}
