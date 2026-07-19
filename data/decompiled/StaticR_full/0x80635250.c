/* Function at 0x80635250, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80635250(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80635260
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80635268
    r12 = *(0x14 + r12); // lwz @ 0x8063526C
    /* mtctr r12 */ // 0x80635270
    /* bctrl  */ // 0x80635274
    /* lis r4, 0 */ // 0x80635278
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80635280
    r0 = *(0x25 + r3); // lbz @ 0x80635284
    if (==) goto 0x0x806352a0;
    r3 = *(0x2c + r30); // lwz @ 0x80635290
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x80635298
    /* b 0x806352ac */ // 0x8063529C
    r3 = *(4 + r30); // lwz @ 0x806352A0
    r3 = *(0x8c + r3); // lwz @ 0x806352A4
    r0 = *(0x68 + r3); // lwz @ 0x806352A8
    r4 = *(0 + r31); // lwz @ 0x806352AC
    /* lis r3, 0 */ // 0x806352B0
    r3 = *(0 + r3); // lwz @ 0x806352B4
    /* clrlwi r5, r0, 0x18 */ // 0x806352B8
    r4 = *(3 + r4); // lbz @ 0x806352BC
    /* extsb r4, r4 */ // 0x806352C0
    FUN_80770F58(r3); // bl 0x80770F58
    *(0x48 + r30) = r3; // stw @ 0x806352C8
    /* lis r4, 0 */ // 0x806352CC
    /* lfs f1, 0(r4) */ // 0x806352D0
    /* li r4, 0 */ // 0x806352D4
    r12 = *(0 + r3); // lwz @ 0x806352D8
    r12 = *(0x10 + r12); // lwz @ 0x806352DC
    /* mtctr r12 */ // 0x806352E0
    /* bctrl  */ // 0x806352E4
    r3 = *(0x48 + r30); // lwz @ 0x806352E8
    /* lis r4, 0 */ // 0x806352EC
    /* lfs f1, 0(r4) */ // 0x806352F0
    r12 = *(0 + r3); // lwz @ 0x806352F4
    r12 = *(0x18 + r12); // lwz @ 0x806352F8
    /* mtctr r12 */ // 0x806352FC
    /* bctrl  */ // 0x80635300
    r3 = *(0x48 + r30); // lwz @ 0x80635304
    /* li r0, 1 */ // 0x80635308
    *(0x16 + r3) = r0; // stb @ 0x8063530C
    r31 = *(0xc + r1); // lwz @ 0x80635310
    r30 = *(8 + r1); // lwz @ 0x80635314
    r0 = *(0x14 + r1); // lwz @ 0x80635318
    return;
}