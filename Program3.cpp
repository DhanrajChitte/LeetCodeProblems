/*You are given an integer array height of length n. There are n vertical
lines drawn such that the two endpoints of the ith line are (i, 0)
and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the
container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = height.size();
    cout << size << endl;

    // Print all combinations of pole heights
    // For each combination compute area
    int area = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            cout << "i::" << height[i] << " j::" << height[j] << endl;
            int temp = min(height[i], height[j]) * (j - i);
            if (area < temp)
            {
                area = temp;
                cout << "Max Area::" << area << endl;
            }
        }
    }
    return 0;
}