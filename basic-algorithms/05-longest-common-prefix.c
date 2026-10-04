#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int length = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (j < length &&
               strs[i][j] != '\0' &&
               strs[0][j] == strs[i][j]) {
            j++;
        }

        length = j;

        if (length == 0) {
            return "";
        }
    }

    char* result = malloc((length + 1) * sizeof(char));

    strncpy(result, strs[0], length);
    result[length] = '\0';

    return result;
}