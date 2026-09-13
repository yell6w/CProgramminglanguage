#include <stdio.h>

#define MAXLINE 1000

int main() {
    int idx[MAXLINE]={-1};
    char line1[MAXLINE]="This is a sample line with spaces.";
    char line2[MAXLINE]="spaces";
    int i, j;
    for (i=0; line2[i] != '\0'; i++) {
        for (j=0; line1[j] != '\0' && line1[j] != line2[i]; j++);
        
        if (line1[j] == '\0') {
            idx[i] = -1;
        } else {
            idx[i] = j;
        }
        
    }
    printf("The indices of characters in line2 within line1 are: ");
    i=0;
    while(line2[i] != '\0') {
        printf("%d ", idx[i++]);
    }
    printf("\n");
    return 0;
}