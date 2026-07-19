/* Function at 0x8085E5C8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8085E5C8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8085E5D4
    r31 = r3;
    r4 = *(0x10 + r3); // lwz @ 0x8085E5DC
    r0 = *(0x146 + r4); // lbz @ 0x8085E5E0
    if (!=) goto 0x0x8085e5f4;
    /* li r3, 0 */ // 0x8085E5EC
    /* b 0x8085e664 */ // 0x8085E5F0
    r3 = r4;
    FUN_80858694(r3, r3); // bl 0x80858694
    if (==) goto 0x0x8085e60c;
    /* li r3, 1 */ // 0x8085E604
    /* b 0x8085e664 */ // 0x8085E608
    /* .byte 0xe0, 0x3f, 0x04, 0x24 */ // 0x8085E60C
    /* lis r3, 0 */ // 0x8085E610
    /* lfs f0, 0(r3) */ // 0x8085E614
    /* .byte 0x10, 0x21, 0x00, 0x72 */ // 0x8085E618
    /* lfs f2, 0x42c(r31) */ // 0x8085E61C
}