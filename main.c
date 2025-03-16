#include <stdio.h>

void main() {
	char srt[] = "hello";
	int count = 0;
	while (srt[count] != NULL) {
		count++;
	}
	printf("%d", count);
}