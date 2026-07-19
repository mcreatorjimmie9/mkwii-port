/* Function at 0x80698288, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80698288(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8069829C
    r3 = *(0 + r3); // lwz @ 0x806982A0
    r4 = *(0x14 + r31); // lwz @ 0x806982A4
    FUN_8068529C(); // bl 0x8068529C
    r3 = *(0 + r31); // lwz @ 0x806982AC
    /* li r0, 0 */ // 0x806982B0
    *(0x24 + r31) = r0; // stw @ 0x806982B4
    if (==) goto 0x0x806982c8;
    FUN_806860B4(); // bl 0x806860B4
    *(0x24 + r31) = r3; // stw @ 0x806982C4
    r3 = *(0x90 + r31); // lwz @ 0x806982C8
    FUN_80684590(); // bl 0x80684590
    if (==) goto 0x0x806982e4;
    r0 = *(0x24 + r31); // lwz @ 0x806982D8
    r0 = r0 | 2; // 0x806982DC
    *(0x24 + r31) = r0; // stw @ 0x806982E0
    /* lis r3, 0 */ // 0x806982E4
    r0 = *(0x24 + r31); // lwz @ 0x806982E8
    r3 = *(0 + r3); // lwz @ 0x806982EC
    /* clrlwi r0, r0, 0x1f */ // 0x806982F0
    r3 = *(0x54 + r3); // lwz @ 0x806982F4
    /* xori r30, r0, 1 */ // 0x806982F8
    r3 = *(0x24 + r3); // lwz @ 0x806982FC
    r12 = *(0 + r3); // lwz @ 0x80698300
    r12 = *(0xc + r12); // lwz @ 0x80698304
    /* mtctr r12 */ // 0x80698308
    /* bctrl  */ // 0x8069830C
    /* subfic r4, r3, 1 */ // 0x80698310
    r0 = r3 + -1; // 0x80698314
    r3 = r4 | r0; // 0x80698318
    r0 = *(0x30 + r31); // lwz @ 0x8069831C
    /* srwi r4, r3, 0x1f */ // 0x80698320
    /* xori r4, r4, 1 */ // 0x80698324
    /* lis r3, 0 */ // 0x80698328
    r6 = r30 & r4; // 0x8069832C
    /* cntlzw r0, r0 */ // 0x80698330
    /* neg r5, r6 */ // 0x80698334
    r3 = *(0 + r3); // lwz @ 0x80698338
    r5 = r5 | r6; // 0x8069833C
    /* srwi r4, r0, 5 */ // 0x80698340
    /* srwi r5, r5, 0x1f */ // 0x80698344
    r0 = *(0x4d + r3); // lbz @ 0x80698348
    r5 = r5 & r4; // 0x8069834C
    /* neg r4, r5 */ // 0x80698350
    r4 = r4 | r5; // 0x80698354
    /* srwi r4, r4, 0x1f */ // 0x80698358
    if (==) goto 0x0x80698368;
    *(0x4d + r3) = r4; // stb @ 0x80698364
    r0 = *(0x24 + r31); // lwz @ 0x80698368
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8069836C
    if (==) goto 0x0x8069838c;
    r3 = *(0xc + r31); // lwz @ 0x80698374
    FUN_80697D6C(); // bl 0x80697D6C
    if (!=) goto 0x0x8069838c;
    /* li r0, 5 */ // 0x80698384
    *(0xc + r31) = r0; // stw @ 0x80698388
    r0 = *(0x14 + r1); // lwz @ 0x8069838C
    r31 = *(0xc + r1); // lwz @ 0x80698390
    r30 = *(8 + r1); // lwz @ 0x80698394
    return;
}