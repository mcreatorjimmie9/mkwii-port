/* Function at 0x80826F64, size=284 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80826F64(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r4, 0 */ // 0x80826F6C
    *(0x34 + r1) = r0; // stw @ 0x80826F70
    /* stmw r25, 0x14(r1) */ // 0x80826F74
    r25 = r3;
    /* li r27, 0xff */ // 0x80826F7C
    /* lis r31, 0 */ // 0x80826F80
    r28 = *(0x20 + r3); // lbz @ 0x80826F84
    r29 = *(0 + r4); // lwz @ 0x80826F88
    /* b 0x80827060 */ // 0x80826F8C
    r4 = *(0x24 + r25); // lwz @ 0x80826F90
    r30 = r28 rlwinm 2; // rlwinm
    /* clrlwi r0, r27, 0x18 */ // 0x80826F98
    r3 = *(0x21 + r25); // lbz @ 0x80826F9C
    /* lbzx r26, r4, r30 */ // 0x80826FA0
    /* stbx r3, r4, r30 */ // 0x80826FA8
    *(0x21 + r25) = r28; // stb @ 0x80826FAC
    if (!=) goto 0x0x80826fbc;
    *(0x20 + r25) = r26; // stb @ 0x80826FB4
    /* b 0x80826fc8 */ // 0x80826FB8
    r3 = *(0x24 + r25); // lwz @ 0x80826FBC
    r0 = r27 rlwinm 2; // rlwinm
    /* stbx r26, r3, r0 */ // 0x80826FC4
    /* clrlwi r0, r28, 0x18 */ // 0x80826FC8
    r3 = *(0x28 + r25); // lwz @ 0x80826FCC
    /* mulli r0, r0, 0x24 */ // 0x80826FD0
    r6 = r3 + r0; // 0x80826FD4
    r7 = *(0x20 + r6); // lwz @ 0x80826FD8
    if (==) goto 0x0x80826ff0;
    r0 = r7 + 0x200; // 0x80826FE4
    if (<) goto 0x0x8082705c;
    r3 = *(0x18 + r6); // lwz @ 0x80826FF0
    /* li r8, 1 */ // 0x80826FF4
    r0 = *(0x24 + r25); // lwz @ 0x80826FF8
    /* mulli r5, r3, 0x24 */ // 0x80826FFC
    r9 = *(0 + r31); // lwz @ 0x80827000
    r3 = r0 + r30; // 0x80827004
    r4 = *(0x1c + r6); // lwz @ 0x80827008
    r0 = *(2 + r3); // lha @ 0x8082700C
    r3 = r9 + r5; // 0x80827010
    /* neg r5, r0 */ // 0x80827014
    r3 = r3 + 0x48; // 0x80827018
    FUN_80821D34(r3); // bl 0x80821D34
    if (==) goto 0x0x8082705c;
    r3 = *(0x24 + r25); // lwz @ 0x80827028
    /* clrlwi r0, r27, 0x18 */ // 0x8082702C
    /* lbzx r0, r3, r30 */ // 0x80827034
    *(0x21 + r25) = r0; // stb @ 0x80827038
    /* stbx r26, r3, r30 */ // 0x8082703C
    if (!=) goto 0x0x8082704c;
    *(0x20 + r25) = r28; // stb @ 0x80827044
    /* b 0x80827058 */ // 0x80827048
    r3 = *(0x24 + r25); // lwz @ 0x8082704C
    r0 = r27 rlwinm 2; // rlwinm
    /* stbx r28, r3, r0 */ // 0x80827054
    r27 = r28;
    r28 = r26;
    /* clrlwi r0, r28, 0x18 */ // 0x80827060
    if (!=) goto 0x0x80826f90;
    r0 = *(0x34 + r1); // lwz @ 0x80827070
    return;
}