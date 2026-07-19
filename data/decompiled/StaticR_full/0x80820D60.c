/* Function at 0x80820D60, size=200 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80820D60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x80820D6C
    /* lis r31, 0 */ // 0x80820D70
    /* mulli r29, r4, 0x74 */ // 0x80820D74
    r25 = r3;
    r31 = r31 + 0; // 0x80820D7C
    r26 = r4;
    r6 = r31 + r29; // 0x80820D84
    r27 = r5;
    r28 = *(0 + r5); // lwz @ 0x80820D8C
    r30 = *(0xc + r6); // lwz @ 0x80820D90
    *(0 + r3) = r4; // stw @ 0x80820D94
    r3 = r30;
    /* lwzx r12, r31, r29 */ // 0x80820D9C
    /* mtctr r12 */ // 0x80820DA0
    /* bctrl  */ // 0x80820DA4
    *(4 + r25) = r3; // stw @ 0x80820DA8
    r4 = r31 + r29; // 0x80820DAC
    /* li r0, 0 */ // 0x80820DB0
    /* li r29, 0 */ // 0x80820DB4
    *(8 + r25) = r30; // stw @ 0x80820DB8
    /* li r31, 0 */ // 0x80820DBC
    r3 = *(0x10 + r4); // lwz @ 0x80820DC0
    *(0xc + r25) = r3; // stw @ 0x80820DC4
    *(0x10 + r25) = r0; // stw @ 0x80820DC8
    *(0x14 + r25) = r0; // stw @ 0x80820DCC
    *(0x18 + r25) = r0; // stw @ 0x80820DD0
    *(0x20 + r25) = r0; // sth @ 0x80820DD4
    r0 = *(4 + r4); // lwz @ 0x80820DD8
    *(0x1c + r25) = r0; // stw @ 0x80820DDC
    /* b 0x80820e08 */ // 0x80820DE0
    r3 = *(4 + r25); // lwz @ 0x80820DE4
    r4 = r28;
    r5 = r29;
    r6 = r26;
    /* lwzx r3, r3, r31 */ // 0x80820DF4
    r28 = r28 + 1; // 0x80820DF8
    FUN_808292B8(r4, r5, r6); // bl 0x808292B8
    r31 = r31 + 4; // 0x80820E00
    r29 = r29 + 1; // 0x80820E04
    if (<) goto 0x0x80820de4;
    *(0 + r27) = r28; // stw @ 0x80820E10
    r0 = *(0x34 + r1); // lwz @ 0x80820E18
    return;
}