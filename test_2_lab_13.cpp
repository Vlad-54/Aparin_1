#include <iostream>
#include <vector>
#include <algorithm>

int findGCD(std::vector<int>& nums) {
    int result = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        result = std::__gcd(result, nums[i]);
    }
    return result;
}

int main() {
    int n = 5;
    std::vector<int> plates(n);
    plates = { 50,50,30,88,50 };

    int minTime = findGCD(plates);
    std::cout << "Мінімальна кількість хвилин:" << minTime << std::endl;

    return 0;
}