/*Given an array nums of size n, return the majority element.
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that
the majority element always exists in the array. */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Declare Array
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << size << endl;

    // Sort Array Elements
    sort(nums, nums + size);

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << "  " << endl;
    }

    // Find Majority Elements in the Array
    cout << "Majority Elements in the Array: " << nums[size / 2] << endl;
    return 0;
}