/* { dg-do compile } */
/* { dg-options "-O2" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */

int a,b;
void func0(int x) { a=x * (x || b); }
void func1(int x) { a=x * !(x || b); }

/* { dg-final { scan-assembler-not "or" } } */
/* { dg-final { scan-assembler-not "cmove" } } */

