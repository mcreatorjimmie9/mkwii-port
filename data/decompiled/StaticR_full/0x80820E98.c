/* Function at 0x80820E98, size=292 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_80820E98(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x80820EA4
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r9 = *(0x10 + r3); // lwz @ 0x80820EC0
    r0 = *(8 + r3); // lwz @ 0x80820EC4
    r3 = r9 + r4; // 0x80820EC8
    if (<=) goto 0x0x80820f5c;
    /* b 0x80820f48 */ // 0x80820ED4
    r0 = *(0x14 + r26); // lwz @ 0x80820ED8
    if (<=) goto 0x0x80820f48;
    r4 = *(4 + r26); // lwz @ 0x80820EE4
    r3 = r26;
    r4 = *(0 + r4); // lwz @ 0x80820EEC
    FUN_80820FFC(r3); // bl 0x80820FFC
    r0 = *(0x14 + r26); // lwz @ 0x80820EF4
    if (<=) goto 0x0x80820f48;
    r3 = *(4 + r26); // lwz @ 0x80820F00
    /* li r4, 0 */ // 0x80820F04
    /* li r6, 0 */ // 0x80820F08
    r5 = *(0 + r3); // lwz @ 0x80820F0C
    /* b 0x80820f2c */ // 0x80820F10
    r0 = *(4 + r26); // lwz @ 0x80820F14
    r4 = r4 + 1; // 0x80820F18
    r3 = r0 + r6; // 0x80820F1C
    r6 = r6 + 4; // 0x80820F20
    r0 = *(4 + r3); // lwz @ 0x80820F24
    *(0 + r3) = r0; // stw @ 0x80820F28
    r3 = *(0x14 + r26); // lwz @ 0x80820F2C
    r0 = r3 + -1; // 0x80820F30
    if (<) goto 0x0x80820f14;
    r3 = *(4 + r26); // lwz @ 0x80820F3C
    /* slwi r0, r4, 2 */ // 0x80820F40
    /* stwx r5, r3, r0 */ // 0x80820F44
    r3 = *(0x10 + r26); // lwz @ 0x80820F48
    r0 = *(8 + r26); // lwz @ 0x80820F4C
    r3 = r3 + r27; // 0x80820F50
    if (>) goto 0x0x80820ed8;
    /* li r25, 0 */ // 0x80820F5C
    /* b 0x80820fa0 */ // 0x80820F60
    r3 = *(0x10 + r26); // lwz @ 0x80820F64
    r5 = r29;
    r4 = *(4 + r26); // lwz @ 0x80820F6C
    r6 = r30;
    /* slwi r0, r3, 2 */ // 0x80820F74
    r3 = r3 + 1; // 0x80820F78
    /* lwzx r0, r4, r0 */ // 0x80820F7C
    r7 = r31;
    *(0 + r28) = r0; // stw @ 0x80820F84
    *(0x10 + r26) = r3; // stw @ 0x80820F88
    r4 = *(0 + r26); // lwz @ 0x80820F8C
    r3 = *(0 + r28); // lwz @ 0x80820F90
    FUN_808295E4(r7); // bl 0x808295E4
    r28 = r28 + 4; // 0x80820F98
    r25 = r25 + 1; // 0x80820F9C
    if (<) goto 0x0x80820f64;
    r0 = *(0x34 + r1); // lwz @ 0x80820FAC
    return;
}