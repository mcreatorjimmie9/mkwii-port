/* Function at 0x806736E8, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806736E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806736F0
    *(0x14 + r1) = r0; // stw @ 0x806736F4
    *(0xc + r1) = r31; // stw @ 0x806736F8
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80673700
    r3 = *(0 + r3); // lwz @ 0x80673704
    FUN_8068608C(); // bl 0x8068608C
    /* subf r4, r3, r31 */ // 0x8067370C
    /* subf r0, r31, r3 */ // 0x80673710
    r0 = r4 | r0; // 0x80673714
    r31 = *(0xc + r1); // lwz @ 0x80673718
    /* srwi r3, r0, 0x1f */ // 0x8067371C
    r0 = *(0x14 + r1); // lwz @ 0x80673720
    return;
}