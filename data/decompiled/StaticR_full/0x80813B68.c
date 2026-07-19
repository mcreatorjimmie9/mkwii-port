/* Function at 0x80813B68, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80813B68(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80813B70
    *(0x14 + r1) = r0; // stw @ 0x80813B74
    /* mulli r0, r4, 0xf0 */ // 0x80813B78
    *(0xc + r1) = r31; // stw @ 0x80813B7C
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x80813B84
    /* li r5, 0 */ // 0x80813B88
    r3 = r3 + r0; // 0x80813B8C
    r4 = *(0x2e + r3); // lbz @ 0x80813B90
    /* extsb. r0, r4 */ // 0x80813B94
    if (<) goto 0x0x80813bb0;
    /* lis r3, 0 */ // 0x80813B9C
    /* mulli r0, r4, 0xec */ // 0x80813BA0
    r3 = *(0 + r3); // lwz @ 0x80813BA4
    r3 = r3 + r0; // 0x80813BA8
    r5 = r3 + 4; // 0x80813BAC
    if (==) goto 0x0x80813c3c;
    r3 = *(4 + r5); // lwz @ 0x80813BB8
    if (==) goto 0x0x80813bd8;
    r12 = *(0 + r3); // lwz @ 0x80813BC4
    r12 = *(0x10 + r12); // lwz @ 0x80813BC8
    /* mtctr r12 */ // 0x80813BCC
    /* bctrl  */ // 0x80813BD0
    /* b 0x80813bdc */ // 0x80813BD4
    /* li r3, -1 */ // 0x80813BD8
    if (==) goto 0x0x80813be8;
    /* b 0x80813c3c */ // 0x80813BE4
    /* lis r3, 0 */ // 0x80813BE8
    r3 = *(0 + r3); // lwz @ 0x80813BEC
    r0 = *(0xb70 + r3); // lwz @ 0x80813BF0
    if (==) goto 0x0x80813c3c;
    if (>=) goto 0x0x80813c18;
    if (==) goto 0x0x80813c34;
    if (>=) goto 0x0x80813c28;
    if (>=) goto 0x0x80813c28;
    /* b 0x80813c3c */ // 0x80813C14
    if (>=) goto 0x0x80813c3c;
    if (>=) goto 0x0x80813c34;
    /* li r0, 1 */ // 0x80813C28
    *(0x30 + r31) = r0; // stb @ 0x80813C2C
    /* b 0x80813c3c */ // 0x80813C30
    /* li r0, 1 */ // 0x80813C34
    *(0x31 + r31) = r0; // stb @ 0x80813C38
    r0 = *(0x14 + r1); // lwz @ 0x80813C3C
    r31 = *(0xc + r1); // lwz @ 0x80813C40
    return;
}