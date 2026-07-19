/* Function at 0x806B0FA4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B0FA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B0FB0
    r31 = r3;
    r4 = *(0x68 + r3); // lwz @ 0x806B0FB8
    r0 = r4 + -3; // 0x806B0FBC
    if (>) goto 0x0x806b0fec;
    r3 = r3 + 0x6c; // 0x806B0FC8
    FUN_8064ED7C(r3); // bl 0x8064ED7C
    /* lis r3, 0 */ // 0x806B0FD0
    /* lfs f1, 0x6c(r31) */ // 0x806B0FD4
    /* lfs f0, 0(r3) */ // 0x806B0FD8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806B0FDC
    if (>=) goto 0x0x806b0fec;
    r3 = r31 + 0x78; // 0x806B0FE4
    FUN_8064F4B8(r3); // bl 0x8064F4B8
    r0 = *(0x14 + r1); // lwz @ 0x806B0FEC
    r31 = *(0xc + r1); // lwz @ 0x806B0FF0
    return;
}