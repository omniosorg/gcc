/* { dg-do compile } */
/* { dg-options "-O2 -fomit-frame-pointer -mtune=amdfam10" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */
/* { dg-final { scan-assembler "rep" { target { ! x86_64-*-mingw* } } } } */
/* { dg-final { scan-assembler-not "nop" } } */

void
foo ()
{
}
