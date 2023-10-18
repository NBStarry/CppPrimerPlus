#include <new>
#include <cstring>
#include <iostream>

struct chaff
{
    char dross[20];
    int slag;
};

const int BUFSIZE = 2 * sizeof(chaff);
// 法1
// char bufferChaff[BUFSIZE];

// int main()
// {
//     chaff *pc = new (bufferChaff) chaff; // 记得包含头文件new，且不需要也无法delete
//     std::strcpy(pc->dross, "dross1");
//     pc->slag = 1;
//     pc++;
//     std::strcpy(pc->dross, "dross2");
//     pc->slag = 2;

//     for(int i = 0; i < 2; i++)
//     {
//         std::cout << "dross: " << pc->dross << std::endl;
//         std::cout << "slag: " << pc->slag << std::endl;
//         pc--;
//     }

//     return 0;
// }

// 法2
int main()
{
    chaff *pBuffer = new chaff[2];
    chaff *pc = new (pBuffer) chaff;
    std::strcpy(pc->dross, "dross1");
    pc->slag = 1;
    pc++;
    std::strcpy(pc->dross, "dross2");
    pc->slag = 2;

    for(int i = 0; i < 2; i++)
    {
        std::cout << "dross: " << pc->dross << std::endl;
        std::cout << "slag: " << pc->slag << std::endl;
        pc--;
    }

    delete [] pBuffer;
    return 0;
}