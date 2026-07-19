/* Function at 0x80835894, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80835894(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8083589C
    *(0xc + r1) = r31; // stw @ 0x808358A4
    /* lis r31, 0 */ // 0x808358A8
    r31 = r31 + 0; // 0x808358AC
    *(8 + r1) = r30; // stw @ 0x808358B0
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x808358B8
    /* lfs f2, 0x44(r3) */ // 0x808358BC
    /* lfs f1, 0x48(r3) */ // 0x808358C0
    /* lfs f0, 0x4c(r3) */ // 0x808358C8
    *(0x1ce + r3) = r4; // stb @ 0x808358CC
    /* stfs f2, 0x80(r3) */ // 0x808358D0
    /* stfs f1, 0x84(r3) */ // 0x808358D4
    /* stfs f0, 0x88(r3) */ // 0x808358D8
    if (==) goto 0x0x808358f0;
    FUN_80829F60(); // bl 0x80829F60
    r0 = *(0x7c + r30); // lwz @ 0x808358E4
    r0 = r0 | 0x80; // 0x808358E8
    *(0x7c + r30) = r0; // stw @ 0x808358EC
    r0 = *(0x78 + r30); // lwz @ 0x808358F0
    r3 = r30;
    r0 = r0 | 0x100; // 0x808358F8
    *(0x78 + r30) = r0; // stw @ 0x808358FC
    FUN_8083952C(r3); // bl 0x8083952C
    r0 = *(0x78 + r30); // lwz @ 0x80835904
    r3 = r30;
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 0x4000; // 0x80835910
    r0 = r0 | 0x400; // 0x80835914
    *(0x78 + r30) = r0; // stw @ 0x80835918
    FUN_808355A0(r3); // bl 0x808355A0
    /* lfs f0, 0(r31) */ // 0x80835920
    /* li r0, 0 */ // 0x80835924
    /* stfs f0, 0x318(r30) */ // 0x80835928
    /* lfs f5, 0xc4(r31) */ // 0x8083592C
    /* stfs f0, 0x31c(r30) */ // 0x80835930
}