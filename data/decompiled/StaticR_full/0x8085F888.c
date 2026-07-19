/* Function at 0x8085F888, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_8085F888(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r9, 0 */ // 0x8085F890
    *(0x24 + r1) = r0; // stw @ 0x8085F894
    /* slwi r0, r4, 2 */ // 0x8085F898
    r9 = r9 + 0; // 0x8085F89C
    /* stmw r26, 8(r1) */ // 0x8085F8A0
    r28 = r5;
    r27 = r4;
    r29 = r6;
    r26 = r3;
    r30 = r7;
    r31 = r8;
    /* li r6, 0 */ // 0x8085F8BC
    /* lwzx r4, r9, r0 */ // 0x8085F8C0
    r5 = *(0x44 + r5); // lwz @ 0x8085F8C4
    FUN_805EAFB8(r6); // bl 0x805EAFB8
    /* lis r4, 0 */ // 0x8085F8CC
    *(0x4c + r26) = r30; // stw @ 0x8085F8D0
    r4 = r4 + 0; // 0x8085F8D4
    r3 = r26;
    *(0 + r26) = r4; // stw @ 0x8085F8DC
    r4 = r27;
    r6 = r31;
    /* li r5, 0 */ // 0x8085F8E8
    *(0x50 + r26) = r28; // stw @ 0x8085F8EC
    /* li r7, 0xc */ // 0x8085F8F0
    *(0x54 + r26) = r29; // stw @ 0x8085F8F4
    FUN_8085FB50(r6, r5, r7); // bl 0x8085FB50
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x8085F904
    return;
}