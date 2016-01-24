/* { dg-do compile { target { { i?86-*-solaris2.* x86_64-*-solaris2.* } && lp64 } } } */
/* { dg-options "-O2 -msave-args -fshrink-wrap -fno-asynchronous-unwind-tables" } */

/* The early return in each function would normally allow the prologue to be
   sunk past the test of A.  -msave-args must keep it at the function entry,
   even when the optimization level is changed for a single function.  */

extern int g (int, int);

int
f1 (int a, int b, int c)
{
  if (a)
    return g (b, c) + a;
  return a;
}

__attribute__ ((optimize ("O3"))) int
f2 (int a, int b, int c)
{
  if (a)
    return g (b, c) + a;
  return a;
}

/* { dg-final { scan-assembler "\nf1:\n\tpushq\t%rbp\n" } } */
/* { dg-final { scan-assembler "\nf2:\n\tpushq\t%rbp\n" } } */
