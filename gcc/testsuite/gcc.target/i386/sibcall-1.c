/* { dg-do compile { target { { ! x32 }  && nonpic } } } */
/* { dg-options "-O2" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */

extern int (*foo)(int);

int boo (int a)
{
  return (*foo) (a);
}

/* { dg-final { scan-assembler-not "mov" } } */
