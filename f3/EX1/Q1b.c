#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_SIZE 64

/*int check_equality(char * str1, int sz_str1, char * str2, int sz_str2)
{
    for ()
    {

    }
    return 1;
}*/

int main(int argc, char* argv[])
{
    if (argc  != 3)
    {
        printf("Error, 3 arguments\n");
    }


    char* st1 = (char*) malloc(MAX_STR_SIZE * sizeof(char));
    int st1_sz = 0;

    for (int i = 0; i < MAX_STR_SIZE; i++){
        st1[i] = argv[1][i];
        if(argv[1][i]=='\0'){
            st1_sz = i;
            break;
        }
    }

    char* st2 = (char*) malloc(MAX_STR_SIZE * sizeof(char));
    int st2_sz = 0;
 
    for (int i = 0; i < MAX_STR_SIZE; i++)
    {
        st2[i] = argv[2][i];
        if(argv[2][i]=='\0')
        {
            st2_sz = i;
            break;
        }
    }

    if (st1_sz > st2_sz)
    {
        printf("False\n");
        return 0;
    }

    //a primeira está dentro da segunda //boolean
    for (int y = 0; y < st2_sz; y++)
    {
        for (int x = 0; x < st1_sz; x++)
        {   
            if (*(st2 + y) == *(st1 + x) ) // primeira letra igual
            {
                int counter = 0;
                while ( *(st1 + y + counter) != '\0' && *(st2 + y + counter) != '\0' )
                {
                    if ( *(st1 + y + counter) != *(st2 + y + counter) )
                    {
                        break;
                    }
                    counter++;
                }

                if (*(st1 + y + counter) == '\0' )
                {
                    printf("True\n");
                    return 0;
                }
            }
        }
    }

    /*
    printf("%s -> %i", st1, st1_sz);
    printf("\n");
    printf("%s -> %i", st2, st2_sz);
    printf("\n");
    */
   printf("False\n");
   return 0;
}