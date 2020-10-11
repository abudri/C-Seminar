#include <stdlib.h>
#include <stdio.h>

int main()
{
  char card_name[3]; /* Note this stores only one or two characters, last index is saved for /0, the sentinel character / null character, p 12-13 */
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
  int val = 0;
  // if (card_name[0] == 'K') {
  //   val = 10;
  // }
  // else if (card_name[0] == 'Q') {
  //   val = 10;
  // }
  // else if (card_name[0] == 'J') {
  //   val = 10;
  // }
  // else if (card_name[0] == 'A') {
  //   val = 11;
  // }
  // else {
  //   val = atoi(card_name);
  // }

  switch(card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    default:
      val = atoi(card_name);
  }

  /* Check if the value is 3 to 6 */
  if ((val >= 3) && (val <= 6)) {
    puts("Count has gone up");
  }
  /* Otherwise check if the card was 10, J, Q, or K */
  else if (val == 10){
    puts("Count has gone down");
  }

  printf("The card value is: %i\n", val);
  return 0;
}