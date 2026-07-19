/* Function at 0x806E10D4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806E10D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E10E4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E10EC
    r30 = r3;
    if (==) goto 0x0x806e1154;
    /* lis r4, 0 */ // 0x806E10F8
    /* li r5, 0x174 */ // 0x806E10FC
    r4 = r4 + 0; // 0x806E1100
    /* li r6, 0xc */ // 0x806E1104
    r3 = r3 + 0x484; // 0x806E1108
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* addic. r3, r30, 0x310 */ // 0x806E1110
    if (==) goto 0x0x806e1120;
    /* li r4, 0 */ // 0x806E1118
    FUN_806A0540(r3, r4); // bl 0x806A0540
    r3 = r30 + 0x19c; // 0x806E1120
    /* li r4, -1 */ // 0x806E1124
    FUN_806A0540(r4, r3, r4); // bl 0x806A0540
}