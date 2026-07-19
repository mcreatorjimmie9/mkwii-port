/* Function at 0x807B10AC, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807B10AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807B10BC
    *(0x18 + r1) = r30; // stw @ 0x807B10C0
    *(0x14 + r1) = r29; // stw @ 0x807B10C4
    r29 = r4;
    r30 = *(4 + r3); // lwz @ 0x807B10CC
    r3 = *(0x14 + r30); // lwz @ 0x807B10D0
    r3 = *(0 + r3); // lwz @ 0x807B10D4
    if (==) goto 0x0x807b10ec;
    r5 = r29;
    /* li r4, 0 */ // 0x807B10E4
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x807B10EC
    r30 = r30 + 4; // 0x807B10F0
    if (<) goto 0x0x807b10d0;
    r0 = *(0x24 + r1); // lwz @ 0x807B10FC
    r31 = *(0x1c + r1); // lwz @ 0x807B1100
    r30 = *(0x18 + r1); // lwz @ 0x807B1104
    r29 = *(0x14 + r1); // lwz @ 0x807B1108
    return;
}