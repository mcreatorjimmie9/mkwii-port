/* Function at 0x80668C54, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80668C54(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 0 */ // 0x80668C5C
    /* li r4, 1 */ // 0x80668C60
    *(0x14 + r1) = r0; // stw @ 0x80668C64
    r0 = r4 << r6; // slw
    *(0xc + r1) = r31; // stw @ 0x80668C6C
    *(8 + r1) = r30; // stw @ 0x80668C70
    r7 = *(4 + r3); // lwz @ 0x80668C74
    r5 = *(0xd + r3); // lbz @ 0x80668C78
    /* and. r0, r7, r0 */ // 0x80668C7C
    if (==) goto 0x0x80668c88;
    /* li r6, 1 */ // 0x80668C84
    /* li r0, 1 */ // 0x80668C88
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x80668C90
    if (==) goto 0x0x80668c9c;
    r6 = r6 + 1; // 0x80668C98
    /* li r0, 2 */ // 0x80668C9C
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x80668CA4
    if (==) goto 0x0x80668cb0;
    r6 = r6 + 1; // 0x80668CAC
    /* li r0, 3 */ // 0x80668CB0
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x80668CB8
    if (==) goto 0x0x80668cc4;
    r6 = r6 + 1; // 0x80668CC0
    /* li r0, 4 */ // 0x80668CC4
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x80668CCC
    if (==) goto 0x0x80668cd8;
    r6 = r6 + 1; // 0x80668CD4
    if (<=) goto 0x0x80668ce4;
    /* li r5, 1 */ // 0x80668CE0
    /* li r0, 0 */ // 0x80668CE4
    *(0xc + r3) = r0; // stb @ 0x80668CE8
    r31 = r3 + 0x40; // 0x80668CEC
    /* li r30, 0 */ // 0x80668CF0
    *(0xd + r3) = r5; // stb @ 0x80668CF4
    r12 = *(0 + r31); // lwz @ 0x80668CF8
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80668D00
    /* mtctr r12 */ // 0x80668D04
    /* bctrl  */ // 0x80668D08
    r30 = r30 + 1; // 0x80668D0C
    r31 = r31 + 0x34; // 0x80668D10
    if (<) goto 0x0x80668cf8;
    r0 = *(0x14 + r1); // lwz @ 0x80668D1C
    r31 = *(0xc + r1); // lwz @ 0x80668D20
    r30 = *(8 + r1); // lwz @ 0x80668D24
    return;
}