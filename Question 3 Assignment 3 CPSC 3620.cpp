// Hasan Raza
// CPSC 3620 Assignment 3 Question 3
// This Algorithm takes an N >= 1 from user and returns the first N digits from the set {2^n3^m | m and n are non-negative integers}


#include <iostream>
#include <vector>
#include <queue>
#include <set>

void generateSequence(int N) {
   std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Priority queue to get numbers in ascending order because we want to always use the smallest number first for our calculations.
   std::set<int> seen;  // To avoid duplicates
  
   // We will first insert 1 into the priority queue because the first number is: 2^0 * 3^0 = 1
   pq.push(1);
   seen.insert(1);
   std::cout << "First " << N << " numbers in sequence: ";
  
   while (N>0) {
       N--;
      
       int curr = pq.top();    // Gets first/smallest number from priority queue to multiply by 2 and 3
       pq.pop();               // Pops it to prevent doing it again
       std::cout << curr << (N > 0 ? ", " : "");    // Prints the number
      
       // Generates the next possible numbers by multiplying by 2 and 3
       if (seen.find(curr * 2) == seen.end()) // Checks if the number we are currently handling is in the set of already used numbers, meaning we've already had that result
       {
           pq.push(curr * 2);
           seen.insert(curr * 2);
       }
       if (seen.find(curr * 3) == seen.end())
       {
           pq.push(curr * 3);
           seen.insert(curr * 3);
       }
   }
   std::cout << std::endl;
}

int main() {
   int N;
   std::cout << "Enter N: ";
   std::cin >> N;
   generateSequence(N);

   return 0;
}
// Enter N: 15
// First 15 numbers in sequence: 1, 2, 3, 4, 6, 8, 9, 12, 16, 18, 24, 27, 32, 36, 48
