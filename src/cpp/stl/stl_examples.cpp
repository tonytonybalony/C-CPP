#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>

int main() {
    std::cout << "=== STL Examples ===\n" << std::endl;
    
    // Vector example
    std::cout << "1. Vector Example:" << std::endl;
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};
    
    std::cout << "Original: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted:   ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Map example
    std::cout << "\n2. Map Example:" << std::endl;
    std::map<std::string, int> grades;
    grades["Alice"] = 95;
    grades["Bob"] = 87;
    grades["Charlie"] = 92;
    
    std::cout << "Student Grades:" << std::endl;
    for (const auto& pair : grades) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    // Set example
    std::cout << "\n3. Set Example:" << std::endl;
    std::set<int> unique_numbers = {1, 3, 1, 4, 1, 5, 9, 2, 6, 5};
    
    std::cout << "Unique numbers: ";
    for (int num : unique_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Algorithm example
    std::cout << "\n4. Algorithm Example:" << std::endl;
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    auto even_count = std::count_if(data.begin(), data.end(), 
                                    [](int n) { return n % 2 == 0; });
    
    std::cout << "Even numbers count: " << even_count << std::endl;
    
    auto it = std::find_if(data.begin(), data.end(), 
                          [](int n) { return n > 5; });
    
    if (it != data.end()) {
        std::cout << "First number > 5: " << *it << std::endl;
    }
    
    return 0;
}
