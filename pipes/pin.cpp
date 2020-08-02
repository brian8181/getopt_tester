#include <stdio.h>
#include <iostream>

#define BUFFERSIZE 100

int main (int argc, char *argv[])
{
    char buffer[BUFFERSIZE];
    //fgets(buffer, BUFFERSIZE , stdin);
    scanf("%s", buffer);
    printf("Read: %s", buffer);
    return 0;
}

// typedef struct list
// {
//     std::string val;
//     list* pnext;
// } 

// void Foo(list* pl)
// {
//     std::cout << (*pl).val << std::endl;
//     pl = (*pl).pnext;

//     while((*pl).pnext != 0)
//     {
//         std::cout << (*pl).val << std::endl;
//         pl = (*pl).pnext;

//     }while((*pl).pnext != 0)
// }

// $ echo "Testing" | ./pin abc
// Read: Testing