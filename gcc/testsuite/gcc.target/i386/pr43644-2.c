/* { dg-do compile { target int128 } } */
/* { dg-options "-O2" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */

unsigned __int128 foo(unsigned __int128 x, unsigned long long y)
{
  return x+y;
}

/* { dg-final { scan-assembler-times "movq" 2 } } */
