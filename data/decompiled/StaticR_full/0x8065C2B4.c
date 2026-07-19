/* Function at 0x8065C2B4, size=200 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_8065C2B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r26 */
    /* slwi r0, r4, 2 */ // 0x8065C2C0
    /* stmw r26, 0xd8(r1) */ // 0x8065C2C4
    r30 = r0 + r4; // 0x8065C2C8
    r26 = r3;
    r27 = r4;
    r29 = r3 + 0x268; // 0x8065C2D4
    /* li r28, 0 */ // 0x8065C2D8
    /* slwi r31, r30, 2 */ // 0x8065C2DC
    if (>=) goto 0x0x8065c310;
    r4 = r26 + r31; // 0x8065C2E8
    r3 = r29;
    r4 = *(0x1978 + r4); // lwz @ 0x8065C2F0
    FUN_8065A904(r3); // bl 0x8065A904
    r28 = r28 + 1; // 0x8065C2F8
    r31 = r31 + 4; // 0x8065C2FC
    r29 = r29 + 0x264; // 0x8065C304
    r30 = r30 + 1; // 0x8065C308
    if (<) goto 0x0x8065c2e0;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x8065C318
    r0 = r27 + 1; // 0x8065C31C
    *(8 + r1) = r0; // stw @ 0x8065C320
    r3 = *(0 + r3); // lwz @ 0x8065C324
    r3 = *(0 + r3); // lwz @ 0x8065C328
    r3 = *(0x404 + r3); // lwz @ 0x8065C32C
    FUN_80659444(); // bl 0x80659444
    /* lis r4, 0x6666 */ // 0x8065C334
    r0 = r3 + -1; // 0x8065C338
    r4 = r4 + 0x6667; // 0x8065C33C
    r3 = r26 + 0x176c; // 0x8065C340
    /* mulhw r0, r4, r0 */ // 0x8065C344
    /* li r4, 0x7d9 */ // 0x8065C34C
    r0 = r0 >> 1; // srawi
    /* srwi r6, r0, 0x1f */ // 0x8065C354
    r6 = r0 + r6; // 0x8065C358
    r0 = r6 + 1; // 0x8065C35C
    *(0xc + r1) = r0; // stw @ 0x8065C360
    FUN_806A0A34(); // bl 0x806A0A34
    r0 = *(0xf4 + r1); // lwz @ 0x8065C36C
    return;
}