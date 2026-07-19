/* Function at 0x80660294, size=160 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_80660294(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r25 */
    /* stmw r25, 0x34(r1) */ // 0x806602A0
    r28 = r3;
    /* li r26, 0 */ // 0x806602A8
    /* li r30, 0x14 */ // 0x806602AC
    /* li r31, 0xa */ // 0x806602B0
    r27 = *(0x54 + r28); // lwz @ 0x806602B4
    if (==) goto 0x0x8066032c;
    /* li r25, 0 */ // 0x806602C0
    /* b 0x8066031c */ // 0x806602C4
    r3 = r27;
    /* clrlwi r4, r25, 0x10 */ // 0x806602CC
    FUN_805ACCB0(r3); // bl 0x805ACCB0
    r29 = r3;
    if (==) goto 0x0x80660318;
    r0 = *(0 + r3); // lbz @ 0x806602E0
    if (==) goto 0x0x80660318;
    /* li r4, 0 */ // 0x806602F0
    /* li r5, 0x16 */ // 0x806602F4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    *(0xc + r1) = r30; // stw @ 0x806602FC
    r5 = r29 + 0x1a; // 0x80660308
    *(8 + r1) = r31; // stw @ 0x8066030C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r25 = r25 + 1; // 0x80660318
    r0 = *(4 + r27); // lhz @ 0x8066031C
    /* clrlwi r3, r25, 0x10 */ // 0x80660320
    if (<) goto 0x0x806602c8;
    r26 = r26 + 1; // 0x8066032C
    r28 = r28 + 4; // 0x80660330
}