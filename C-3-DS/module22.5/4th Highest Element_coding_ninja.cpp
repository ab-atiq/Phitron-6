#include <algorithm>
#include <climits>
#include <vector>

int getFourthLargest(int arr[], int n) {
    if (n < 4) {
        return INT_MIN; // Return minimum value if there are less than 4 elements
    }

    // Sort the array in descending order
    std::sort(arr, arr + n);
    return arr[n-4];
    
    // Extract unique elements
    // std::vector<int> uniqueElements;
    // uniqueElements.push_back(arr[0]);
    // for (int i = 1; i < n; ++i) {
    //     if (arr[i] != arr[i - 1]) {
    //         uniqueElements.push_back(arr[i]);
    //     }
    // }

    // // Check if there are at least 4 unique elements
    // if (uniqueElements.size() >= 4) {
    //     return uniqueElements[3]; // Return the fourth largest element
    // }
    // else if(uniqueElements.size() >= 3){
    //     return uniqueElements[2];
    // }
    // else if(uniqueElements.size() >= 2){
    //     return uniqueElements[1];
    // }
    // else if(uniqueElements.size() >= 1){
    //     return uniqueElements[1];
    // }
    // else {
    //     return INT_MIN; // Return minimum value if there are less than 4 unique elements
    // }
}