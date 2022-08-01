#include <stdlib.h>
#include <stdio.h>

#include "c_music.h"


int main (void)
{
  printf("C Music\n");


  printf("Notes from B:\n");
  NoteName *scale = notes_names_from(_B);
  for (uint8_t i = 0; i < 7; ++i) {
    printf("%c ", NOTES_CHARS[scale[i]]);
  }
  printf("\n");
  
  
  free(scale);

  printf("\n");
  return EXIT_SUCCESS;
}
