// 605.Can Place Flowers
/* You have a long flowerbed in which some of the plots are planted, and
some are not. However, flowers cannot be planted in adjacent plots.Given an
integer array flowerbed containing 0's and 1's, where 0 means empty and 1
means not empty, and an integer n, return true if n new flowers can be
planted in the flowerbed without violating the no-adjacent-flowers rule
and false otherwise.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flowered[] = {1, 0, 0, 0, 1};
    int n = 1;
    int size = sizeof(flowered) / sizeof(flowered[0]);
    cout << size << endl;

    int i;

    for (i = 0; i < size; i++)
    {
        if (flowered[i] == 0)
        {
            bool left = (i == 0) || (flowered[i - 1] == 0);
            bool right = (i == size - 1) || (flowered[i + 1] == 0);

            if (left && right)
            {
                flowered[i] = 1;
                n--;
            }
        }
    }
    if (n <= 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
