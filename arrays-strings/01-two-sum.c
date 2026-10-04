#include <stdlib.h>

typedef struct {
    int value;
    int index;
    int used;
} HashEntry;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;

    int tableSize = numsSize * 2 + 1;

    HashEntry* table = calloc(tableSize, sizeof(HashEntry));

    for (int i = 0; i < numsSize; i++) {

        int complement = target - nums[i];

        // Find complement in hash table
        int hash = ((unsigned int)complement) % tableSize;

        while (table[hash].used) {
            if (table[hash].value == complement) {

                int* result = malloc(2 * sizeof(int));

                result[0] = table[hash].index;
                result[1] = i;

                free(table);
                return result;
            }

            hash = (hash + 1) % tableSize;
        }

        // Insert current number
        hash = ((unsigned int)nums[i]) % tableSize;

        while (table[hash].used) {
            hash = (hash + 1) % tableSize;
        }

        table[hash].value = nums[i];
        table[hash].index = i;
        table[hash].used = 1;
    }

    free(table);
    return NULL;
}