/* Function at 0x8085E678, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8085E678(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8085E684
    r31 = r3;
    r4 = *(0x10 + r3); // lwz @ 0x8085E68C
    r0 = *(0x146 + r4); // lbz @ 0x8085E690
    if (!=) goto 0x0x8085e6a4;
    /* li r3, 0 */ // 0x8085E69C
    /* b 0x8085e714 */ // 0x8085E6A0
    r3 = r4;
    FUN_808586E4(r3, r3); // bl 0x808586E4
    if (==) goto 0x0x8085e6bc;
    /* li r3, 1 */ // 0x8085E6B4
    /* b 0x8085e714 */ // 0x8085E6B8
    /* .byte 0xe0, 0x3f, 0x04, 0x30 */ // 0x8085E6BC
    /* lis r3, 0 */ // 0x8085E6C0
    /* lfs f0, 0(r3) */ // 0x8085E6C4
    /* .byte 0x10, 0x21, 0x00, 0x72 */ // 0x8085E6C8
    /* lfs f2, 0x438(r31) */ // 0x8085E6CC
}