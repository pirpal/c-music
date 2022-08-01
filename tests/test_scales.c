#include <criterion/criterion.h>
#include "../src/c_music.h"

const NoteName C_NOTES[7] = { _C, _D, _E, _F, _G, _A, _B };
const NoteName D_NOTES[7] = { _D, _E, _F, _G, _A, _B, _C };
const NoteName E_NOTES[7] = { _E, _F, _G, _A, _B, _C, _D };
const NoteName F_NOTES[7] = { _F, _G, _A, _B, _C, _D, _E };
const NoteName G_NOTES[7] = { _G, _A, _B, _C, _D, _E, _F };
const NoteName A_NOTES[7] = { _A, _B, _C, _D, _E, _F, _G };
const NoteName B_NOTES[7] = { _B, _C, _D, _E, _F, _G, _A };

Test (test_scales, test_notes_names_C)
{
  NoteName *scale_C = notes_names_from(_C);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(
	      scale_C[i] == C_NOTES[i],
	      "expected '%c', found '%c'\n",
	      NOTES_CHARS[scale_C[i]],
	      NOTES_CHARS[C_NOTES[i]]);	      
  }
  free(scale_C);
}


Test (test_scales, test_notes_names_D)
{
  NoteName *scale_D = notes_names_from(_D);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(
       scale_D[i] == D_NOTES[i],
       "expected '%c', found '%c'\n",
       NOTES_CHARS[scale_D[i]],
       NOTES_CHARS[D_NOTES[i]]);
  }
  free(scale_D);
}


Test (test_scales, test_notes_names_E)
{
  NoteName *scale_E = notes_names_from(_E);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(scale_E[i] == E_NOTES[i],
	      "expected '%c', found '%c'\n",
	      NOTES_CHARS[scale_E[i]],
	      NOTES_CHARS[E_NOTES[i]]);
  }
  free(scale_E);
}


Test (test_scales, test_notes_names_F)
{
  NoteName *scale_F = notes_names_from(_F);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(scale_F[i] == F_NOTES[i],
       "expected '%c', found '%c'\n",
       NOTES_CHARS[scale_F[i]],
       NOTES_CHARS[F_NOTES[i]]);
  }
  free(scale_F);
}


Test (test_scales, test_notes_names_G)
{
  NoteName *scale_G = notes_names_from(_G);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(scale_G[i] == G_NOTES[i],
	      "expected '%c', found '%c'\n",
	      NOTES_CHARS[scale_G[i]],
	      NOTES_CHARS[G_NOTES[i]]);
  }
  free(scale_G);
}


Test (test_scales, test_notes_names_A)
{
  NoteName *scale_A = notes_names_from(_A);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(scale_A[i] == A_NOTES[i],
       "expected '%c', found '%c'\n",
       NOTES_CHARS[scale_A[i]],
       NOTES_CHARS[A_NOTES[i]]);
  }
  free(scale_A);
}


Test (test_scales, test_notes_names_B)
{
  NoteName *scale_B = notes_names_from(_B);
  for (uint8_t i = 0; i < 7; ++i) {
    cr_expect(scale_B[i] == B_NOTES[i],
	      "expected '%c', found '%c'\n",
	      NOTES_CHARS[scale_B[i]],
	      NOTES_CHARS[B_NOTES[i]]);
  }
  free(scale_B);
}
