// https://dmoj.ca/problem/anothersorting

#include <iostream>
#include <algorithm>

int unitDigit(int num) {
    return num % 10;
}

//sort in descending order using last digit first
//if two digits have the same last digit, the one with
//the largest first digit comes first.

//simple comparison to put into sort
bool aToB(int a, int b) {
    int unitDigitA = unitDigit(a);
    int unitDigitB = unitDigit(b);
    
    if (unitDigitA < unitDigitB) {
        return true;
    }
    if (unitDigitA > unitDigitB) {
        return false;
    }
    
    return a > b;
}

int main() {
    int SIZE;
    std::cin >> SIZE;
    
    int* numbers = new int[SIZE];
    
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> numbers[i];
    }
    
    std::sort(numbers, numbers + SIZE, aToB);
    
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    // Deallocate
    delete[] numbers;
    
    return 0;
}
