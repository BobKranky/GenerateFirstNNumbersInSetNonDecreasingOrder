Overview

This program generates the first N numbers from the set {2^n * 3^m | m and n are non-negative integers}, where N >= 1. The set is constructed by multiplying powers of 2 and 3, and the program ensures all numbers are unique and sorted in ascending order.

The algorithm uses a priority queue and a set to efficiently compute and output the desired sequence.
Features

Accepts a positive integer N as input.

Generates and displays the first N numbers in ascending order from the mathematical set.
Ensures uniqueness of numbers using a std::set.
Uses a min-heap (std::priority_queue) for efficient number selection in ascending order.

How It Works
Data Structures Used:
    Priority Queue: To maintain the smallest number at the top for processing.
    Set: To avoid duplicate entries.

Algorithm Steps:
    Start with the number 1 (as 2^0 * 3^0 = 1).
    Insert 1 into the priority queue and the set.
    Repeatedly:
        Extract the smallest number from the priority queue.
        Multiply the extracted number by 2 and 3, and add these results back to the priority queue if they haven’t been seen before.
        Continue until N numbers are generated.

Output:
    Prints the first N numbers separated by commas.
