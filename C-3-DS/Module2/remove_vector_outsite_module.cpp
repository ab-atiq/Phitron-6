#include <vector>
#include <algorithm> // For std::remove
#include <iostream>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 2, 5, 2, 6};
    int value_to_remove = 2;

    // Use std::remove to move elements NOT equal to value_to_remove to the beginning
    // It returns an iterator to the new end of the "valid" range
    auto new_end = std::remove(vec.begin(), vec.end(), value_to_remove);

    // Use std::vector::erase to remove the elements from the new_end to the original end
    vec.erase(new_end, vec.end());

    // Print the modified vector
    for (int x : vec)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl; // Output: 1 3 4 5 6

    return 0;
}