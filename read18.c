#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Text.txt","r");
    if (fptr == NULL) {
        printf("Error: Unable to open file.\n");
        return 1; // or some other error code
    }

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character=%c\n", ch);

    fclose(fptr);
    return 0;
}