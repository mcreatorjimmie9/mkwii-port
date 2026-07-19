/* Function at 0x808C0DEC, size=348 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 9 function(s) */

int FUN_808C0DEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x808C0DF8
    r30 = r3;
    FUN_808B3318(); // bl 0x808B3318
    FUN_808CFA50(); // bl 0x808CFA50
    r25 = r30;
    /* clrlwi r31, r3, 0x18 */ // 0x808C0E0C
    r26 = r30 + 0xd90; // 0x808C0E10
    /* li r24, 0 */ // 0x808C0E14
    /* li r27, 0 */ // 0x808C0E18
    /* lis r28, 0 */ // 0x808C0E1C
    /* li r29, 1 */ // 0x808C0E20
    /* b 0x808c0ec0 */ // 0x808C0E24
    r3 = r30;
    r4 = r24;
    FUN_808C15C0(r3, r4); // bl 0x808C15C0
    r23 = r3;
    /* li r22, 0 */ // 0x808C0E3C
    /* li r6, 0 */ // 0x808C0E40
    if (<=) goto 0x0x808c0e80;
    r4 = *(0 + r28); // lwz @ 0x808C0E48
    r5 = r30 + r27; // 0x808C0E4C
    r0 = *(0x98 + r4); // lwz @ 0x808C0E50
    r4 = r0 + r27; // 0x808C0E54
    /* mtctr r3 */ // 0x808C0E58
    if (<=) goto 0x0x808c0e80;
    r3 = *(0x6d8 + r5); // lwz @ 0x808C0E60
    r0 = *(0x13c + r4); // lwz @ 0x808C0E64
    if (!=) goto 0x0x808c0e74;
    r22 = r6;
    r5 = r5 + 0x10; // 0x808C0E74
    r6 = r6 + 1; // 0x808C0E78
    if (counter-- != 0) goto 0x0x808c0e60;
    r3 = r26;
    r4 = r29 << r24; // slw
    FUN_806A1DE0(r5, r6, r3); // bl 0x806A1DE0
    r3 = r26;
    r4 = r24;
    FUN_806A1CC0(r3, r3, r4); // bl 0x806A1CC0
    r3 = r26;
    r4 = r23;
    r5 = r22;
    FUN_806A1D40(r4, r3, r4, r5); // bl 0x806A1D40
    *(0xf9c + r25) = r24; // stw @ 0x808C0EA8
    r27 = r27 + 4; // 0x808C0EAC
    r26 = r26 + 0x5c8; // 0x808C0EB0
    r24 = r24 + 1; // 0x808C0EB4
    *(0xfa1 + r25) = r29; // stb @ 0x808C0EB8
    r25 = r25 + 0x5c8; // 0x808C0EBC
    if (<) goto 0x0x808c0e28;
    /* mulli r0, r31, 0x5c8 */ // 0x808C0EC8
    /* li r29, 1 */ // 0x808C0ECC
    /* mulli r4, r31, 0x174 */ // 0x808C0ED0
    r3 = r30 + r0; // 0x808C0ED4
    r28 = r30 + r4; // 0x808C0ED8
    r27 = r3 + 0xd90; // 0x808C0EDC
    /* b 0x808c0f00 */ // 0x808C0EE0
    *(0x840 + r28) = r29; // stb @ 0x808C0EE4
    r3 = r27;
    /* li r4, 0 */ // 0x808C0EEC
    FUN_806A1DE0(r3, r4); // bl 0x806A1DE0
    r28 = r28 + 0x174; // 0x808C0EF4
    r27 = r27 + 0x5c8; // 0x808C0EF8
    r31 = r31 + 1; // 0x808C0EFC
    if (<) goto 0x0x808c0ee4;
    /* lis r3, 0 */ // 0x808C0F08
    r3 = *(0 + r3); // lwz @ 0x808C0F0C
    if (==) goto 0x0x808c0f28;
    r3 = *(0x18 + r3); // lwz @ 0x808C0F18
    if (==) goto 0x0x808c0f28;
    FUN_808E3D10(); // bl 0x808E3D10
    r3 = r30 + 0x54; // 0x808C0F28
    /* li r4, 1 */ // 0x808C0F2C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r0 = *(0x34 + r1); // lwz @ 0x808C0F38
    return;
}