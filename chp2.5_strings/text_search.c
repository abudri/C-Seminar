#include <stdio.h>
#include <string.h>

char tracks[][80] = { 
  "I left my heart in Harvard Med School", 
  "Newark, Newark - a wonderful town", 
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

void find_track(char search_for[]) {
  int i;
  for (i = 0; i < 5; i++) {
    if (strstr(tracks[i], search_for)) 
      printf("Track %i: '%s'\n", i, tracks[i]);
  }
}

int main() {
  char search_for[80];
  printf("Search for: ");
  fgets(search_for, 80, stdin);
  search_for[strlen(search_for) - 1] = '\0'; /* 1st edition of book is missing this line */
  find_track(search_for); /* call find_track() function and display any matching tracks */
  return 0;
}
