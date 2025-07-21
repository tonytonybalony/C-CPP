#include <iostream>
#include <vector>

int main() {
    std::cout << "This is C++ example file 2" << std::endl;
    
    // Example: Vector container
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}