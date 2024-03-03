#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";

    int ss = s.size();
    int ts = t.size();
    cout << ss << endl;
    cout << ts << endl;

    unordered_map<char, int> m1;
    unordered_map<char, int> m2;

    if (ss != ts)
    {
        cout << "false" << endl;
        return 0;
    }

    // Count frequencies in the first string (s)
    for (int i = 0; i < ss; i++)
    {
        m1[s[i]]++;
    }

    // Count frequencies in the second string (t)
    for (const auto &a : t)
    {
        m2[a]++;
    }

    // Compare the frequency maps
    for (const auto &e : m1)
    {
        if (m2.find(e.first) != m2.end())
        {
            if (m2[e.first] != e.second)
            {
                cout << "false" << endl;
                return 0;
            }
        }
        else
        {
            cout << "false" << endl;
            return 0;
        }
    }

    // If the loops complete, the strings are anagrams
    cout << "true" << endl;
    return 0;
}
