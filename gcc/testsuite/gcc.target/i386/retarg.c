/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2" } */
/* { dg-skip-if "" { *-*-* } "-msave-args" "" } */

#include <string.h>

void *p (void *x, void *y, int z)
{
  memcpy (x, y, z);
  return x;
}

/* { dg-final { scan-assembler-not "%\[re\]di" } } */
