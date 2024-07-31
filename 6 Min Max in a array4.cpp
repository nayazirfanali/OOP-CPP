#include <iostream>
#include <vector>
#include <limits>

std::pair<int, int> findMinMax(const std::vector<int> &arr) {
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    for (int num : arr) {
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    return {min, max};
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    auto [min, max] = findMinMax(arr);
    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;
    return 0;
}
