/* Function at 0x806E7F44, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806E7F44(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x806E7F58
    *(0x18 + r1) = r30; // stw @ 0x806E7F5C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806E7F64
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806E7F6C
    r28 = r3;
    if (==) goto 0x0x806e7fa8;
    r3 = r3 + 8; // 0x806E7F78
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x20 + r28); // lwz @ 0x806E7F80
    r4 = r29;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x806E7F8C
    r12 = *(0x14 + r12); // lwz @ 0x806E7F90
    /* mtctr r12 */ // 0x806E7F94
    /* bctrl  */ // 0x806E7F98
    r31 = r3;
    r3 = r28 + 8; // 0x806E7FA0
}