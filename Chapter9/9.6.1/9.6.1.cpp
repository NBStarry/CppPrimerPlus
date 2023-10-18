#include "golf.h"

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf members[5];
    int i = 0;
    while (i < 5 && setgolf(members[i]))
        i++;
    
    for (int j = 0; j < i; j++)
        showgolf(members[j]);
    
    handicap(ann, 10);
    showgolf(ann);

    return 0;
}