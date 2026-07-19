/* Function at 0x806AE88C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806AE88C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AE898
    r31 = r3;
    r3 = r3 + 0x1d0; // 0x806AE8A0
    FUN_8064ED7C(r3); // bl 0x8064ED7C
    /* lis r3, 0 */ // 0x806AE8A8
    /* lfs f1, 0x1d0(r31) */ // 0x806AE8AC
    /* lfs f0, 0(r3) */ // 0x806AE8B0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806AE8B4
    if (>=) goto 0x0x806ae8c4;
    r3 = r31 + 0x54; // 0x806AE8BC
    FUN_8064F4B8(r3); // bl 0x8064F4B8
    r0 = *(0x14 + r1); // lwz @ 0x806AE8C4
    r31 = *(0xc + r1); // lwz @ 0x806AE8C8
    return;
}