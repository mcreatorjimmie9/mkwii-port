/* Function at 0x8085F9D0, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_8085F9D0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r8, 0 */ // 0x8085F9D8
    *(0x24 + r1) = r0; // stw @ 0x8085F9DC
    /* slwi r0, r4, 2 */ // 0x8085F9E0
    r8 = r8 + 0; // 0x8085F9E4
    /* stmw r27, 0xc(r1) */ // 0x8085F9E8
    r29 = r5;
    r28 = r4;
    r30 = r6;
    r27 = r3;
    r31 = r7;
    /* li r4, 1 */ // 0x8085FA00
    /* li r6, 0 */ // 0x8085FA04
    /* lwzx r5, r8, r0 */ // 0x8085FA08
    FUN_805EB278(r4, r6); // bl 0x805EB278
    r0 = r28 + -3; // 0x8085FA10
    /* lis r3, 0 */ // 0x8085FA14
    *(0x50 + r27) = r29; // stw @ 0x8085FA1C
    r3 = r3 + 0; // 0x8085FA20
    *(0 + r27) = r3; // stw @ 0x8085FA24
    *(0x54 + r27) = r30; // stw @ 0x8085FA28
    if (<=) goto 0x0x8085fa38;
    if (>) goto 0x0x8085fa54;
    /* clrlwi r0, r31, 0x18 */ // 0x8085FA38
    /* lis r3, 0 */ // 0x8085FA3C
    /* mulli r0, r0, 0xf0 */ // 0x8085FA40
    r3 = *(0 + r3); // lwz @ 0x8085FA44
    r3 = r3 + r0; // 0x8085FA48
    r0 = r3 + 0xc2c; // 0x8085FA4C
    *(0x4c + r27) = r0; // stw @ 0x8085FA50
    r3 = r27;
    r4 = r28;
    /* li r5, 0 */ // 0x8085FA5C
    /* li r6, 0 */ // 0x8085FA60
    /* li r7, 0xc */ // 0x8085FA64
    FUN_8085FB50(r3, r4, r5, r6, r7); // bl 0x8085FB50
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x8085FA74
    return;
}