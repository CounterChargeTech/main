#include <stdio.h>
#include <string.h>

#define clrscr() printf("\e[1;1H\e[2J")	// For generic regex clear screen

typedef struct {
	char txtInput[30];
	unsigned short txtLen;
} txtBox;

// Funtion declaration/prototype;
void createTBox(txtBox *obj, char text[]);
void hashLine(unsigned short length);
void borderSpace(unsigned short area);

int main(int argc, char *argv[]) {
	txtBox b1;
	txtBox b2;	

	printf("\nEnter text for b1: "); gets(b1.txtInput);
	createTBox(&b1, b1.txtInput);
	printf("\n%s - Len : %hu",b1.txtInput, b1.txtLen);
	
	printf("\nEnter text for b2: "); gets(b2.txtInput);
	createTBox(&b2, b2.txtInput);
	printf("\n%s - Len : %hu",b2.txtInput, b2.txtLen);
	return 0;
}

void createTBox(txtBox *obj, char text[]) {
	obj->txtLen = strlen(text);
	
	hashLine(obj->txtLen + 6);
	borderSpace(obj->txtLen + 4);
	printf("#  %s  #", text);
	borderSpace(obj->txtLen + 4);
	hashLine(obj->txtLen + 6);
}

void hashLine(unsigned short length) {
	unsigned short append;
	
	for(append = 0; append < length; append++) {
		printf("#");
	}
}

void borderSpace(unsigned short area) {
	unsigned short append;
	
	printf("\n#");
	for(append = 0; append < area; append++) {
		printf(" ");
	}
		printf("#\n");
}
