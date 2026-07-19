/* Function at 0x80816C30, size=188 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_80816C30(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r5, 0 */ // 0x80816C38
    *(0x34 + r1) = r0; // stw @ 0x80816C3C
    /* stmw r24, 0x10(r1) */ // 0x80816C40
    r24 = r3;
    r25 = r4;
    /* li r27, 0 */ // 0x80816C4C
    /* li r26, 0 */ // 0x80816C50
    r28 = *(0 + r5); // lwz @ 0x80816C54
    r3 = *(0x2c + r28); // lwz @ 0x80816C58
    if (==) goto 0x0x80816c6c;
    r30 = *(4 + r3); // lhz @ 0x80816C64
    /* b 0x80816c70 */ // 0x80816C68
    /* li r30, 0 */ // 0x80816C6C
    /* li r31, 1 */ // 0x80816C70
    /* b 0x80816cc8 */ // 0x80816C74
    r3 = r28;
    /* clrlwi r4, r26, 0x10 */ // 0x80816C7C
    FUN_805A6394(r3); // bl 0x805A6394
    if (==) goto 0x0x80816cc4;
    r4 = *(4 + r3); // lwz @ 0x80816C8C
    r0 = *(1 + r4); // lbz @ 0x80816C90
    if (!=) goto 0x0x80816cc4;
    r0 = *(0x28 + r4); // lha @ 0x80816C9C
    r29 = r31 << r0; // slw
    /* and. r0, r27, r29 */ // 0x80816CA4
    if (!=) goto 0x0x80816cc4;
    r4 = r24;
    FUN_805A5CDC(r4); // bl 0x805A5CDC
    if (==) goto 0x0x80816cc4;
    r0 = r27 | r29; // 0x80816CBC
    /* clrlwi r27, r0, 0x10 */ // 0x80816CC0
    r26 = r26 + 1; // 0x80816CC4
    /* clrlwi r0, r26, 0x10 */ // 0x80816CC8
    if (<) goto 0x0x80816c78;
    r3 = r27;
    r0 = *(0x34 + r1); // lwz @ 0x80816CDC
    return;
}