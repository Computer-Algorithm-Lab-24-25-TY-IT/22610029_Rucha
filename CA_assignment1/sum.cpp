#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "Numbers from 1 to " << n << " are:" << std::endl;

    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
        sum += i;
    }
    
    std::cout << std::endl;
    std::cout << "Sum of numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}

