/* Function at 0x806727A8, size=200 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_806727A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x806727B4
    r27 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x806727C0
    *(0x664 + r27) = r0; // stw @ 0x806727C4
    r3 = r27 + 0x654; // 0x806727C8
    /* li r4, 0 */ // 0x806727CC
    r12 = *(0x654 + r27); // lwz @ 0x806727D0
    /* li r5, 0 */ // 0x806727D4
    r12 = *(0x10 + r12); // lwz @ 0x806727D8
    /* mtctr r12 */ // 0x806727DC
    /* bctrl  */ // 0x806727E0
    r3 = r27;
    r4 = r27 + 0x654; // 0x806727E8
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r4 = *(0x664 + r27); // lwz @ 0x806727F0
    r3 = r27;
    FUN_80671C1C(r3, r4, r3); // bl 0x80671C1C
    /* lis r30, 0 */ // 0x806727FC
    r29 = r27 + 0x44; // 0x80672800
    /* li r28, 0 */ // 0x80672804
    r31 = r30 + 0; // 0x80672808
    /* b 0x8067287c */ // 0x8067280C
    r3 = r27;
    r4 = r28;
    r5 = r29;
    /* li r6, 0 */ // 0x8067281C
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
    r0 = *(0x664 + r27); // lwz @ 0x80672824
    r5 = r30 + 0; // 0x8067282C
    r6 = r28 + 1; // 0x80672830
    /* li r4, 0xf */ // 0x80672838
    /* li r7, 4 */ // 0x8067283C
    if (!=) goto 0x0x80672848;
    /* li r7, 2 */ // 0x80672844
    /* crclr cr1eq */ // 0x80672848
    FUN_805E3430(r4, r7, r7); // bl 0x805E3430
    r3 = r29;
    r7 = r28;
    r4 = r31 + 0xd; // 0x80672858
    r5 = r31 + 0x1b; // 0x8067285C
    /* li r8, 1 */ // 0x80672864
    /* li r9, 0 */ // 0x80672868
    /* li r10, 0 */ // 0x8067286C
}