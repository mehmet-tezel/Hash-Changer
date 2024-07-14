#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argv[1] == NULL || argv[2] == NULL )
    {
        printf("USAGE: ./nullwriter.exe target-exe null-count");
        return -1;
    }

    int nullcount = atoi(argv[2]);

    char buffer[1] = {'\0'};
    FILE* file = NULL;
    
    file = fopen(argv[1], "ab+");
    
    for (int i = 0; i < nullcount; ++i) {
        fwrite(buffer, sizeof(buffer), 1, file);
    }
    
    fclose(file);

    return 0;
}