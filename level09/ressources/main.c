#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int index;
    int len;
    char *ptr;

    index = 0;
    ptr = strdup(av[1]);
    while(ptr[index])
    {
        ptr[index] -= index;
        index++;
    }
    printf("%s\n",ptr);
    free(ptr);
    ptr = NULL;
    return (0);
}
