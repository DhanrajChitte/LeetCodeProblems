/*Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will
 be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces
between two words. The returned string should only have a single space
 separating the words. Do not include any extra spaces.*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string s = "a good       example";

    // create a stringstream to process the input string
    stringstream ss(s);

    // create a vector to store the individual words
    vector<string> temp;

    // Extract words from the input string and store them in the vector
    string word;
    while (ss >> word)
    {
        temp.push_back(word);
    }

    string ans;
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        ans += temp[i] + " ";
    }
    cout << ans << endl;

    return 0;
}