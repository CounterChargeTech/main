#include <stdio.h>

int main() {
	char sentence[50];
	printf("Enter a sentence: "); gets(sentence);	

	unsigned short counter;
	unsigned short wordCount = 1;
	
	for(counter = 0; sentence[counter] != '\0'; counter++) {
		if(sentence[counter] == ' ')
			wordCount++;
	}
	
	printf("\n%s\n",sentence);
	printf("count: %hu words\n",wordCount);
	return 0;
}
