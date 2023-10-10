#include <iostream>
#include <string>
using namespace std;

int main()
{   
    cout << "Enter words (to stop, type the word done):" << endl;
    int count = 0;
    while(true)
    {
        string word;
        cin >> word;
        if(word == "done")
            break;
        count++;
    }

    cout << "You entered a total of " << count << " words." << endl;
    
    return 0;
}