#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_SIZE 64

int main(int argc, char* argv[]){
    if (argc  != 2){ printf("Error, 2 arguments\n");}

    char* st1 = (char*) malloc(MAX_STR_SIZE * sizeof(char));
    int st1_sz = 0;

    for (int i = 0; i < MAX_STR_SIZE; i++){
        st1[i] = argv[1][i];
        if(argv[1][i]=='\0'){
            st1_sz = i;
            break;
        }
    }

    //41 - 90 Maiusculas
    //97 - 122 Minusculas 
    for (int i = 0; i < st1_sz; i++){
        if (*(st1+i) >= 97 && *(st1+i) <= 122 )
        {
            *(st1+i) -= 32;
        }
    }
    
    /*char * st2 = (char*) malloc(MAX_STR_SIZE * sizeof(char));
    st2 = "palavra"; */

    st1 = realloc(st1, st1_sz);

    printf("%s -> %i", st1, st1_sz);
    printf("\n");
}

