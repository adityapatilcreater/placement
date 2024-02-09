#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

int is_odd_length(char *word) {
    return strlen(word) % 2 != 0;
}

int main() {
    int n;
    char words[MAX_WORDS][MAX_LENGTH];
    char sentence[MAX_LENGTH];
    int max_odd_length = 0;
    char *max_odd_word = NULL;

    printf("Enter the number of words in the tree: ");
    scanf("%d", &n);

    printf("Enter the words in the tree:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    printf("Enter the sentence: ");
    scanf(" %[^\n]s", sentence);

    char *token = strtok(sentence, " ");
    while (token != NULL) {
        if (is_odd_length(token) && strlen(token) > max_odd_length) {
            max_odd_length = strlen(token);
            max_odd_word = token;
        }
        token = strtok(NULL, " ");
    }

    if (max_odd_word != NULL) {
        printf("Raghu's winning word: %s\n", max_odd_word);
    } else {
        printf("Try Again\n");
    }

    return 0;
}