/* Function at 0x805A00F0, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A00F0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A0100
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A0108
    r30 = r3;
    if (==) goto 0x0x805a016c;
    /* lis r5, 0 */ // 0x805A0114
    /* lis r4, 0 */ // 0x805A0118
    r5 = r5 + 0; // 0x805A011C
    *(0 + r3) = r5; // stw @ 0x805A0120
    r3 = *(0 + r4); // lwz @ 0x805A0124
    if (==) goto 0x0x805a0150;
    /* li r0, 0 */ // 0x805A0130
    *(0 + r4) = r0; // stw @ 0x805A0134
    if (==) goto 0x0x805a0150;
    r12 = *(0x10 + r3); // lwz @ 0x805A013C
    /* li r4, 1 */ // 0x805A0140
    r12 = *(8 + r12); // lwz @ 0x805A0144
    /* mtctr r12 */ // 0x805A0148
    /* bctrl  */ // 0x805A014C
    r3 = r30;
    /* li r4, 0 */ // 0x805A0154
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805a016c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805A0170
    r30 = *(8 + r1); // lwz @ 0x805A0174
}