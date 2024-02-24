/* Problem:C++ program to take any two strings and make a 3rd string
 from those two strings such that take a first chracter of fisrt string
 then second chracter of second string and so on ......e.g. string1=abc &
 string2=pqr then string3=apbqcr*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare the two strings
    string s1 = "Dhanraj";
    string s2 = "Chitte";

    // Intialize the ans string for storing the answer of those strings
    string ans;

    // Calculate the size of the both strings by using size or the length methods
    int size1 = s1.length();
    int size2 = s2.size();

    cout << size1 << endl;
    cout << size2 << endl;

    int i = 0;
    int j = 0;
    while (i < size1 || j < size2)
    {
        if (i < size1)
        {
            ans += s1[i];
            i++;
        }
        if (j < size2)
        {
            ans += s2[j];
            j++;
        }
    }

    cout << ans << endl;
    return 0;
}
