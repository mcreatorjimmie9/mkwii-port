/* Function at 0x80821A3C, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80821A3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80821A48
    r31 = r3;
    r0 = *(0x14 + r3); // lwz @ 0x80821A50
    if (<=) goto 0x0x80821ac4;
    r4 = *(4 + r3); // lwz @ 0x80821A5C
    r4 = *(0 + r4); // lwz @ 0x80821A60
    FUN_80820FFC(); // bl 0x80820FFC
    r0 = *(0x14 + r31); // lwz @ 0x80821A68
    if (<=) goto 0x0x80821abc;
    r3 = *(4 + r31); // lwz @ 0x80821A74
    /* li r6, 0 */ // 0x80821A78
    /* li r4, 0 */ // 0x80821A7C
    r5 = *(0 + r3); // lwz @ 0x80821A80
    /* b 0x80821aa0 */ // 0x80821A84
    r0 = *(4 + r31); // lwz @ 0x80821A88
    r6 = r6 + 1; // 0x80821A8C
    r3 = r0 + r4; // 0x80821A90
    r4 = r4 + 4; // 0x80821A94
    r0 = *(4 + r3); // lwz @ 0x80821A98
    *(0 + r3) = r0; // stw @ 0x80821A9C
    r3 = *(0x14 + r31); // lwz @ 0x80821AA0
    r0 = r3 + -1; // 0x80821AA4
    if (<) goto 0x0x80821a88;
    r3 = *(4 + r31); // lwz @ 0x80821AB0
    /* slwi r0, r6, 2 */ // 0x80821AB4
    /* stwx r5, r3, r0 */ // 0x80821AB8
    /* li r3, 1 */ // 0x80821ABC
    /* b 0x80821ac8 */ // 0x80821AC0
    /* li r3, 0 */ // 0x80821AC4
    r0 = *(0x14 + r1); // lwz @ 0x80821AC8
    r31 = *(0xc + r1); // lwz @ 0x80821ACC
    return;
}