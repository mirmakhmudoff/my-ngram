#include <stdio.h>
#include <stdlib.h>

int *put_memory(int argc, char** argv){
    int *num = calloc(128, sizeof(int));
    for(int i = 1; i < argc; i++){
        for(int j = 0; argv[i][j] != '\0'; j++){
            unsigned char letter = argv[i][j];
            num[letter] += 1;
        }
    }
    return num;
}

int main(int argc, char** argv){
    int *num = put_memory(argc, argv);
    for(int i = 0; i < 127; i++){
        if(num[i] > 0){
            printf("%c: %d\n", i, num[i]);
        }
    }
    return 0;
}
