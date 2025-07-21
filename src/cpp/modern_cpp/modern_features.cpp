#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <functional>

// Modern C++ features demonstration

// 1. Auto keyword and range-based for loops
void auto_and_range_examples() {
    std::cout << "=== Auto and Range-based For Loops ===" << std::endl;
    
    std::vector<std::string> words = {"Hello", "Modern", "C++", "World"};
    
    // Auto keyword
    auto count = words.size();
    auto first_word = words[0];
    
    std::cout << "Vector size: " << count << std::endl;
    std::cout << "First word: " << first_word << std::endl;
    
    // Range-based for loop
    std::cout << "Words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}

// 2. Smart pointers
void smart_pointer_examples() {
    std::cout << "\n=== Smart Pointers ===" << std::endl;
    
    // unique_ptr
    auto unique_num = std::make_unique<int>(42);
    std::cout << "Unique pointer value: " << *unique_num << std::endl;
    
    // shared_ptr
    auto shared_str = std::make_shared<std::string>("Shared resource");
    auto another_shared = shared_str; // shared ownership
    
    std::cout << "Shared pointer value: " << *shared_str << std::endl;
    std::cout << "Reference count: " << shared_str.use_count() << std::endl;
}

// 3. Lambda expressions
void lambda_examples() {
    std::cout << "\n=== Lambda Expressions ===" << std::endl;
    
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Simple lambda
    auto is_even = [](int n) { return n % 2 == 0; };
    
    // Lambda with capture
    int threshold = 5;
    auto is_greater_than_threshold = [threshold](int n) { return n > threshold; };
    
    std::cout << "Even numbers: ";
    for (int num : numbers) {
        if (is_even(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    
    std::cout << "Numbers > " << threshold << ": ";
    for (int num : numbers) {
        if (is_greater_than_threshold(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}

// 4. Function objects and std::function
void function_examples() {
    std::cout << "\n=== Function Objects ===" << std::endl;
    
    // std::function can hold lambdas, function pointers, or functors
    std::function<int(int, int)> add = [](int a, int b) { return a + b; };
    std::function<int(int, int)> multiply = [](int a, int b) { return a * b; };
    
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
}

// 5. Move semantics example
class Resource {
private:
    std::string name;
    std::vector<int> data;

public:
    Resource(const std::string& n) : name(n), data(1000, 42) {
        std::cout << "Resource '" << name << "' created" << std::endl;
    }
    
    // Move constructor
    Resource(Resource&& other) noexcept : name(std::move(other.name)), data(std::move(other.data)) {
        std::cout << "Resource '" << name << "' moved" << std::endl;
    }
    
    // Move assignment
    Resource& operator=(Resource&& other) noexcept {
        if (this != &other) {
            name = std::move(other.name);
            data = std::move(other.data);
            std::cout << "Resource '" << name << "' move-assigned" << std::endl;
        }
        return *this;
    }
    
    const std::string& getName() const { return name; }
};

void move_semantics_example() {
    std::cout << "\n=== Move Semantics ===" << std::endl;
    
    Resource res1("Original");
    Resource res2 = std::move(res1); // Move constructor
    
    std::cout << "Moved resource name: " << res2.getName() << std::endl;
}

int main() {
    std::cout << "=== Modern C++ Features Demo ===\n" << std::endl;
    
    auto_and_range_examples();
    smart_pointer_examples();
    lambda_examples();
    function_examples();
    move_semantics_example();
    
    return 0;
}
