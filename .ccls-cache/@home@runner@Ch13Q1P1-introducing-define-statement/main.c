#include <stdio.h>

#define YES 1
#define NO 0

// Function to determine if an integer is even
int isEven(int);

int main(void) {

  if (isEven (17) == YES)
    printf ("yes ");
  else
    printf ("no ");

  if (isEven (20) == YES)
    printf ("yes\n");
  else
    printf ("no\n");
  
  return 0;
}

// Define Functions
int isEven (int number) {
  int answer;

  if (number % 2 == 0)
    answer = YES;
  else 
    answer = NO;

  return answer;
}