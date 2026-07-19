/* Function at 0x8064AA80, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8064AA80(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064AA8C
    r31 = r3;
    FUN_806497A4(); // bl 0x806497A4
    /* lis r4, 0 */ // 0x8064AA98
    r3 = r31;
    r4 = r4 + 0; // 0x8064AAA0
    *(0 + r31) = r4; // stw @ 0x8064AAA4
    r31 = *(0xc + r1); // lwz @ 0x8064AAA8
    r0 = *(0x14 + r1); // lwz @ 0x8064AAAC
    return;
}