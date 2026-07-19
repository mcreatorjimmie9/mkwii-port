/* Function at 0x806608D4, size=272 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_806608D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* slwi r0, r4, 4 */ // 0x806608E0
    /* stmw r25, 0x14(r1) */ // 0x806608E4
    r31 = r3 + r0; // 0x806608E8
    r29 = r3;
    r30 = r4;
    r26 = *(4 + r31); // lwz @ 0x806608F4
    r27 = *(0x264 + r3); // lwz @ 0x806608F8
    r25 = *(8 + r31); // lwz @ 0x80660900
    if (<=) goto 0x0x80660914;
    if (==) goto 0x0x80660958;
    /* b 0x80660988 */ // 0x80660910
    /* slwi r0, r26, 2 */ // 0x80660914
    /* clrlwi r4, r25, 0x10 */ // 0x80660918
    r28 = r27 + r0; // 0x8066091C
    r3 = *(0x54 + r28); // lwz @ 0x80660920
    FUN_805ACCB0(); // bl 0x805ACCB0
    /* lis r4, 0 */ // 0x80660928
    r7 = *(0xb8 + r3); // lwz @ 0x8066092C
    r6 = *(0 + r4); // lwz @ 0x80660930
    /* clrlwi r4, r26, 0x18 */ // 0x80660934
    /* li r5, 0 */ // 0x80660938
    r3 = *(0x90 + r6); // lwz @ 0x8066093C
    /* li r6, 0 */ // 0x80660940
    FUN_80684DF4(r5, r6); // bl 0x80684DF4
    r3 = *(0x54 + r28); // lwz @ 0x80660948
    /* clrlwi r4, r25, 0x10 */ // 0x8066094C
    FUN_805ACC90(r6); // bl 0x805ACC90
    /* b 0x80660988 */ // 0x80660954
    /* lis r3, 0 */ // 0x80660958
    /* clrlwi r5, r25, 0x18 */ // 0x8066095C
    r3 = *(0 + r3); // lwz @ 0x80660960
    /* li r4, 1 */ // 0x80660964
    /* li r6, -1 */ // 0x80660968
    r3 = *(0x90 + r3); // lwz @ 0x8066096C
    FUN_80684DBC(r4, r6); // bl 0x80684DBC
    /* slwi r0, r26, 2 */ // 0x80660974
    /* clrlwi r4, r25, 0x10 */ // 0x80660978
    r3 = r27 + r0; // 0x8066097C
    r3 = *(0x54 + r3); // lwz @ 0x80660980
    FUN_805ACC90(); // bl 0x805ACC90
    /* li r0, 0xd */ // 0x80660988
    *(0x94 + r27) = r0; // stw @ 0x8066098C
    /* b 0x806609bc */ // 0x80660990
    r0 = *(0x10 + r31); // lwz @ 0x80660994
    r30 = r30 + 1; // 0x80660998
    *(0 + r31) = r0; // stw @ 0x8066099C
    r0 = *(0x14 + r31); // lwz @ 0x806609A0
    *(4 + r31) = r0; // stw @ 0x806609A4
    r0 = *(0x18 + r31); // lwz @ 0x806609A8
    *(8 + r31) = r0; // stw @ 0x806609AC
    r0 = *(0x1c + r31); // lbz @ 0x806609B0
    *(0xc + r31) = r0; // stb @ 0x806609B4
    r31 = r31 + 0x10; // 0x806609B8
    r3 = *(0x260 + r29); // lwz @ 0x806609BC
    r0 = r3 + -1; // 0x806609C0
    if (<) goto 0x0x80660994;
    *(0x260 + r29) = r0; // stw @ 0x806609CC
    r0 = *(0x34 + r1); // lwz @ 0x806609D4
    return;
}