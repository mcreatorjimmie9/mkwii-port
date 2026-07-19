/* Function at 0x808340C4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_808340C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808340D0
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x808340D8
    if (==) goto 0x0x8083415c;
    r0 = *(0x280 + r3); // lwz @ 0x808340E4
    if (==) goto 0x0x8083415c;
    /* .byte 0xe0, 0x23, 0x00, 0x50 */ // 0x808340F0
    /* lis r4, 0 */ // 0x808340F4
    /* lfs f0, 0(r4) */ // 0x808340F8
    /* .byte 0x10, 0x21, 0x00, 0x72 */ // 0x808340FC
    /* lfs f2, 0x58(r3) */ // 0x80834100
}