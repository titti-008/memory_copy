#include "memory_copy.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_memory_copy() {
	char src[] = "Hello, World!";
	char dest[50];

	char *result = memory_copy(dest, src, sizeof(src));

	// memory_copyの結果が正しいか確認します
	assert(strcmp(src, dest) == 0);
	assert(result == dest);
}

int main() {
	test_memory_copy();
	printf("All tests passed!\n");

	return 0;
}
