#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char ch;
    
    // Open the first file
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.\n");
        return 1;
    }
    
    // Open the second file
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.\n");
        return 1;
    }
    
    // Create the third file to store the merged data
    mergedFile = fopen("mergedfile.txt", "w");
    if (mergedFile == NULL) {
        printf("Error opening merged file.\n");
        return 1;
    }
    
    // Copy content of the first file to the merged file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }
    
    // Copy content of the second file to the merged file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }
    
    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);
    
    printf("Files merged successfully into 'mergedfile.txt'.\n");
    
    return 0;
}
