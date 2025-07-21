#include <iostream>
#include <thread>
#include <chrono>

void printNumbers() {
    for (int i = 1; i <= 5; i++) {
        std::cout << "Thread: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    std::cout << "This is C++ example file 10" << std::endl;
    
    // Example: Basic threading
    std::thread t1(printNumbers);
    
    for (int i = 1; i <= 5; i++) {
        std::cout << "Main: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    t1.join();
    
    return 0;
}