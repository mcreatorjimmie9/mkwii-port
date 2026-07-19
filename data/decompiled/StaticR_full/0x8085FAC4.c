/* Function at 0x8085FAC4, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_8085FAC4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r8, 0 */ // 0x8085FACC
    *(0x24 + r1) = r0; // stw @ 0x8085FAD0
    /* slwi r0, r4, 2 */ // 0x8085FAD4
    r8 = r8 + 0; // 0x8085FAD8
    /* stmw r26, 8(r1) */ // 0x8085FADC
    r28 = r5;
    r27 = r4;
    r29 = r6;
    r26 = r3;
    r30 = r7;
    r31 = r9;
    /* li r4, 1 */ // 0x8085FAF8
    /* li r6, 0 */ // 0x8085FAFC
    /* lwzx r5, r8, r0 */ // 0x8085FB00
    FUN_805EB278(r4, r6); // bl 0x805EB278
    /* lis r4, 0 */ // 0x8085FB08
    *(0x4c + r26) = r30; // stw @ 0x8085FB0C
    r4 = r4 + 0; // 0x8085FB10
    r3 = r26;
    *(0 + r26) = r4; // stw @ 0x8085FB18
    r4 = r27;
    r6 = r31;
    /* li r5, 0 */ // 0x8085FB24
    *(0x50 + r26) = r28; // stw @ 0x8085FB28
    /* li r7, 0xc */ // 0x8085FB2C
    *(0x54 + r26) = r29; // stw @ 0x8085FB30
    FUN_8085FB50(r6, r5, r7); // bl 0x8085FB50
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x8085FB40
    return;
}