#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "This is a test file written in C.";
    
    // Writing data to a file
    file = fopen("testfile.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(file, "%s", data);
    fclose(file);
    
    // Reading data from the file
    file = fopen("testfile.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char ch;
    printf("Data from the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    
    return 0;
}
