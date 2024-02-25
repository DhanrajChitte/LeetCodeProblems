/* Given an integer array nums, move all 0's to the end of it while
maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.*/

#include <iostream>
using namespace std;
int main()
{
    // Declare the array
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << size << endl;

    int i = 0, j = 0, NZ = 0;
    for (j = 0; j < size; j++)
    {
        if (nums[j] == 0)
        {
            NZ++;
        }

        else if (nums[j] != 0)
        {
            nums[i] = nums[j];
            i++;
        }
    }

    // Fill the reamaining elements withe zero
    for (i = (size - NZ); i < size; i++)
    {
        nums[i] = 0;
    }

    // Print the modified array
    for (i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
    return 0;
}
