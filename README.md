# LeetCode Solutions

This repository contains my C++ solutions to various LeetCode problems. It is a personal learning space where I practice problem-solving, improve algorithmic thinking, and sharpen my C++ coding skills.

## Purpose

- Solve LeetCode problems consistently
- Learn efficient algorithms and data structures
- Practice clean, readable C++ implementations
- Track progress across different problem categories

## Included Topics

The solutions in this repository cover a range of common problem patterns, including:

- Arrays
- Two pointers
- Binary search
- Sorting
- Greedy approaches
- Prefix sums / product arrays
- Rotation and search problems
- Mathematical and bit manipulation techniques

## Repository Structure

Each file typically represents one problem and is written as a standalone C++ solution.

Examples include:

- `q136_single_number.cpp` — XOR-based solution for the Single Number problem
- `two_sum_sorted_array.cpp` — two-pointer approach
- `sort_colors.cpp` — sorting with partitioning
- `next_permutation.cpp` — permutation generation
- `max_subarray_sum.cpp` — Kadane's algorithm
- `search_in_rotated_sorted_array.cpp` — binary search on rotated arrays
- `container_most_water.cpp` — greedy two-pointer solution

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/argz-code/LeetCode_Solutions.git
   ```
2. Navigate into the project directory:
   ```bash
   cd LeetCode_Solutions
   ```
3. Compile any solution with g++:
   ```bash
   g++ -std=c++17 -O2 q136_single_number.cpp -o single_number
   ```
4. Run the compiled program:
   ```bash
   ./single_number
   ```

## Example

A sample solution from this repo uses the XOR property to find the non-duplicated number:

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int x : nums) {
            result ^= x;
        }
        return result;
    }
};
```

## Notes

- Solutions are written in C++
- Most files are self-contained and can be compiled independently
- This repository is intended for learning, practice, and personal growth in algorithmic problem solving

## Status

This repository is an ongoing collection of coding practice solutions and will continue to grow as more problems are solved.
