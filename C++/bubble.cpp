#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For std::accumulate

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 6};

    // --- Sorting Algorithm ---
    // Sorts the vector in ascending order.
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 1 2 5 6 9

    // --- Searching Algorithm (Binary Search) ---
    // Efficiently checks if an element exists in a sorted range.
    bool found = std::binary_search(numbers.begin(), numbers.end(), 5);
    std::cout << "Is 5 in the vector? " << (found ? "Yes" : "No") << std::endl; // Output: Yes

    // --- Finding an Element ---
    // Finds the first occurrence of a value and returns an iterator to it.
    auto it = std::find(numbers.begin(), numbers.end(), 6);
    if (it != numbers.end()) {
        std::cout << "Found 6 at index: " << std::distance(numbers.begin(), it) << std::endl; // Output: Found 6 at index: 3
    }

    // --- Maximum and Minimum Elements ---
    // Finds the smallest and largest elements in a range.
    auto min_it = std::min_element(numbers.begin(), numbers.end());
    auto max_it = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element: " << *min_it << std::endl; // Output: 1
    std::cout << "Maximum element: " << *max_it << std::endl; // Output: 9

    // --- Element Manipulation (Reverse) ---
    // Reverses the order of elements in a range.
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reversed vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 9 6 5 2 1

    // --- Numeric Algorithm (Accumulate) ---
    // Calculates the sum of elements in a range.
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of elements: " << sum << std::endl; // Output: 23

    return 0;
}
