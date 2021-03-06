#include "aho_corasick.hpp"
#include <bits/stdc++.h>

int main()
{
    vector<string> dictionary = {"file1", "12file", "156agent", "file192", "hello", "dog", "hell", "cat", "a", "hel", "help", "helps", "helping", "sand", "sar", "sauce", "side", "sign", "silly", "sinus", "singh", "sit", "soap", "soda", "solo", "son"};
    AhoCorasick<string, char> search = AhoCorasick<string, char>(dictionary);

    while (1)
    {
        cout << "Enter word: ";
        string text;
        cin >> text;
        vector<string> result = search.AutoComplete(text);
        cout << "Auto complete suggestions:" << endl;
        for (string r : result)
        {
            cout << r << endl;
        }
        cout << endl;
    }
    return 0;
}
