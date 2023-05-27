#include <string.h>
#include <stdio.h>


int main () {
	char str1[] = "sample string";
	char str2[] = "before string";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	memcpy(str2, str1, 2);


	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return 0;
}
