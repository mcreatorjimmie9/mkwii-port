/* Function at 0x80732A1C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80732A1C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80732A24
    /* li r6, 1 */ // 0x80732A28
    *(0x14 + r1) = r0; // stw @ 0x80732A2C
    /* li r7, 1 */ // 0x80732A30
    *(0xc + r1) = r31; // stw @ 0x80732A34
    r31 = r3;
    r4 = *(0x614 + r3); // lwz @ 0x80732A3C
    FUN_80731780(r7); // bl 0x80731780
    r0 = *(0xe + r31); // lbz @ 0x80732A44
    if (==) goto 0x0x80732a90;
    r4 = *(0x614 + r31); // lwz @ 0x80732A50
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80732A58
    r8 = r31 + 0x7c8; // 0x80732A5C
    /* li r5, 0x1a */ // 0x80732A60
    /* li r6, 0x1b */ // 0x80732A64
    /* li r9, 1 */ // 0x80732A68
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x614 + r31); // lwz @ 0x80732A70
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80732A78
    r8 = r31 + 0x7c8; // 0x80732A7C
    /* li r5, 0x1b */ // 0x80732A80
    /* li r6, 0x1c */ // 0x80732A84
    /* li r9, 1 */ // 0x80732A88
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80732A90
    r31 = *(0xc + r1); // lwz @ 0x80732A94
    return;
}