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


string gameOfThrones2(string s)
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
