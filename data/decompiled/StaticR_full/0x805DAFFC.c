/* Function at 0x805DAFFC, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DAFFC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0x10; // 0x805DB004
    *(0x14 + r1) = r0; // stw @ 0x805DB008
    *(0xc + r1) = r31; // stw @ 0x805DB00C
    FUN_805E3430(r3); // bl 0x805E3430
}