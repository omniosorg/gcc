/* { dg-do compile } */
/* { dg-options "-O -mavx -fno-omit-frame-pointer" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */

#include "pr81769-1a.c"

/* Verify no dynamic realignment is performed.  */
/* { dg-final { scan-assembler-not "and\[^\n\r]*sp" } } */
