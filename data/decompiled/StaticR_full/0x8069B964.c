/* Function at 0x8069B964, size=444 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_8069B964(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    /* li r4, 2 */ // 0x8069B980
    *(0x10 + r1) = r28; // stw @ 0x8069B984
    r28 = r3;
    r3 = r3 + 0x98; // 0x8069B98C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8069B994
    /* li r4, 0 */ // 0x8069B998
    /* lfs f1, 0(r31) */ // 0x8069B99C
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x8069B9A4
    /* li r4, 3 */ // 0x8069B9A8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8069B9B0
    /* li r4, 0 */ // 0x8069B9B4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0x64 + r28); // lwz @ 0x8069B9BC
    r30 = *(8 + r3); // lwz @ 0x8069B9C0
    if (!=) goto 0x0x8069b9d4;
    /* li r30, 0 */ // 0x8069B9CC
    /* b 0x8069ba28 */ // 0x8069B9D0
    /* lis r31, 0 */ // 0x8069B9D4
    r31 = r31 + 0; // 0x8069B9D8
    if (==) goto 0x0x8069ba24;
    r12 = *(0 + r30); // lwz @ 0x8069B9E0
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x8069B9E8
    /* mtctr r12 */ // 0x8069B9EC
    /* bctrl  */ // 0x8069B9F0
    /* b 0x8069ba0c */ // 0x8069B9F4
    if (!=) goto 0x0x8069ba08;
    /* li r0, 1 */ // 0x8069BA00
    /* b 0x8069ba18 */ // 0x8069BA04
    r3 = *(0 + r3); // lwz @ 0x8069BA08
    if (!=) goto 0x0x8069b9f8;
    /* li r0, 0 */ // 0x8069BA14
    if (==) goto 0x0x8069ba24;
    /* b 0x8069ba28 */ // 0x8069BA20
    /* li r30, 0 */ // 0x8069BA24
    if (!=) goto 0x0x8069ba38;
    /* li r30, 0 */ // 0x8069BA30
    /* b 0x8069ba8c */ // 0x8069BA34
    /* lis r31, 0 */ // 0x8069BA38
    r31 = r31 + 0; // 0x8069BA3C
    if (==) goto 0x0x8069ba88;
    r12 = *(0 + r30); // lwz @ 0x8069BA44
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x8069BA4C
    /* mtctr r12 */ // 0x8069BA50
    /* bctrl  */ // 0x8069BA54
    /* b 0x8069ba70 */ // 0x8069BA58
    if (!=) goto 0x0x8069ba6c;
    /* li r0, 1 */ // 0x8069BA64
    /* b 0x8069ba7c */ // 0x8069BA68
    r3 = *(0 + r3); // lwz @ 0x8069BA6C
    if (!=) goto 0x0x8069ba5c;
    /* li r0, 0 */ // 0x8069BA78
    if (==) goto 0x0x8069ba88;
    /* b 0x8069ba8c */ // 0x8069BA84
    /* li r30, 0 */ // 0x8069BA88
    r31 = *(0x234 + r28); // lwz @ 0x8069BA8C
    r0 = *(0x180 + r30); // lwz @ 0x8069BA90
    if (==) goto 0x0x8069baf0;
    /* mulli r0, r0, 0x240 */ // 0x8069BA9C
    r3 = *(0x188 + r30); // lwz @ 0x8069BAA0
    /* li r4, 0 */ // 0x8069BAA4
    r3 = r3 + r0; // 0x8069BAA8
    FUN_8069B530(r4); // bl 0x8069B530
    /* mulli r0, r31, 0x240 */ // 0x8069BAB0
    r3 = *(0x188 + r30); // lwz @ 0x8069BAB4
    /* li r4, 1 */ // 0x8069BAB8
    r3 = r3 + r0; // 0x8069BABC
    FUN_8069B530(r4); // bl 0x8069B530
    *(0x180 + r30) = r31; // stw @ 0x8069BAC4
    r3 = *(0x174 + r30); // lwz @ 0x8069BAC8
    if (==) goto 0x0x8069baf0;
    r12 = *(0 + r3); // lwz @ 0x8069BAD4
    r4 = r30;
    r5 = r29;
    r6 = *(0x180 + r30); // lwz @ 0x8069BAE0
    r12 = *(8 + r12); // lwz @ 0x8069BAE4
    /* mtctr r12 */ // 0x8069BAE8
    /* bctrl  */ // 0x8069BAEC
    r3 = r28;
    r5 = r29;
    /* li r4, 0xd */ // 0x8069BAF8
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x8069BB00
    r31 = *(0x1c + r1); // lwz @ 0x8069BB04
    r30 = *(0x18 + r1); // lwz @ 0x8069BB08
    r29 = *(0x14 + r1); // lwz @ 0x8069BB0C
    r28 = *(0x10 + r1); // lwz @ 0x8069BB10
    return;
}