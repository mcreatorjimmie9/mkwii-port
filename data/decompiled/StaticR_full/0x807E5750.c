/* Function at 0x807E5750, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E5750(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r8 = r4;
    *(0x14 + r1) = r0; // stw @ 0x807E5760
    *(0xc + r1) = r31; // stw @ 0x807E5764
    r31 = r5;
    if (!=) goto 0x0x807e5778;
    r3 = r31;
    /* b 0x807e5790 */ // 0x807E5774
    if (!=) goto 0x0x807e578c;
    r4 = r7;
    r5 = r8 + 0x50; // 0x807E5784
    FUN_807E57A4(r4, r5); // bl 0x807E57A4
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x807E5790
    r31 = *(0xc + r1); // lwz @ 0x807E5794
    return;
}