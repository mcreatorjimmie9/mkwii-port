/* Function at 0x807B5CF8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807B5CF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807B5D08
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B5D10
    r30 = r3;
    if (==) goto 0x0x807b5d64;
    r0 = *(0x10 + r3); // lwz @ 0x807B5D1C
    /* lis r4, 0 */ // 0x807B5D20
    r4 = r4 + 0; // 0x807B5D24
    *(0xc + r3) = r4; // stw @ 0x807B5D28
    if (==) goto 0x0x807b5d4c;
    r3 = r0;
    /* li r4, 1 */ // 0x807B5D38
    r12 = *(0x34 + r3); // lwz @ 0x807B5D3C
    r12 = *(8 + r12); // lwz @ 0x807B5D40
    /* mtctr r12 */ // 0x807B5D44
    /* bctrl  */ // 0x807B5D48
    /* li r0, 0 */ // 0x807B5D50
    *(0x10 + r30) = r0; // stw @ 0x807B5D54
    if (<=) goto 0x0x807b5d64;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807B5D68
    r30 = *(8 + r1); // lwz @ 0x807B5D6C
    r0 = *(0x14 + r1); // lwz @ 0x807B5D70
    return;
}