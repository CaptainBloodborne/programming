#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string word;
    string encoded_word;
    string s1("aehiouwy");
    string s2("bfpv");
    string s3("cgjkqsxz");
    string s4("dt");
    string s5("mn");

    encoded_word.reserve(20);

    getline(cin, word);

    encoded_word.push_back(word[0]);

    for (size_t i(1); i != word.size(); ++i)
    {
        char c(word[i]);

        if (s1.find(c) != string::npos) continue;

        if (s2.find(c) != string::npos) encoded_word.push_back('1');

        if (s3.find(c) != string::npos) encoded_word.push_back('2');

        if (s4.find(c) != string::npos) encoded_word.push_back('3');

        if (c == 'l') encoded_word.push_back('4');

        if (s5.find(c) != string::npos) encoded_word.push_back('5');

        if (c == 'r') encoded_word.push_back('6');

    }

    for (size_t i(1); i != encoded_word.size(); ++i)
    {
        char c(encoded_word[i]);
        while(i != (word.size() - 1) && c == encoded_word[i + 1])
        {
            encoded_word.erase(i+1, i+2);
        }
    }

    if (encoded_word.size() > 4)
    {
        cout << encoded_word.substr(0, 4) << endl;
        return 0;
    }

    while(encoded_word.size() < 4) encoded_word.push_back('0');

    cout << encoded_word << endl;

    return 0;
}
