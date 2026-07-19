/* Function at 0x806C1334, size=264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_806C1334(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x806C133C
    *(0x34 + r1) = r0; // stw @ 0x806C1340
    /* stmw r27, 0x1c(r1) */ // 0x806C1344
    r31 = r3;
    r27 = r4;
    r5 = *(0 + r5); // lwz @ 0x806C1350
    r29 = *(0x240 + r4); // lwz @ 0x806C1354
    r3 = *(0 + r5); // lwz @ 0x806C1358
    r28 = *(0x278 + r3); // lwz @ 0x806C135C
    if (!=) goto 0x0x806c1370;
    /* li r28, 0 */ // 0x806C1368
    /* b 0x806c13c4 */ // 0x806C136C
    /* lis r30, 0 */ // 0x806C1370
    r30 = r30 + 0; // 0x806C1374
    if (==) goto 0x0x806c13c0;
    r12 = *(0 + r28); // lwz @ 0x806C137C
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806C1384
    /* mtctr r12 */ // 0x806C1388
    /* bctrl  */ // 0x806C138C
    /* b 0x806c13a8 */ // 0x806C1390
    if (!=) goto 0x0x806c13a4;
    /* li r0, 1 */ // 0x806C139C
    /* b 0x806c13b4 */ // 0x806C13A0
    r3 = *(0 + r3); // lwz @ 0x806C13A4
    if (!=) goto 0x0x806c1394;
    /* li r0, 0 */ // 0x806C13B0
    if (==) goto 0x0x806c13c0;
    /* b 0x806c13c4 */ // 0x806C13BC
    /* li r28, 0 */ // 0x806C13C0
    r3 = *(0x2af8 + r28); // lbz @ 0x806C13C4
    /* li r0, 1 */ // 0x806C13C8
    r30 = *(8 + r1); // lwz @ 0x806C13CC
    r30 = r0 rlwimi 0x18; // rlwimi
    r0 = r3 + 1; // 0x806C13D4
    *(0x2af8 + r28) = r0; // stb @ 0x806C13D8
    /* lis r3, 0 */ // 0x806C13DC
    r30 = r29 rlwimi 8; // rlwimi
    r30 = r0 rlwimi 0; // rlwimi
    r3 = *(0 + r3); // lwz @ 0x806C13E8
    r4 = r30;
    FUN_806EAA88(r3, r4); // bl 0x806EAA88
    *(0x2c60 + r28) = r30; // stw @ 0x806C13F4
    /* lis r4, 0 */ // 0x806C13F8
    r3 = r27;
    r4 = *(0 + r4); // lwz @ 0x806C1400
    r0 = *(0x291c + r4); // lwz @ 0x806C1404
    /* mulli r0, r0, 0x58 */ // 0x806C1408
    r4 = r4 + r0; // 0x806C140C
    r0 = *(0x59 + r4); // lbz @ 0x806C1410
    *(0x2c64 + r28) = r0; // stb @ 0x806C1414
    FUN_8064A384(); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806C1420
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x34 + r1); // lwz @ 0x806C142C
    return;
}