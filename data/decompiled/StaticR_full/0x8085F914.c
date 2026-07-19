/* Function at 0x8085F914, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_8085F914(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r8, 0 */ // 0x8085F91C
    *(0x24 + r1) = r0; // stw @ 0x8085F920
    /* slwi r0, r4, 2 */ // 0x8085F924
    r8 = r8 + 0; // 0x8085F928
    /* stmw r26, 8(r1) */ // 0x8085F92C
    r29 = r6;
    r27 = r4;
    /* lis r6, 0 */ // 0x8085F938
    r28 = r5;
    r26 = r3;
    r30 = r7;
    r31 = r9;
    r5 = *(0 + r6); // lwz @ 0x8085F94C
    /* li r6, 0x100 */ // 0x8085F950
    /* lwzx r4, r8, r0 */ // 0x8085F954
    FUN_805EAFB8(r6); // bl 0x805EAFB8
    r0 = r27 + -3; // 0x8085F95C
    /* lis r3, 0 */ // 0x8085F960
    *(0x50 + r26) = r28; // stw @ 0x8085F968
    r3 = r3 + 0; // 0x8085F96C
    *(0 + r26) = r3; // stw @ 0x8085F970
    *(0x54 + r26) = r29; // stw @ 0x8085F974
    if (<=) goto 0x0x8085f984;
    if (>) goto 0x0x8085f9a0;
    /* clrlwi r0, r30, 0x18 */ // 0x8085F984
    /* lis r3, 0 */ // 0x8085F988
    /* mulli r0, r0, 0xf0 */ // 0x8085F98C
    r3 = *(0 + r3); // lwz @ 0x8085F990
    r3 = r3 + r0; // 0x8085F994
    r0 = r3 + 0xc2c; // 0x8085F998
    *(0x4c + r26) = r0; // stw @ 0x8085F99C
    r3 = r26;
    r4 = r27;
    r7 = r31;
    /* li r5, 0 */ // 0x8085F9AC
    /* li r6, 0 */ // 0x8085F9B0
    FUN_8085FB50(r3, r4, r7, r5, r6); // bl 0x8085FB50
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x8085F9C0
    return;
}