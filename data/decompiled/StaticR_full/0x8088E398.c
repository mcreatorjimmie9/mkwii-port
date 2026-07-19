/* Function at 0x8088E398, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8088E398(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8088E3A0
    *(0x14 + r1) = r0; // stw @ 0x8088E3A4
    *(0xc + r1) = r31; // stw @ 0x8088E3A8
    r31 = r3;
    r3 = r4 + 0; // 0x8088E3B0
    /* li r4, 0x100 */ // 0x8088E3B4
    FUN_805E3430(r3, r4); // bl 0x805E3430
}