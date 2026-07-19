/* Function at 0x8065F048, size=172 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 4 function(s) */

int FUN_8065F048(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* li r4, 0 */ // 0x8065F050
    /* li r5, 0 */ // 0x8065F054
    *(0x34 + r1) = r0; // stw @ 0x8065F058
    /* stmw r25, 0x14(r1) */ // 0x8065F05C
    r30 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8065F064
    r12 = *(0x10 + r12); // lwz @ 0x8065F068
    /* mtctr r12 */ // 0x8065F06C
    r3 = r3 + 0x44; // 0x8065F070
    /* bctrl  */ // 0x8065F074
    r3 = r30;
    r4 = r30 + 0x44; // 0x8065F07C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 0 */ // 0x8065F088
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* li r31, 0 */ // 0x8065F090
    /* lis r3, 1 */ // 0x8065F094
    r28 = r31;
    /* li r29, 0 */ // 0x8065F09C
    r27 = r3 + -0x7340; // 0x8065F0A0
    /* lis r26, 0 */ // 0x8065F0A4
    /* clrlwi r0, r31, 0x18 */ // 0x8065F0A8
    r3 = *(0 + r26); // lwz @ 0x8065F0AC
    r0 = r27 * r0; // 0x8065F0B0
    r3 = *(0x14 + r3); // lwz @ 0x8065F0B4
    r3 = r3 + r0; // 0x8065F0B8
    r3 = *(8 + r3); // lwz @ 0x8065F0BC
    /* addis r0, r3, -0x524b */ // 0x8065F0C0
    if (!=) goto 0x0x8065f108;
    /* li r3, 0x14 */ // 0x8065F0CC
    FUN_805E3430(r3); // bl 0x805E3430
    r25 = r3;
    if (==) goto 0x0x8065f0fc;
    FUN_805ABAFC(r3); // bl 0x805ABAFC
    r4 = r3;
    r3 = r25;
    r4 = *(0xc98 + r4); // lwz @ 0x8065F0EC
    /* li r5, 0 */ // 0x8065F0F0
}