# C/C++ Programming Practice Repository

A comprehensive collection of C and C++ programming examples, algorithms, data structures, and coding practice problems. This repository serves as a learning resource and reference for fundamental programming concepts in both C and C++.

### **Executable Storage**
All compiled executables (`.exe` files) are automatically stored in the `bin/` directory to keep your project organized and have your folder stay clean.


## 🚀 Project Structure

```
C,C++/
├── src/
│   ├── c/                          # C Programming
│   │   ├── algorithms/
│   │   │   ├── searching/
│   │   │   │   └── binary_search.c
│   │   │   └── sorting/
│   │   │       └── quicksort.c
│   │   ├── data_structures/
│   │   │   ├── array.c
│   │   │   ├── linked_list.c
│   │   │   ├── queue.c
│   │   │   └── stack.c
│   │   ├── examples/              # Basic C examples
│   │   │   ├── hello_world.c
│   │   │   ├── cexample1.c - cexample10.c
│   │   │   └── ...
│   │   ├── leetcode/              # LeetCode solutions in C
│   │   │   ├── easy/
│   │   │   │   └── two_sum.c
│   │   │   ├── medium/
│   │   │   │   └── add_two_numbers.c
│   │   │   └── hard/
│   │   │       └── median_sorted_arrays.c
│   │   ├── projects/              # Practical C projects
│   │   │   ├── guessing_game.c
│   │   │   └── task_manager.c
│   │   └── utils/
│   │       └── common.h
│   ├── cpp/                       # C++ Programming
│   │   ├── examples/              # Basic C++ examples
│   │   │   ├── cppexample1.cpp - cppexample10.cpp
│   │   │   └── ...
│   │   ├── modern_cpp/            # Modern C++ features
│   │   │   └── modern_features.cpp
│   │   ├── oop/                   # Object-Oriented Programming
│   │   │   └── person_student.cpp
│   │   └── stl/                   # Standard Template Library
│   │       └── stl_examples.cpp
│   └── leetcode/                  # Additional LeetCode solutions
│       └── medium/
│           └── add_two_numbers.c
├── tests/
│   └── test_runner.c              # Test suite
├── bin/                           # Compiled executables
├── .gitignore                     # Git ignore rules
├── CMakeLists.txt                 # CMake build configuration
└── README.md                      # This file
```

## 🛠️ Build & Run

### Using VS Code (Recommended)
**Quick Run Options:**
- **▶️ Run Button** - Click the run button in the top-right corner of VS Code
- **Ctrl+F5** - Run without debugging
- **F5** - Run with debugging

### Manual Compilation
```bash
# For C files
gcc -Wall -Wextra filename.c -o bin/filename.exe

# For C++ files
g++ -std=c++17 filename.cpp -o bin/filename.exe

# Run the executable
./bin/filename.exe
```

### Using CMake
```bash
mkdir build && cd build
cmake ..
make
```

## 📚 What's Included

### **C Programming**
- **Algorithms:** Binary Search, QuickSort
- **Data Structures:** Arrays, Linked Lists, Stacks, Queues
- **Examples:** My C Lab environment
- **Projects:** Guessing Game, Task Manager
- **LeetCode:** Easy, Medium, and Hard problems

### **C++ Programming**
- **Examples:** My C++ Lab environment
- **OOP:** Object-oriented programming examples
- **Modern C++:** C++17 features and best practices
- **STL:** Standard Template Library usage examples

##  Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-algorithm`)
3. Commit your changes (`git commit -m 'Add new sorting algorithm'`)
4. Push to the branch (`git push origin feature/new-algorithm`)
5. Open a Pull Request
