/* Function at 0x805ABE9C, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805ABE9C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805ABEA4
    /* lis r5, 0 */ // 0x805ABEA8
    *(0x14 + r1) = r0; // stw @ 0x805ABEAC
    r4 = r4 + 0; // 0x805ABEB0
    r5 = r5 + 0; // 0x805ABEB4
    /* li r6, 0xc */ // 0x805ABEB8
    *(0xc + r1) = r31; // stw @ 0x805ABEBC
    r31 = r3;
    /* li r7, 5 */ // 0x805ABEC4
    r3 = r3 + 0x68; // 0x805ABEC8
    FUN_805E3430(r6, r7, r3); // bl 0x805E3430
}