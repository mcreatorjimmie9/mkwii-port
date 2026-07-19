/* Function at 0x806DDFA4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DDFA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806DDFAC
    *(0x14 + r1) = r0; // stw @ 0x806DDFB0
    r4 = r4 + 0; // 0x806DDFB4
    *(0xc + r1) = r31; // stw @ 0x806DDFB8
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x806DDFC0
    r3 = r3 + 0xa8; // 0x806DDFC4
    FUN_805E34E4(r4, r3); // bl 0x805E34E4
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806DDFD0
    r0 = *(0x14 + r1); // lwz @ 0x806DDFD4
    return;
}