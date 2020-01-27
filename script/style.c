#include <stdio.h>
#include <string.h>

#define MAX_BRACKET_SIZE 999

/* Because fuck you I'm bringing booleans to c */
#define FALSE 0
#define TRUE 1

/* purpose of this emacs script is similar to the lengthcheck project except
 * this will check for style validity.  If Herman wants to run a script to 
 * check my style then so can I, game on.
 *
 * HEADS UP! THIS ONLY WORKS FOR BRACKETS ('{' and '}') WITH UP TO 999 
 * LINES OF CODE INSIDE! If you need more space, change the macro above
 * called 'MAX_BRACKET_SIZE' to the desired size.
 */

int main() {
  int count = 1, line = 1;
  char c, *p;
  char arr[81];

  
  scanf("%c", &c);

  /* Let's read that shit! */
  while (!feof(stdin)) {
    arr[count] = c;

    /* Because you're too stoopid & slow, I have to count to 80 for you */
    if (count == 81 && c != '\n') {
      printf("ERROR: Line %d is greater than 80 characters!\n", line);
      line ++;
      count = 0;
    }
    
    if (c == '\n') {
      arr[count] = '\0';
      
      /* sum bullshit dw about this */
      p = strchr(arr, '{');
      p++;
      /* nothing to see above, move along */
      
      line++;
      count = 0;
    }
     
    scanf("%c", &c);
    count++;
  }

  arr[0] = ' ';
  printf("%cSCAN COMPLETE\n",arr[0]);
  
  return 0;
}
