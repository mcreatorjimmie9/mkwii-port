/* Function at 0x8063AB90, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063AB90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 4 */ // 0x8063AB98
    *(0x14 + r1) = r0; // stw @ 0x8063AB9C
    *(0xc + r1) = r31; // stw @ 0x8063ABA0
    r31 = r3;
    /* li r3, 0x28 */ // 0x8063ABA8
    r4 = *(0x10 + r31); // lwz @ 0x8063ABAC
    FUN_805E3430(r3); // bl 0x805E3430
}