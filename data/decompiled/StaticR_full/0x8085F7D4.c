/* Function at 0x8085F7D4, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_8085F7D4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r8, 0 */ // 0x8085F7DC
    *(0x24 + r1) = r0; // stw @ 0x8085F7E0
    /* slwi r0, r4, 2 */ // 0x8085F7E4
    r8 = r8 + 0; // 0x8085F7E8
    /* stmw r27, 0xc(r1) */ // 0x8085F7EC
    r29 = r5;
    r28 = r4;
    r30 = r6;
    r27 = r3;
    r31 = r7;
    /* li r6, 0 */ // 0x8085F804
    /* lwzx r4, r8, r0 */ // 0x8085F808
    r5 = *(0x44 + r5); // lwz @ 0x8085F80C
    FUN_805EAFB8(r6); // bl 0x805EAFB8
    r0 = r28 + -3; // 0x8085F814
    /* lis r3, 0 */ // 0x8085F818
    *(0x50 + r27) = r29; // stw @ 0x8085F820
    r3 = r3 + 0; // 0x8085F824
    *(0 + r27) = r3; // stw @ 0x8085F828
    *(0x54 + r27) = r30; // stw @ 0x8085F82C
    if (<=) goto 0x0x8085f83c;
    if (>) goto 0x0x8085f858;
    /* clrlwi r0, r31, 0x18 */ // 0x8085F83C
    /* lis r3, 0 */ // 0x8085F840
    /* mulli r0, r0, 0xf0 */ // 0x8085F844
    r3 = *(0 + r3); // lwz @ 0x8085F848
    r3 = r3 + r0; // 0x8085F84C
    r0 = r3 + 0xc2c; // 0x8085F850
    *(0x4c + r27) = r0; // stw @ 0x8085F854
    r3 = r27;
    r4 = r28;
    /* li r5, 0 */ // 0x8085F860
    /* li r6, 0 */ // 0x8085F864
    /* li r7, 0xc */ // 0x8085F868
    FUN_8085FB50(r3, r4, r5, r6, r7); // bl 0x8085FB50
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x8085F878
    return;
}