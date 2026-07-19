/* Function at 0x807E0528, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E0528(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807E0530
    *(0x14 + r1) = r0; // stw @ 0x807E0534
    *(0xc + r1) = r31; // stw @ 0x807E0538
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807E0544
    /* li r3, 0x7c */ // 0x807E0548
    r4 = r4 + 0; // 0x807E054C
    *(0 + r31) = r4; // stw @ 0x807E0550
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}