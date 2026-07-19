/* Function at 0x8089C90C, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8089C90C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8089C91C
    *(8 + r1) = r30; // stw @ 0x8089C920
    r30 = r3;
    /* b 0x8089c954 */ // 0x8089C928
    r3 = *(0x10 + r30); // lwz @ 0x8089C92C
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x8089C934
    if (==) goto 0x0x8089c950;
    r12 = *(0 + r3); // lwz @ 0x8089C940
    r12 = *(0x14 + r12); // lwz @ 0x8089C944
    /* mtctr r12 */ // 0x8089C948
    /* bctrl  */ // 0x8089C94C
    r31 = r31 + 1; // 0x8089C950
    r0 = *(0xc + r30); // lhz @ 0x8089C954
    /* clrlwi r3, r31, 0x10 */ // 0x8089C958
    if (<) goto 0x0x8089c92c;
    /* li r31, 0 */ // 0x8089C964
    /* b 0x8089c994 */ // 0x8089C968
    r3 = *(0x10 + r30); // lwz @ 0x8089C96C
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x8089C974
    if (==) goto 0x0x8089c990;
    r12 = *(0 + r3); // lwz @ 0x8089C980
    r12 = *(0x1c + r12); // lwz @ 0x8089C984
    /* mtctr r12 */ // 0x8089C988
    /* bctrl  */ // 0x8089C98C
    r31 = r31 + 1; // 0x8089C990
    r0 = *(0xc + r30); // lhz @ 0x8089C994
    /* clrlwi r3, r31, 0x10 */ // 0x8089C998
    if (<) goto 0x0x8089c96c;
    r0 = *(0x14 + r1); // lwz @ 0x8089C9A4
    r31 = *(0xc + r1); // lwz @ 0x8089C9A8
    r30 = *(8 + r1); // lwz @ 0x8089C9AC
    return;
}