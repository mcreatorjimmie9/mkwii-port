/* Function at 0x807B1118, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807B1118(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807B1128
    *(0x18 + r1) = r30; // stw @ 0x807B112C
    *(0x14 + r1) = r29; // stw @ 0x807B1130
    r29 = r4;
    r30 = *(0x28 + r3); // lwz @ 0x807B1138
    r3 = *(0x14 + r30); // lwz @ 0x807B113C
    r3 = *(0 + r3); // lwz @ 0x807B1140
    if (==) goto 0x0x807b1158;
    r5 = r29;
    /* li r4, 0 */ // 0x807B1150
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x807B1158
    r30 = r30 + 4; // 0x807B115C
    if (<) goto 0x0x807b113c;
    r0 = *(0x24 + r1); // lwz @ 0x807B1168
    r31 = *(0x1c + r1); // lwz @ 0x807B116C
    r30 = *(0x18 + r1); // lwz @ 0x807B1170
    r29 = *(0x14 + r1); // lwz @ 0x807B1174
    return;
}