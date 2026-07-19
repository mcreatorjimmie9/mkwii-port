/* Function at 0x806886D4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806886D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806886E0
    r31 = r3;
    FUN_808CE454(); // bl 0x808CE454
    /* lis r3, 0 */ // 0x806886EC
    /* lis r4, 0 */ // 0x806886F0
    r3 = r3 + 0; // 0x806886F4
    /* lis r5, 0 */ // 0x806886F8
    *(0 + r31) = r3; // stw @ 0x806886FC
    r3 = r31 + 0x1a0; // 0x80688700
    r4 = r4 + 0; // 0x80688704
    r5 = r5 + 0; // 0x80688708
    /* li r6, 0xb90 */ // 0x8068870C
    /* li r7, 2 */ // 0x80688710
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}