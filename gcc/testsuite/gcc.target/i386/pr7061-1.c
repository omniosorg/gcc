/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */
float re(float _Complex a) { return __real__ a; }
/* { dg-final { scan-assembler-not "mov" } } */
