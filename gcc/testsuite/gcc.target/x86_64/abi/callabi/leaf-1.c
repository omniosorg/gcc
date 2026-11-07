/* { dg-do compile } */
/* { dg-options "-O2 -mabi=sysv" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */

__attribute__ ((ms_abi))
int foo (void)
{
  return 0;
}

/* { dg-final { scan-assembler-not "%rsp" } } */

