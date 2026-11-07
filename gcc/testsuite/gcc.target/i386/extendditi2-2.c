/* { dg-do compile { target int128 } } */
/* { dg-options "-O2" } */
/* { dg-skip-if "-msave-args prologue" { *-*-* } "-msave-args" "" } */

__int128 foo(__int128 a, long long b) {
    a += ((__int128)b) << 70;
    return a;
}

__int128 bar(__int128 a, unsigned long long b) {
    a += ((__int128)b) << 70;
    return a;
}
/* { dg-final { scan-assembler-not "movq" } } */
