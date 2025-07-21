#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "This is C++ example file 5" << std::endl;
    
    // Example: STL algorithms
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6};
    
    std::sort(numbers.begin(), numbers.end());
    
    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}