/* Function at 0x807B3890, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B3890(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807B38A0
    /* lfs f1, 0(r31) */ // 0x807B38A4
    *(8 + r1) = r30; // stw @ 0x807B38A8
    r30 = r3;
    r4 = *(4 + r3); // lwz @ 0x807B38B0
    r3 = *(0x28 + r4); // lwz @ 0x807B38B4
    /* li r4, 0 */ // 0x807B38B8
    FUN_805E558C(r4); // bl 0x805E558C
    r3 = *(8 + r30); // lwz @ 0x807B38C0
    /* li r4, 0 */ // 0x807B38C4
    /* lfs f1, 0(r31) */ // 0x807B38C8
    r3 = *(0x28 + r3); // lwz @ 0x807B38CC
    FUN_805E558C(r4); // bl 0x805E558C
    r0 = *(0x14 + r1); // lwz @ 0x807B38D4
    r31 = *(0xc + r1); // lwz @ 0x807B38D8
    r30 = *(8 + r1); // lwz @ 0x807B38DC
    return;
}