#include "memory_copy.h"
#include <stdio.h>

int main (){
	// コピー元の文字列
	char src[] = "Hello, World!";
	char dest[50];

	char *result = memory_copy(dest, src, sizeof(src));

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("result: %s\n", result);

	return 0;
}

