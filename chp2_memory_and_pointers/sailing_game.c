/* Head First C, Chapter 2: Memories and Pointers, page 45 */
#include <stdio.h>

void go_south_east(int *lat, int *lon) { /* latitude and longitude inputs, the * makes them pointer variables, pg 48-49 */
  *lat = *lat - 1; /* decrease the latitude when going south in south east */
  *lon = *lon + 1; /* increase the longitude when going east in south east */
} 

int main() {
  int latitude = 32;
  int longitude = -64;
  go_south_east(&latitude, &longitude);
  printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
  return 0;
}
