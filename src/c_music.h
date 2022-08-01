#ifndef C_MUSIC_H_
#define C_MUSIC_H_

#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

//--------------------------------------------------------------
#define NOTE_MAXCHAR 3
#define NOTES_CHARS "cdefgab"


typedef enum Duration {
  _1, _2, _4, _8, _16, _32, _64 
} Duration;


typedef enum NoteName {
  _C, _D, _E, _F, _G, _A, _B
} NoteName;


typedef enum Alteration {
  NATURAL, FLAT, SHARP
} Alteration;


typedef enum Mode {
  MAJOR, MINOR
} Mode;


extern const uint8_t  DURATIONS[7];
extern const NoteName NOTES_NAMES[7];
extern const NoteName FLAT_CYCLE[7];
extern const NoteName SHARP_CYCLE[7];

//--------------------------------------------------------------
typedef struct KeySignature {
  Alteration *alts;
  NoteName major_note;
  NoteName minor_note;
} KeySignature;


//--------------------------------------------------------------
 typedef struct Note {
  NoteName name;
  Alteration alt;
  Duration duration;
  bool pointed;
} Note;

//--------------------------------------------------------------
// Functions prototypes
NoteName* notes_names_from(const NoteName root);


#endif // C_MUSIC_H_
