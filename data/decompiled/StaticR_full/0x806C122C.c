/* Function at 0x806C122C, size=264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_806C122C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x806C1234
    *(0x34 + r1) = r0; // stw @ 0x806C1238
    /* stmw r27, 0x1c(r1) */ // 0x806C123C
    r31 = r3;
    r27 = r4;
    r5 = *(0 + r5); // lwz @ 0x806C1248
    r29 = *(0x240 + r4); // lwz @ 0x806C124C
    r3 = *(0 + r5); // lwz @ 0x806C1250
    r28 = *(0x278 + r3); // lwz @ 0x806C1254
    if (!=) goto 0x0x806c1268;
    /* li r28, 0 */ // 0x806C1260
    /* b 0x806c12bc */ // 0x806C1264
    /* lis r30, 0 */ // 0x806C1268
    r30 = r30 + 0; // 0x806C126C
    if (==) goto 0x0x806c12b8;
    r12 = *(0 + r28); // lwz @ 0x806C1274
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806C127C
    /* mtctr r12 */ // 0x806C1280
    /* bctrl  */ // 0x806C1284
    /* b 0x806c12a0 */ // 0x806C1288
    if (!=) goto 0x0x806c129c;
    /* li r0, 1 */ // 0x806C1294
    /* b 0x806c12ac */ // 0x806C1298
    r3 = *(0 + r3); // lwz @ 0x806C129C
    if (!=) goto 0x0x806c128c;
    /* li r0, 0 */ // 0x806C12A8
    if (==) goto 0x0x806c12b8;
    /* b 0x806c12bc */ // 0x806C12B4
    /* li r28, 0 */ // 0x806C12B8
    r3 = *(0x2af8 + r28); // lbz @ 0x806C12BC
    /* li r0, 4 */ // 0x806C12C0
    r30 = *(8 + r1); // lwz @ 0x806C12C4
    r30 = r0 rlwimi 0x18; // rlwimi
    r0 = r3 + 1; // 0x806C12CC
    *(0x2af8 + r28) = r0; // stb @ 0x806C12D0
    /* lis r3, 0 */ // 0x806C12D4
    r30 = r29 rlwimi 8; // rlwimi
    r30 = r0 rlwimi 0; // rlwimi
    r3 = *(0 + r3); // lwz @ 0x806C12E0
    r4 = r30;
    FUN_806EAA88(r3, r4); // bl 0x806EAA88
    *(0x2c60 + r28) = r30; // stw @ 0x806C12EC
    /* lis r4, 0 */ // 0x806C12F0
    r3 = r27;
    r4 = *(0 + r4); // lwz @ 0x806C12F8
    r0 = *(0x291c + r4); // lwz @ 0x806C12FC
    /* mulli r0, r0, 0x58 */ // 0x806C1300
    r4 = r4 + r0; // 0x806C1304
    r0 = *(0x59 + r4); // lbz @ 0x806C1308
    *(0x2c64 + r28) = r0; // stb @ 0x806C130C
    FUN_8064A384(); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806C1318
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x34 + r1); // lwz @ 0x806C1324
    return;
}