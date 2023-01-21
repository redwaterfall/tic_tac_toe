#include "filereader.h"
void filereader(char text[]){
    FILE *file;
    file = fopen(text,"r");
    
    char str[839];
    int i = 0;
    while (fgets(str, 903, file) != NULL) {
        printf("%s", str, strlen(str));
    }
    fclose(file);
}