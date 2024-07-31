#include <iostream>
#include <vector>

int findSmallestMissing(const std::vector<int>& arr) {
    int expected = 0; // Initialize the expected number
    
    // Iterate through the array
    for (int num : arr) {
        if (num != expected) {
            return expected; // Return the first missing number found
        }
        ++expected; // Move to the next expected number
    }
    
    return expected; // If no missing number found, return the next expected number
}

int main() {
    std::vector<std::vector<int>> testCases = {
        {0, 1, 2, 3, 5, 6, 7},       // Sample Input
        {0, 1, 2, 3, 4, 5, 6, 7},    // Test Case 1
        {0, 11, 2, 3, 5, 6, 7},      // Test Case 2
        {0, 0, 2, 3, 4, 5, 6, 7},    // Test Case 3
        {0, 1, 2, 3, 4, 5, 6, 7},    // Test Case 4
        {0}                         // Test Case 5
    };
    
    for (const auto& arr : testCases) {
        int missing = findSmallestMissing(arr);
        std::cout << "Smallest missing element in {";
        for (size_t i = 0; i < arr.size(); ++i) {
            std::cout << arr[i];
            if (i != arr.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "} is: " << missing << std::endl;
    }

    return 0;
}
