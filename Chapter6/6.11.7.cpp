#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    cout << "Enter words (q to quit): ";
    string word;
    int beginWithVowelsCount = 0, beginWithConsonantsCount = 0, otherCount = 0;
    while(cin >> word && word != "q")
    {
        if(isalpha(word[0]))
        {
            switch (tolower(word[0]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                beginWithVowelsCount++;
                break;
            
            default:
                beginWithConsonantsCount++;
                break;
            }
        }
        else
        {
            otherCount++;
        }
    }
    cout << beginWithVowelsCount << " words begin with vowels" << endl;
    cout << beginWithConsonantsCount << " words begin with consonants" << endl;
    cout << otherCount << " others" << endl;
    
    return 0;
}