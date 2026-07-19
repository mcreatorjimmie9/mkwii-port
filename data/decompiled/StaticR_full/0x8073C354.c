/* Function at 0x8073C354, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8073C354(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8073C35C
    *(0xc + r1) = r31; // stw @ 0x8073C364
    *(8 + r1) = r30; // stw @ 0x8073C368
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x8073C370
    r0 = *(0x10 + r4); // lbz @ 0x8073C374
    if (!=) goto 0x0x8073c410;
    r0 = *(4 + r3); // lbz @ 0x8073C380
    if (!=) goto 0x0x8073c410;
    r0 = *(0x12b + r3); // lbz @ 0x8073C38C
    if (==) goto 0x0x8073c39c;
    /* b 0x8073c410 */ // 0x8073C398
    r31 = *(0x25c + r3); // lwz @ 0x8073C39C
    if (==) goto 0x0x8073c3e0;
    r12 = *(0 + r31); // lwz @ 0x8073C3A8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073C3B0
    /* mtctr r12 */ // 0x8073C3B4
    /* bctrl  */ // 0x8073C3B8
    r0 = *(0xb0 + r30); // lbz @ 0x8073C3BC
    if (==) goto 0x0x8073c3e0;
    r12 = *(0 + r31); // lwz @ 0x8073C3C8
    r3 = r31;
    r4 = r30 + 0x72c; // 0x8073C3D0
    r12 = *(0x70 + r12); // lwz @ 0x8073C3D4
    /* mtctr r12 */ // 0x8073C3D8
    /* bctrl  */ // 0x8073C3DC
    r3 = *(0x118 + r30); // lwz @ 0x8073C3E0
    FUN_8061E010(r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8073C3E8
    /* lis r4, 0 */ // 0x8073C3EC
    /* lfs f1, 0(r4) */ // 0x8073C3F0
    /* li r4, 0x350 */ // 0x8073C3F4
    r12 = *(0xe4 + r12); // lwz @ 0x8073C3F8
    /* mtctr r12 */ // 0x8073C3FC
    /* bctrl  */ // 0x8073C400
    r3 = *(0x118 + r30); // lwz @ 0x8073C404
    /* li r4, 0x1a */ // 0x8073C408
    FUN_8061E02C(r4); // bl 0x8061E02C
    r0 = *(0x14 + r1); // lwz @ 0x8073C410
    r31 = *(0xc + r1); // lwz @ 0x8073C414
    r30 = *(8 + r1); // lwz @ 0x8073C418
    return;
}