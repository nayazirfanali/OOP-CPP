#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {0, 1, 2, 3, 5, 6, 7};
    int missing = 0;
    while (missing < arr.size() && arr[missing] == missing) {
        missing++;
    }
    std::cout << "Smallest missing element: " << missing << std::endl;

    return 0;
}
