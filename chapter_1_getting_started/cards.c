#include <stdlib.h>
#include <stdio.h>

int main()
{
  char card_name[3]; /* Note this stores only one or two characters, last index is saved for /0, the sentinel character / null character, p 12-13 */
  int count = 0;
  while (card_name[0] != 'X') {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;

    switch(card_name[0]) {
      case 'K':
      case 'Q':
      case 'J':
        val = 10;
        break;
      case 'A':
        val = 11;
        break;
      case 'X':  /* ending game in this case when 'X' selected */
        puts("Exiting the game, thank you for playing.");
        continue; /* goes to check while loop condition since break here doesn't get us out of the loop, just out of the switch statement, while loop will break in this 'X' case */ 
      default:
        val = atoi(card_name);
        if ((val < 1) || (val > 10)) {
          puts("Card value of out of range, I don't understand that value.");
          continue;
        }
    }
    /* Check if the value is 3 to 6 */
    if ((val >= 3) && (val <= 6)) {
      count++;  /* add 1 to the count */
    } else if (val == 10) {  /* Otherwise check if the card was 10, J, Q, or K */
      count--; /* minus 1 from the count */
    }
    printf("The current count is: %i\n", count);
  }
  return 0;
}