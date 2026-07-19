/* Function at 0x8064D798, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8064D798(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 0 */ // 0x8064D7A0
    /* li r0, -1 */ // 0x8064D7A8
    *(0x1c + r1) = r31; // stw @ 0x8064D7AC
    *(0x18 + r1) = r30; // stw @ 0x8064D7B0
    *(0x14 + r1) = r29; // stw @ 0x8064D7B4
    r29 = r3;
    *(0xa50 + r3) = r0; // stw @ 0x8064D7BC
    r4 = *(0xa4c + r3); // lwz @ 0x8064D7C0
    r12 = *(0x828 + r3); // lwzu @ 0x8064D7C4
    r5 = r4;
    r12 = *(0x1c + r12); // lwz @ 0x8064D7CC
    /* mtctr r12 */ // 0x8064D7D0
    /* bctrl  */ // 0x8064D7D4
    /* li r30, 0 */ // 0x8064D7D8
    /* li r31, 1 */ // 0x8064D7DC
    r3 = *(0xa4c + r29); // lwz @ 0x8064D7E0
    r0 = r31 << r30; // slw
    /* and. r0, r3, r0 */ // 0x8064D7E8
    if (==) goto 0x0x8064d7fc;
    r4 = r30;
    r3 = r29 + 0x1b8; // 0x8064D7F4
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r30 = r30 + 1; // 0x8064D7FC
    if (<) goto 0x0x8064d7e0;
    r0 = *(0x24 + r1); // lwz @ 0x8064D808
    r31 = *(0x1c + r1); // lwz @ 0x8064D80C
    r30 = *(0x18 + r1); // lwz @ 0x8064D810
    r29 = *(0x14 + r1); // lwz @ 0x8064D814
    return;
}