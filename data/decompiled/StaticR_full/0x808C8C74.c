/* Function at 0x808C8C74, size=476 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808C8C74(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808C8C7C
    /* lis r31, 0 */ // 0x808C8C88
    r31 = r31 + 0; // 0x808C8C8C
    *(0x38 + r1) = r30; // stw @ 0x808C8C90
    /* li r30, 1 */ // 0x808C8C94
    *(0x34 + r1) = r29; // stw @ 0x808C8C98
    r29 = r3;
    r4 = *(0 + r4); // lwz @ 0x808C8CA0
    r5 = *(0x26 + r4); // lbz @ 0x808C8CA4
    /* li r4, 0 */ // 0x808C8CA8
    /* cmpwi cr1, r5, 0 */
    if (<=) goto 0x0x808c8d84;
    r7 = r5 + -8; // 0x808C8CB8
    if (<=) goto 0x0x808c8d60;
    /* li r8, 0 */ // 0x808C8CC0
    if (<) goto 0x0x808c8cdc;
    /* lis r6, -0x8000 */ // 0x808C8CC8
    r0 = r6 + -2; // 0x808C8CCC
    if (>) goto 0x0x808c8cdc;
    /* li r8, 1 */ // 0x808C8CD8
    if (==) goto 0x0x808c8d60;
    r0 = r7 + 7; // 0x808C8CE4
    /* li r11, 1 */ // 0x808C8CE8
    /* srwi r0, r0, 3 */ // 0x808C8CEC
    /* mtctr r0 */ // 0x808C8CF0
    if (<=) goto 0x0x808c8d60;
    r8 = r11 << r4; // slw
    r7 = r4 + 1; // 0x808C8D00
    r6 = r4 + 2; // 0x808C8D04
    r0 = r4 + 3; // 0x808C8D08
    r9 = r30 | r8; // 0x808C8D0C
    r7 = r11 << r7; // slw
    r12 = r9 | r7; // 0x808C8D14
    r10 = r11 << r6; // slw
    r8 = r4 + 4; // 0x808C8D1C
    r9 = r11 << r0; // slw
    r10 = r12 | r10; // 0x808C8D24
    r7 = r4 + 5; // 0x808C8D28
    r6 = r4 + 6; // 0x808C8D2C
    r0 = r4 + 7; // 0x808C8D30
    r9 = r10 | r9; // 0x808C8D34
    r8 = r11 << r8; // slw
    r8 = r9 | r8; // 0x808C8D3C
    r7 = r11 << r7; // slw
    r7 = r8 | r7; // 0x808C8D44
    r6 = r11 << r6; // slw
    r6 = r7 | r6; // 0x808C8D4C
    r0 = r11 << r0; // slw
    r30 = r6 | r0; // 0x808C8D54
    r4 = r4 + 8; // 0x808C8D58
    if (counter-- != 0) goto 0x0x808c8cfc;
    /* subf r0, r4, r5 */ // 0x808C8D60
    /* li r6, 1 */ // 0x808C8D64
    /* mtctr r0 */ // 0x808C8D68
    if (>=) goto 0x0x808c8d84;
    r0 = r6 << r4; // slw
    r4 = r4 + 1; // 0x808C8D78
    r30 = r30 | r0; // 0x808C8D7C
    if (counter-- != 0) goto 0x0x808c8d74;
    r12 = *(0x80 + r3); // lwzu @ 0x808C8D84
    r0 = r5 + -2; // 0x808C8D88
    /* li r6, 2 */ // 0x808C8D8C
    r4 = r30;
    /* orc r5, r5, r6 */ // 0x808C8D94
    /* srwi r0, r0, 1 */ // 0x808C8D98
    /* subf r0, r0, r5 */ // 0x808C8D9C
    r12 = *(0x10 + r12); // lwz @ 0x808C8DA0
    /* srwi r5, r0, 0x1f */ // 0x808C8DA4
    /* mtctr r12 */ // 0x808C8DA8
    /* bctrl  */ // 0x808C8DAC
    r4 = r30;
    r3 = r29 + 0x80; // 0x808C8DB4
    FUN_8066821C(r4, r3); // bl 0x8066821C
    /* lis r4, 0 */ // 0x808C8DBC
    /* li r3, 0 */ // 0x808C8DC0
    r4 = *(0 + r4); // lwz @ 0x808C8DC4
    r0 = *(0xb70 + r4); // lwz @ 0x808C8DC8
    if (<) goto 0x0x808c8de0;
    if (>) goto 0x0x808c8de0;
    /* li r3, 1 */ // 0x808C8DDC
    if (!=) goto 0x0x808c8ea4;
    /* li r3, 0x14 */ // 0x808C8DE8
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x808c8e30;
    r5 = r31 + 0; // 0x808C8DF8
    r7 = *(0 + r31); // lwz @ 0x808C8DFC
    r6 = *(4 + r5); // lwz @ 0x808C8E00
    /* lis r4, 0 */ // 0x808C8E04
    r0 = *(8 + r5); // lwz @ 0x808C8E08
    r4 = r4 + 0; // 0x808C8E0C
    *(0x20 + r1) = r7; // stw @ 0x808C8E10
    *(0 + r3) = r4; // stw @ 0x808C8E14
    *(4 + r3) = r29; // stw @ 0x808C8E18
    *(8 + r3) = r7; // stw @ 0x808C8E1C
    *(0xc + r3) = r6; // stw @ 0x808C8E20
    *(0x24 + r1) = r6; // stw @ 0x808C8E24
    *(0x28 + r1) = r0; // stw @ 0x808C8E28
    *(0x10 + r3) = r0; // stw @ 0x808C8E2C
    *(0x1c4 + r29) = r3; // stw @ 0x808C8E30
    /* lis r3, 0 */ // 0x808C8E34
    r3 = *(0 + r3); // lwz @ 0x808C8E38
    r3 = *(0 + r3); // lwz @ 0x808C8E3C
    r0 = *(0 + r3); // lwz @ 0x808C8E40
    if (<) goto 0x0x808c8e54;
}