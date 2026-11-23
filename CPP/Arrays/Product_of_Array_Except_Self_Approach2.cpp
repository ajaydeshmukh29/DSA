/*
 * Array - Leet Code (238)
 * Array Topic - Product of Array except self (For Index, multiply all array elements except the element at that index)
 * Approach 2 : Brute-force approach
 * TIme Complexity -> O(n^2)
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();
    vector<int> answer(n, 1);

    // Step 1: Prefix product
    int prefix = 1;

    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Suffix product
    int suffix = 1;

    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print result
    for(int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}
