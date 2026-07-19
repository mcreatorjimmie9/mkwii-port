/* Function at 0x8061ADEC, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_8061ADEC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x8061ADF8
    r27 = r3;
    FUN_8061AEC0(); // bl 0x8061AEC0
    /* lis r26, 0 */ // 0x8061AE04
    /* li r29, 0 */ // 0x8061AE08
    r26 = r26 + 0; // 0x8061AE0C
    /* lis r25, 0 */ // 0x8061AE10
    /* li r31, 1 */ // 0x8061AE14
    /* b 0x8061ae98 */ // 0x8061AE18
    r28 = r29 rlwinm 1; // rlwinm
    /* li r30, 0 */ // 0x8061AE20
    r0 = r30 + r28; // 0x8061AE24
    r3 = *(0x20 + r27); // lwz @ 0x8061AE28
    /* clrlwi r4, r0, 0x18 */ // 0x8061AE2C
    r0 = *(0x24 + r27); // lwz @ 0x8061AE30
    r4 = r31 << r4; // slw
    r5 = r3 & r4; // 0x8061AE38
    r3 = r0 & r4; // 0x8061AE3C
    /* neg r4, r5 */ // 0x8061AE40
    /* neg r0, r3 */ // 0x8061AE44
    r0 = r0 | r3; // 0x8061AE48
    r4 = r4 | r5; // 0x8061AE4C
    /* srwi r3, r4, 0x1f */ // 0x8061AE50
    /* srwi r0, r0, 0x1f */ // 0x8061AE54
    if (==) goto 0x0x8061ae88;
    r3 = *(0 + r25); // lwz @ 0x8061AE60
    /* clrlwi r4, r29, 0x18 */ // 0x8061AE64
    FUN_8061D97C(); // bl 0x8061D97C
    /* clrlwi r0, r30, 0x18 */ // 0x8061AE6C
    r4 = r3;
    /* mulli r0, r0, 0xc */ // 0x8061AE74
    r3 = r27;
    r12 = r26 + r0; // 0x8061AE7C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r30 = r30 + 1; // 0x8061AE88
    if (<) goto 0x0x8061ae24;
    r29 = r29 + 1; // 0x8061AE94
    r3 = *(0 + r25); // lwz @ 0x8061AE98
    /* clrlwi r4, r29, 0x18 */ // 0x8061AE9C
    r0 = *(0x24 + r3); // lbz @ 0x8061AEA0
    if (<) goto 0x0x8061ae1c;
    r0 = *(0x34 + r1); // lwz @ 0x8061AEB0
}