/* Function at 0x8087B6D0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8087B6D0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8087B6D8
    /* lis r5, 0 */ // 0x8087B6DC
    *(0x14 + r1) = r0; // stw @ 0x8087B6E0
    /* li r0, 0 */ // 0x8087B6E4
    r4 = r4 + 0; // 0x8087B6E8
    r5 = r5 + 0; // 0x8087B6EC
    *(0xc + r1) = r31; // stw @ 0x8087B6F0
    r31 = r3;
    /* li r6, 0xc */ // 0x8087B6F8
    /* li r7, 0xc */ // 0x8087B6FC
    *(4 + r3) = r0; // stw @ 0x8087B700
    r3 = r3 + 0x20; // 0x8087B704
    FUN_805E3430(r6, r7, r3); // bl 0x805E3430
}