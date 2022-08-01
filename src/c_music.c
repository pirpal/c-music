#include "c_music.h"
#define MANAGE_ERR_IMPLEMENTATION
#include "manage_err.h"

const uint8_t DURATIONS[7] = { 1, 2, 4, 8, 16, 32, 64 };

const NoteName NOTES_NAMES[7] = { _C, _D, _E, _F, _G, _A, _B };

const NoteName FLAT_CYCLE[7] = { _B, _E, _A, _D, _G, _C, _F };

const NoteName SHARP_CYCLE[7] = { _F, _C, _G, _D, _A, _E, _B };


NoteName*
notes_names_from(const NoteName root)
{
  // Return an array of 7 NoteName, cycling from ROOT NoteName
  NoteName *names = malloc(7 * sizeof(NoteName));
  if (names == NULL)
    err_exit(1, "notes_names_from", "Failed to malloc NoteName*", NULL);

  uint8_t start = root;
  for (uint8_t i = 0; i < 7; ++i) {
    if (start >= 7) {
      start = 0;
    }
    names[i] = NOTES_NAMES[start];
    start++;
  }
  return names;
}
