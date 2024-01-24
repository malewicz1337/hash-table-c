#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "hash_table.h"

void test_hash_table()
{
    printf("Starting hash table tests...\n");

    ht_hash_table *ht = ht_new();

    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key2", "value2");
    ht_insert(ht, "key3", "value3");

    printf("Insert passed...\n");

    char *value;
    value = ht_search(ht, "key1");
    assert(value && strcmp(value, "value1") == 0);

    value = ht_search(ht, "key2");
    assert(value && strcmp(value, "value2") == 0);

    value = ht_search(ht, "key3");
    assert(value && strcmp(value, "value3") == 0);

    printf("Search passed...\n");

    // Test for non-existent key
    value = ht_search(ht, "nonexistent");
    assert(value == NULL);

    printf("Non-existent search passed...\n");

    ht_delete(ht, "key1");
    value = ht_search(ht, "key1");
    assert(value == NULL);

    ht_delete(ht, "key2");
    value = ht_search(ht, "key2");
    assert(value == NULL);

    printf("Delete passed...\n");

    // Delete non-existent element
    // Should not cause an error btw
    ht_delete(ht, "nonexistent"); 

    printf("Non-existent delete passed...\n");

    ht_del_hash_table(ht);

    printf("All hash table tests passed!\n");
}

int main()
{
    test_hash_table();
    return 0;
}