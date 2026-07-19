/* Function at 0x806DEB8C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DEB8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806DEB94
    *(0x14 + r1) = r0; // stw @ 0x806DEB98
    r4 = r4 + 0; // 0x806DEB9C
    *(0xc + r1) = r31; // stw @ 0x806DEBA0
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x806DEBA8
    r3 = r3 + 0xa8; // 0x806DEBAC
    FUN_805E34E4(r4, r3); // bl 0x805E34E4
    /* lis r4, 0 */ // 0x806DEBB4
    r3 = r31;
    r4 = r4 + 0; // 0x806DEBBC
    *(0 + r31) = r4; // stw @ 0x806DEBC0
    r31 = *(0xc + r1); // lwz @ 0x806DEBC4
    r0 = *(0x14 + r1); // lwz @ 0x806DEBC8
    return;
}