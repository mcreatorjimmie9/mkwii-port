/* Function at 0x8063B288, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8063B288(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8063B294
    r31 = r4;
    FUN_805F2854(); // bl 0x805F2854
    /* lis r3, 0 */ // 0x8063B2A0
    r3 = *(0 + r3); // lwz @ 0x8063B2A4
    if (==) goto 0x0x8063b2cc;
    r0 = *(0x28 + r3); // lwz @ 0x8063B2B0
    if (<) goto 0x0x8063b2cc;
    /* lis r3, 0 */ // 0x8063B2BC
    r4 = *(0x6c + r31); // lwz @ 0x8063B2C0
    r3 = *(0 + r3); // lwz @ 0x8063B2C4
    FUN_8079D69C(r3); // bl 0x8079D69C
    r0 = *(0x14 + r1); // lwz @ 0x8063B2CC
    r31 = *(0xc + r1); // lwz @ 0x8063B2D0
    return;
}