/* Function at 0x80667C4C, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_80667C4C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    *(0x34 + r1) = r0; // stw @ 0x80667C58
    /* stmw r25, 0x14(r1) */ // 0x80667C5C
    r25 = r3;
    r26 = r4;
    if (==) goto 0x0x80667cf4;
    /* lis r30, 0 */ // 0x80667C6C
    r28 = *(0 + r3); // lwz @ 0x80667C70
    r30 = r30 + 0; // 0x80667C74
    /* lis r29, 0 */ // 0x80667C78
    /* lis r31, 0 */ // 0x80667C7C
    /* b 0x80667cdc */ // 0x80667C80
    /* or. r27, r28, r28 */ // 0x80667C84
    r28 = *(0x3b0 + r28); // lwz @ 0x80667C88
    if (==) goto 0x0x80667cdc;
    r3 = r27 + 0x28; // 0x80667C90
    r4 = r29 + 0; // 0x80667C94
    /* li r5, 0x8c */ // 0x80667C98
    /* li r6, 6 */ // 0x80667C9C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r0, r27, 0x1c */ // 0x80667CA4
    if (==) goto 0x0x80667cc8;
    *(0x1c + r27) = r30; // stw @ 0x80667CAC
    r0 = *(0x24 + r27); // lhz @ 0x80667CB0
    if (==) goto 0x0x80667cc8;
    r3 = *(0x20 + r27); // lwz @ 0x80667CBC
    r4 = r31 + 0; // 0x80667CC0
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r27;
    /* li r4, -1 */ // 0x80667CCC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}