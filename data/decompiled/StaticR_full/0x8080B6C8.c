/* Function at 0x8080B6C8, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080B6C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8080B6D0
    *(0x14 + r1) = r0; // stw @ 0x8080B6D4
    *(0xc + r1) = r31; // stw @ 0x8080B6D8
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8080B6E4
    /* li r3, 0x7c */ // 0x8080B6E8
    r4 = r4 + 0; // 0x8080B6EC
    *(0 + r31) = r4; // stw @ 0x8080B6F0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}