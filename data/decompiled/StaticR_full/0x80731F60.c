/* Function at 0x80731F60, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80731F60(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80731F6C
    r31 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x80731F74
    r4 = *(0x530 + r3); // lwz @ 0x80731F78
    if (!=) goto 0x0x80731f94;
    r5 = *(0x80 + r3); // lwz @ 0x80731F84
    r0 = *(0xae0 + r3); // lbz @ 0x80731F88
    if (>=) goto 0x0x80731fb4;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731F98
    r8 = r31 + 0x7bc; // 0x80731F9C
    /* li r5, 0x18 */ // 0x80731FA0
    /* li r6, 0x19 */ // 0x80731FA4
    /* li r9, 1 */ // 0x80731FA8
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80731fcc */ // 0x80731FB0
    r7 = r3 + 0x6f4; // 0x80731FB4
    r8 = r3 + 0x7bc; // 0x80731FB8
    /* li r5, 0x18 */ // 0x80731FBC
    /* li r6, 0x19 */ // 0x80731FC0
    /* li r9, 1 */ // 0x80731FC4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x80731FCC
    r4 = *(0x530 + r31); // lwz @ 0x80731FD0
    if (!=) goto 0x0x80731fec;
    r3 = *(0x84 + r31); // lwz @ 0x80731FDC
    r0 = *(0xae0 + r31); // lbz @ 0x80731FE0
    if (>=) goto 0x0x8073200c;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731FF0
    r8 = r31 + 0x7c8; // 0x80731FF4
    /* li r5, 0x19 */ // 0x80731FF8
    /* li r6, 0x1a */ // 0x80731FFC
    /* li r9, 1 */ // 0x80732000
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80732028 */ // 0x80732008
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80732010
    r8 = r31 + 0x7c8; // 0x80732014
    /* li r5, 0x19 */ // 0x80732018
    /* li r6, 0x1a */ // 0x8073201C
    /* li r9, 1 */ // 0x80732020
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80732028
    r31 = *(0xc + r1); // lwz @ 0x8073202C
    return;
}