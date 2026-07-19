/* Function at 0x807D8390, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D8390(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807D83A0
    r30 = r3;
    r4 = *(0x1f0 + r3); // lwz @ 0x807D83A8
    r3 = *(0x208 + r3); // lwz @ 0x807D83AC
    r31 = *(0 + r4); // lwz @ 0x807D83B0
    FUN_807D8C60(); // bl 0x807D8C60
    r3 = *(0 + r31); // lwz @ 0x807D83B8
    r3 = *(4 + r3); // lwz @ 0x807D83BC
    r0 = *(0xc + r3); // lwz @ 0x807D83C0
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x807D83C4
    if (!=) goto 0x0x807d83d8;
    r3 = r30;
    r4 = r30 + 0x64; // 0x807D83D0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D83D8
    r31 = *(0xc + r1); // lwz @ 0x807D83DC
    r30 = *(8 + r1); // lwz @ 0x807D83E0
    return;
}