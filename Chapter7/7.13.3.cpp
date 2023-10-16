#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void ShowBox(box);
void SetVolume(box *);

int main()
{
    box b = {"box", 1, 2, 3, 0};
    ShowBox(b);
    SetVolume(&b);
    ShowBox(b);

    return 0;
}

// a
void ShowBox(box b)
{
    cout << "maker: " << b.maker << endl;
    cout << "height: " << b.height << endl;
    cout << "width: " << b.width << endl;
    cout << "length: " << b.length << endl;
    cout << "volume: " << b.volume << endl;
}

// b
void SetVolume(box *b)
{
    b->volume = b->height * b->width * b->length;
}