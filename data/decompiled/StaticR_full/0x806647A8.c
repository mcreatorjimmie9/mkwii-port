/* Function at 0x806647A8, size=60 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806647A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0xd8 + r1) = r30; // stw @ 0x806647BC
    r30 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r5, 0x5f6 */ // 0x806647CC
    r3 = *(0 + r31); // lwz @ 0x806647D0
    r6 = r5 + -0x1f00; // 0x806647D4
    r4 = *(4 + r31); // lwz @ 0x806647D8
    /* li r5, 0 */ // 0x806647DC
    FUN_805E3430(r5, r6, r5); // bl 0x805E3430
}