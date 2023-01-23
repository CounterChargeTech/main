/**  Smallest value Program
  *  Author: Daniel Prodigalidad
  *  Email me at sorasky774@gmail.com for questions */

#include <stdio.h>
#include <string.h> 

#define RESULT_SIZE 10

char suffix[2] = "\0"; 
char results[RESULT_SIZE] = "\0";

void getSuffix(int ordinal);
void setResult(int ordinal);

void main() {
	int test, min;
	
	printf("Enter how many values to test: ");
	
	// Creates 'Test value' array with input as index
	scanf("%d", &test); 
	int value[test -1]; //index start at 0 not 1
	
	printf("Enter %d test values one by one: \n",test);
	
	int count;
	for(count = 0; count < test; count++) {

		// Prompt for each value
		getSuffix(count + 1);
		printf("%d%s value: ",count + 1,suffix);
 
		// Save test values to arrays
		scanf("%d",&value[count]);
		
		// Run only once to set default minimum value and set that as a first result
		if(count == 1) { 
			min = value[count - 1];
			setResult(count);
		}
		
		/* Each iteration compare minimum value to the current value. 
  		   Set new minumum to current value if minimum value is larger than it and update result. */
		if(min > value[count]) { 
			min = value[count];
			setResult(count + 1);
		}
	}

	// Output the results
	if(count == 1) printf("The smallest test value is %d. Try to enter 2 or more test values\n",value[0]);
	if(count > 1) printf("The %s value: ' %d ' is the smallest value.\n",results, min);
}

void getSuffix(int ordinal) {
	int j = ordinal % 10;  // get last one digit
	int k = ordinal % 100; // get last two digit
	
	// Ends with one(first) and not eleven(eleventh)
	if(j == 1 && k != 11) {
		suffix[0] = 's'; suffix[1] = 't'; //st 

	// Ends with two(second) and not twelve(twelveth)
	}else if(j == 2 && k != 12) { 
		suffix[0] = 'n'; suffix[1] = 'd'; //nd

	// Ends with three(third) and not thirteen(thirteenth)
	}else if(j == 3 && k != 13) { 
		suffix[0] = 'r'; suffix[1] = 'd'; //rd
	
	// The rest of numbers
	}else { 
		suffix[0] = 't'; suffix[1] = 'h'; //th
	}
}
void setResult(int ordinal) {
	strcpy(results, " ");
	getSuffix(ordinal);
	sprintf(results, "%d%s",ordinal, suffix);
}
