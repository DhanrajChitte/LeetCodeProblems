/*Given an integer array nums, return an array answer such that answer[i]
is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a
32-bit integer.
You must write an algorithm that runs in O(n) time and without using the
division operation.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Given integer array
    vector<int> nums = {-1, 1, 0, -3, 3};
    int size = nums.size();

    // Create left and right product arrays
    vector<int> leftProduct(size, 1);
    vector<int> rightProduct(size, 1);

    // Calculate left product for each element
    int left = 1;
    for (int i = 1; i < size; i++)
    {
        left *= nums[i - 1];
        leftProduct[i] = left;
    }

    // Calculate right product for each element
    int right = 1;
    for (int i = size - 2; i >= 0; --i)
    {
        right *= nums[i + 1];
        rightProduct[i] = right;
    }

    // Calculate the final answer array
    vector<int> result(size);
    for (int i = 0; i < size; ++i)
    {
        result[i] = leftProduct[i] * rightProduct[i];
    }

    // Print the result
    cout << "Result: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
