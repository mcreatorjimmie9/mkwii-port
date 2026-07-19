/* Function at 0x805D0178, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D0178(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r31, r4, 2 */ // 0x805D0188
    *(0x18 + r1) = r30; // stw @ 0x805D018C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805D0194
    r29 = r3;
    r6 = *(4 + r3); // lwz @ 0x805D019C
    /* lwzx r3, r6, r31 */ // 0x805D01A0
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805d01b8;
    /* li r3, 0 */ // 0x805D01B0
    /* b 0x805d01e4 */ // 0x805D01B4
    r3 = *(4 + r29); // lwz @ 0x805D01B8
    /* lwzx r3, r3, r31 */ // 0x805D01BC
    r0 = *(8 + r3); // lhz @ 0x805D01C0
    if (>=) goto 0x0x805d01e0;
    /* mulli r0, r30, 0x24 */ // 0x805D01CC
    r3 = *(4 + r3); // lwz @ 0x805D01D0
    r3 = r3 + r0; // 0x805D01D4
    r3 = *(8 + r3); // lwz @ 0x805D01D8
    /* b 0x805d01e4 */ // 0x805D01DC
    /* li r3, 0 */ // 0x805D01E0
    r0 = *(0x24 + r1); // lwz @ 0x805D01E4
    r31 = *(0x1c + r1); // lwz @ 0x805D01E8
    r30 = *(0x18 + r1); // lwz @ 0x805D01EC
    r29 = *(0x14 + r1); // lwz @ 0x805D01F0
    return;
}