using namespace std;
#include <iostream>
#include <conio.h>
#include <string.h>
#include <vector>

int singleNumber(const std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        bool found = false;
        for (int j = 0; j < nums.size(); ++j) {
            if (i != j && nums[i] == nums[j]) {
                found = true;
                break; // No need to check further if we found a duplicate
            }
        }
        if (!found) {
            return nums[i]; // Return the single number
        }
    }
    return -1; // This line should never be reached if input is valid
}

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumber(nums);
    std::cout << "The single number is: " << result << std::endl;
    return 0;
}