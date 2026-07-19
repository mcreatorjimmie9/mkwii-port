/* Function at 0x8078DAD4, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078DAD4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8078DADC
    /* li r5, 0 */ // 0x8078DAE0
    *(0x14 + r1) = r0; // stw @ 0x8078DAE4
    *(0xc + r1) = r31; // stw @ 0x8078DAE8
    /* lis r31, 0 */ // 0x8078DAEC
    *(8 + r1) = r30; // stw @ 0x8078DAF0
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8078DAF8
    r3 = r3 + 0x84c; // 0x8078DAFC
    FUN_805E3430(r3); // bl 0x805E3430
}