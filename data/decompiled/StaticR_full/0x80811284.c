/* Function at 0x80811284, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80811284(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80811294
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8081129C
    r30 = r3;
    if (==) goto 0x0x808112b0;
    if (!=) goto 0x0x808112f4;
    r0 = *(0xb0 + r3); // lbz @ 0x808112B0
    if (!=) goto 0x0x808112f4;
    /* li r0, 1 */ // 0x808112BC
    *(0xb0 + r3) = r0; // stb @ 0x808112C0
    /* lis r3, 0 */ // 0x808112C4
    /* lis r4, 0 */ // 0x808112C8
    /* lfs f1, 0(r3) */ // 0x808112CC
    r4 = r4 + 0; // 0x808112D4
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x808112DC
    /* stfs f0, 0xb4(r30) */ // 0x808112E0
    /* lfs f0, 0xc(r1) */ // 0x808112E4
    /* stfs f0, 0xb8(r30) */ // 0x808112E8
    /* lfs f0, 0x10(r1) */ // 0x808112EC
    /* stfs f0, 0xbc(r30) */ // 0x808112F0
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808112F8
    r30 = *(0x18 + r1); // lwz @ 0x808112FC
    r0 = *(0x24 + r1); // lwz @ 0x80811300
    return;
}