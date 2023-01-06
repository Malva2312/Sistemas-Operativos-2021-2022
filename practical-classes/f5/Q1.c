#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ged_pid()
{
}
int main(int argc, char *argv[])
{
    printf("0\n");
    printf("\n\n");
    /* fork a child process */
    fork();
    printf("1\n");
    printf("\n\n");
    /* fork another child process */
    fork();
    printf("2\n");
    printf("\n\n");
    /* and fork another */
    fork();
    printf("3\n");
    printf("\n\n");
    return EXIT_SUCCESS;
}