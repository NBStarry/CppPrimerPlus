#include <iostream>
#include <cstring>
using namespace std;

int main()
{   
    cout << "Enter words (to stop, type the word done):" << endl;
    int count = 0;
    while(true)
    {
        char word[20];
        cin >> word;
        if(!strcmp(word, "done"))
            break;
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;
    
    return 0;
}