/* Function at 0x806DE824, size=128 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_806DE824(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    r7 = r4;
    r8 = r3;
    *(0x14 + r1) = r0; // stw @ 0x806DE834
    /* slwi r0, r5, 2 */ // 0x806DE838
    r5 = r3 + r0; // 0x806DE83C
    r4 = *(0x18 + r5); // lwz @ 0x806DE840
    if (<) goto 0x0x806de88c;
    /* xoris r5, r4, 0x8000 */ // 0x806DE84C
    /* lis r0, 0x4330 */ // 0x806DE850
    *(0xc + r1) = r5; // stw @ 0x806DE854
    /* lis r6, 0 */ // 0x806DE858
    /* lfd f3, 0(r6) */ // 0x806DE85C
    *(8 + r1) = r0; // stw @ 0x806DE860
    /* lfs f1, 8(r3) */ // 0x806DE864
    /* lfd f2, 8(r1) */ // 0x806DE868
    /* lfs f0, 0x14(r3) */ // 0x806DE86C
    r3 = r7;
    /* fsubs f2, f2, f3 */ // 0x806DE874
    r5 = *(0x30 + r8); // lbz @ 0x806DE878
    /* fsubs f1, f2, f1 */ // 0x806DE87C
    /* fmuls f1, f0, f1 */ // 0x806DE880
    FUN_806DD810(r3); // bl 0x806DD810
    /* b 0x806de894 */ // 0x806DE888
    r3 = r7;
    FUN_806DDA00(r3); // bl 0x806DDA00
    r0 = *(0x14 + r1); // lwz @ 0x806DE894
    return;
}