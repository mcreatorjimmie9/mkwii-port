/* Function at 0x806674DC, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806674DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806674E4
    *(0x14 + r1) = r0; // stw @ 0x806674E8
    r4 = r4 + 0; // 0x806674EC
    *(0xc + r1) = r31; // stw @ 0x806674F0
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x806674F8
    r3 = r3 + 4; // 0x806674FC
    FUN_805E3430(r4, r3); // bl 0x805E3430
}