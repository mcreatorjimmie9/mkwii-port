/* Function at 0x806E8118, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806E8118(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x806E8120
    *(0x1c + r1) = r31; // stw @ 0x806E812C
    /* li r31, 0 */ // 0x806E8130
    *(0x18 + r1) = r30; // stw @ 0x806E8134
    *(0x14 + r1) = r29; // stw @ 0x806E8138
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x806E8140
    r28 = r4;
    r30 = *(0 + r3); // lwz @ 0x806E8148
    if (==) goto 0x0x806e8180;
    r3 = r30 + 8; // 0x806E8150
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x20 + r30); // lwz @ 0x806E8158
    r4 = r28;
    r5 = r29;
    r12 = *(0 + r3); // lwz @ 0x806E8164
    r12 = *(0x14 + r12); // lwz @ 0x806E8168
    /* mtctr r12 */ // 0x806E816C
    /* bctrl  */ // 0x806E8170
    r31 = r3;
    r3 = r30 + 8; // 0x806E8178
}