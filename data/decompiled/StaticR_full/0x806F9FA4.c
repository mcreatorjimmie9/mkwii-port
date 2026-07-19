/* Function at 0x806F9FA4, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806F9FA4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0xc */ // 0x806F9FAC
    /* li r0, 0 */ // 0x806F9FB4
    *(0x1c + r1) = r31; // stw @ 0x806F9FB8
    r31 = r4;
    /* li r4, 0 */ // 0x806F9FC0
    *(0x18 + r1) = r30; // stw @ 0x806F9FC4
    r30 = r3;
    *(8 + r1) = r0; // stw @ 0x806F9FD0
    FUN_805E3430(r4, r3); // bl 0x805E3430
}