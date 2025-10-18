#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */


string gameOfThrones(string s)
{
    array<int, 26> freq{};

    for (char c : s)
        freq[c - 'a']++;

    int oddCount = 0;
    for (int count : freq)
        if (count % 2 != 0)
            oddCount++;

    return (oddCount <= 1) ? "YES" : "NO";
}

string gameOfThrones(string s)
{
    unordered_map<char, int> freq;

    for (char c : s)
        freq[c]++;

    int oddCount = 0;
    for (const auto &p : freq)
        if (p.second % 2 != 0)
            oddCount++;

    return (oddCount <= 1) ? "YES" : "NO";
}

string gameOfThrones(string s)
{
    std::string result {"YES"};

    std::map<char, int> mp;
    
    for (char c : s)
    {
        auto ret = mp.insert({ c, 1 });
        if (!ret.second)
        {
            ret.first->second++;
        }        
    }

    int count = 0;
    for (const auto &item : mp)
    {
        int x = item.second;
        if ( x % 2 != 0)
        {
            count++;
            
            if (count > 1)
            {
                result = "NO";
                break;
            }
        }
    }

    return result; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
