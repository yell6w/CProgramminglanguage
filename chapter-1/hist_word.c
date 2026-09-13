#include <stdio.h>
#include <string.h>

#define MAXLENGTH 100

char* read_word(char *word) {
    int c, i = 0;
    int truncated = 0;

    while ((c = getchar()) != EOF && c != ' ' && c != '\n' && c != '\t') {
        if (i < MAXLENGTH - 1) {
            word[i++] = c;
        } else {
            truncated = 1;
        }
    }

    if (c == EOF && i == 0) {
        return NULL;
    }

    word[i] = '\0';

    if (truncated) {
        printf("Word too long, truncated to %d characters\n", MAXLENGTH - 1);
    }

    return word;
}

void plot_hist_vertical(int *length, int max_len) {
    int max_count = 0;
    for (int i = 0; i <= max_len; i++) {
        if (length[i] > max_count) {
            max_count = length[i];
        }
    }
    for (int level = max_count; level > 0; level--) {
        for (int i = 0; i <= max_len; i++) {
            if (length[i] >= level) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i <= max_len; i++) {
        printf("%2d ", i);
    }
    printf("\n");
}

void plot_hist_horizontal(int *length, int max_len) {
    for (int i = 0; i <= max_len; i++) {
        if (length[i] > 0) {
            printf("%3d: ", i);
            for (int j = 0; j < length[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }
}

int main() {
    char word[MAXLENGTH];
    int length[MAXLENGTH + 1] = {0};

    while (read_word(word) != NULL) {
        int len = strlen(word);
        if (len <= MAXLENGTH) {
            length[len]++;
        }
    }

    int max_len = 0;
    for (int i = MAXLENGTH; i >= 0; i--) {
        if (length[i] > 0) {
            max_len = i;
            break;
        }
    }

    printf("Vertical histogram:\n\n");
    plot_hist_vertical(length, max_len);
    printf("\n\nHorizontal histogram:\n\n");
    plot_hist_horizontal(length, max_len);

    return 0;
}