/* Function at 0x80780960, size=124 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_80780960(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x8078096C
    r28 = r3;
    /* li r29, 0 */ // 0x80780974
    /* lis r30, 0 */ // 0x80780978
    /* lis r31, 0 */ // 0x8078097C
    /* li r26, 1 */ // 0x80780980
    /* lis r27, 0 */ // 0x80780984
    /* b 0x80780a88 */ // 0x80780988
    r3 = *(0 + r30); // lwz @ 0x8078098C
    /* clrlwi r4, r29, 0x18 */ // 0x80780990
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061DECC(); // bl 0x8061DECC
    if (==) goto 0x0x80780a84;
    r3 = *(0 + r30); // lwz @ 0x807809A4
    /* clrlwi r4, r29, 0x18 */ // 0x807809A8
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x807809B8
    /* li r5, -1 */ // 0x807809BC
    /* li r6, 1 */ // 0x807809C0
    FUN_805A6434(r4, r5, r6); // bl 0x805A6434
    /* extsh r0, r3 */ // 0x807809C8
    r25 = r3;
    /* li r3, 0 */ // 0x807809D4
    if (==) goto 0x0x807809f0;
}