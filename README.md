# C Coding Practice Project

This project contains various implementations of algorithms and data structures in C, specifically designed for coding practice on platforms like LeetCode. The project is organized into several directories based on the type of problems and data structures.

## Project Structure

```
C,C++
├── src
│   ├── leetcode
│   │   ├── easy
│   │   │   └── two_sum.c
│   │   ├── medium
│   │   │   └── add_two_numbers.c
│   │   └── hard
│   │       └── median_sorted_arrays.c
│   ├── data_structures
│   │   ├── stack.c
│   │   ├── queue.c
│   │   └── linked_list.c
│   ├── algorithms
│   │   ├── sorting
│   │   │   └── quicksort.c
│   │   └── searching
│   │       └── binary_search.c
│   └── utils
│       └── common.h
├── tests
│   └── test_runner.c
├── Makefile
├── CMakeLists.txt
└── README.md
```

## Setup Instructions

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Use the provided `Makefile` or `CMakeLists.txt` to build the project.

## Usage

- Each implementation can be tested individually by running the corresponding source file.
- The `test_runner.c` file serves as a test suite to validate the functionality of the implemented algorithms and data structures.

## Implemented Algorithms and Data Structures

- **LeetCode Problems:**
  - Two Sum (Easy)
  - Add Two Numbers (Medium)
  - Median of Two Sorted Arrays (Hard)

- **Data Structures:**
  - Stack
  - Queue
  - Singly Linked List

- **Algorithms:**
  - Quick Sort
  - Binary Search

## Contribution

Feel free to contribute by adding new algorithms, data structures, or improving existing implementations. Please ensure to follow the project's coding standards and include appropriate test cases.