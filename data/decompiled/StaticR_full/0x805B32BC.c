/* Function at 0x805B32BC, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B32BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x805B32C4
    /* li r5, 0xc */ // 0x805B32C8
    *(0x14 + r1) = r0; // stw @ 0x805B32CC
    *(0xc + r1) = r31; // stw @ 0x805B32D0
    *(8 + r1) = r30; // stw @ 0x805B32D4
    r30 = r3;
    r3 = r3 + 0x4120; // 0x805B32DC
    FUN_805E3430(r3); // bl 0x805E3430
}