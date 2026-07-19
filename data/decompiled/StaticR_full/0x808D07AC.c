/* Function at 0x808D07AC, size=156 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_808D07AC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r25 */
    /* li r0, 0 */ // 0x808D07B8
    /* stmw r25, 0x84(r1) */ // 0x808D07BC
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r4 = r25;
    *(0x644 + r3) = r0; // stw @ 0x808D07D0
    FUN_8064E324(r4, r3); // bl 0x8064E324
    FUN_808CFA50(r4, r3); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808D07E0
    /* lis r3, 0 */ // 0x808D07E4
    r3 = r3 + 0; // 0x808D07EC
    r6 = r3 + 0x49; // 0x808D07F0
    if (>) goto 0x0x808d07fc;
    r6 = r3 + 0x38; // 0x808D07F8
    /* lis r3, 0 */ // 0x808D07FC
    /* li r7, 0 */ // 0x808D0800
    r31 = r3 + 0; // 0x808D0804
    r4 = r31 + 0x5c; // 0x808D080C
    r5 = r31 + 0x64; // 0x808D0810
    FUN_8064E36C(r7, r3, r4, r5); // bl 0x8064E36C
    r3 = r25;
    /* li r4, 3 */ // 0x808D081C
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    r29 = r25;
    r30 = r25 + 0x174; // 0x808D0828
    /* li r28, 0 */ // 0x808D082C
    r6 = r28;
    r5 = r31 + 0x78; // 0x808D0838
    /* li r4, 0x14 */ // 0x808D083C
    /* crclr cr1eq */ // 0x808D0840
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}