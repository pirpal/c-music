#ifndef MANAGE_ERR_H_
#define MANAGE_ERR_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>


extern void
err_exit(const uint8_t err_code, ...)
{
  // Variadic function
  // USAGE: err_exit(1, "main", "Failed to create SDLWindow", SDL_GetError(), NULL);
  fprintf(stderr, "[ERR]:\n");
  va_list vargs;
  char *cur_varg;
  va_start(vargs, err_code);
  while ((cur_varg = va_arg(vargs, char*)) != NULL) {
    fprintf(stderr, " > %s\n", cur_varg);
  }
  va_end(vargs);
  exit(err_code);
}


#endif // MANAGE_ERR_H_
