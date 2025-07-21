#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "This is C++ example file 6" << std::endl;
    
    // Example: Lambda functions
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n * 2 << " ";
    });
    std::cout << std::endl;
    
    return 0;
}