#include <stdio.h>

int main() {
	char word[25];
	unsigned short counter;
	unsigned short letterCount = 0;
	
	printf("Enter a string: "); gets(word);
	
	for(counter = 0; word[counter] != '\0'; counter++) {
		letterCount++;
	}
	printf("\n%s\n", word);
	printf("count: %hu letter\n",letterCount);
	return 0;
}
