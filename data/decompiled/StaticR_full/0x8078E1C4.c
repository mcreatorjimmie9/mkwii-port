/* Function at 0x8078E1C4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078E1C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078E1D8
    r30 = r3;
    r0 = *(0x9f + r3); // lbz @ 0x8078E1E0
    if (!=) goto 0x0x8078e21c;
    if (!=) goto 0x0x8078e20c;
    r12 = *(0 + r31); // lwz @ 0x8078E1F4
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x8078E1FC
    /* mtctr r12 */ // 0x8078E200
    /* bctrl  */ // 0x8078E204
    r5 = r3;
    r4 = r31;
    r3 = r30 + 0x94; // 0x8078E210
    /* clrlwi r5, r5, 0x10 */ // 0x8078E214
    FUN_8078FE10(r5, r4, r3); // bl 0x8078FE10
    r0 = *(0x14 + r1); // lwz @ 0x8078E21C
    r31 = *(0xc + r1); // lwz @ 0x8078E220
    r30 = *(8 + r1); // lwz @ 0x8078E224
    return;
}