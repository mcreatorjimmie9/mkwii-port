/* Function at 0x807E5000, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E5000(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807E5008
    *(0x14 + r1) = r0; // stw @ 0x807E500C
    *(0xc + r1) = r31; // stw @ 0x807E5010
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807E501C
    /* li r3, 0x7c */ // 0x807E5020
    r4 = r4 + 0; // 0x807E5024
    *(0 + r31) = r4; // stw @ 0x807E5028
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}