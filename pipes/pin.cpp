#include <stdio.h>

#define BUFFERSIZE 100

int main (int argc, char *argv[])
{
    char buffer[BUFFERSIZE];
    //fgets(buffer, BUFFERSIZE , stdin);
    scanf("%s", buffer);
    printf("Read: %s", buffer);
    return 0;
}

// $ echo "Testing" | ./pin
// Read: Testing