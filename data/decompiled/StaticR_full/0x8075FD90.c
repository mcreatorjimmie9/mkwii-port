/* Function at 0x8075FD90, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8075FD90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8075FDA0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8075FDA8
    r30 = r3;
    if (==) goto 0x0x8075fde0;
    /* addic. r0, r3, 0xb0 */ // 0x8075FDB4
    if (==) goto 0x0x8075fdd0;
    /* lis r4, 0 */ // 0x8075FDBC
    r4 = r4 + 0; // 0x8075FDC0
    *(0xb0 + r3) = r4; // stw @ 0x8075FDC4
    r3 = *(0xc4 + r3); // lwz @ 0x8075FDC8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8075fde0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8075FDE4
    r30 = *(8 + r1); // lwz @ 0x8075FDE8
    r0 = *(0x14 + r1); // lwz @ 0x8075FDEC
    return;
}