#include <bits/stdc++.h>
using namespace std;

int countWordOccurrences(const string &sentence, const string &word)
{
    int count = 0;
    size_t pos = 0;

    // Iterate through the sentence and find occurrences of the word
    while ((pos = sentence.find(word, pos)) != string::npos)
    {
        count++;
        pos += word.length();
    }

    return count;
}

int main()
{
    string sentence, word;
    getline(cin, sentence); // Read the entire line as the sentence
    cin >> word;

    int occurrences = countWordOccurrences(sentence, word);
    cout << "Number of occurrences of \"" << word << "\": " << occurrences << endl;

    return 0;
}