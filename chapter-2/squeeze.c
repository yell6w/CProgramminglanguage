#include <stdio.h>

#define MAXLINE 1000

enum boolean {NO, YES};

int main() {
    // char line1[MAXLINE], line2[MAXLINE];
    char line1[] = "This is a sample line with spaces.";
    char line2[] = "line", new_line[MAXLINE];
    int i, j, k=0, len1=0, len2=0, skip=NO;
    while(line1[len1++] != '\0');
    while(line2[len2++] != '\0');
    if (len1 < len2) {
        printf("The first line is shorter than the second line.\n");
        return 0;
    }
    for (i=0; line1[i] != '\0' && i < len1-len2; i++) {
        
        skip = YES;
        for (j=0; line2[j] != '\0'; j++) {
            if (line1[i+j] != line2[j]) {
                skip = NO;
                break;
            }
        }
        
        if (skip==NO) {
            new_line[k++] = line1[i];
        } else {
            i += len2 - 1; // Skip the length of line2
            skip = NO;
        }
    }

    while (line1[i] != '\0') {
        new_line[k++] = line1[i++];
    }
    new_line[k] = '\0'; // Null-terminate the new line
    printf("The new line after removing '%s' from '%s' is: '%s'\n", line2, line1, new_line);
    return 0;
}
