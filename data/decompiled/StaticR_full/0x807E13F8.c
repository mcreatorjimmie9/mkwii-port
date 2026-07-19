/* Function at 0x807E13F8, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807E13F8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x807E1408
    *(0x14 + r1) = r29; // stw @ 0x807E1410
    *(0x10 + r1) = r28; // stw @ 0x807E1414
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x807E141C
    r12 = *(0x30 + r12); // lwz @ 0x807E1420
    /* mtctr r12 */ // 0x807E1424
    /* bctrl  */ // 0x807E1428
    /* lis r4, 0x101 */ // 0x807E142C
    r0 = *(0x20 + r3); // lwz @ 0x807E1430
    r3 = r4 + 0x101; // 0x807E1434
    /* andc. r0, r3, r0 */ // 0x807E1438
    if (!=) goto 0x0x807e1458;
    /* lis r3, 0 */ // 0x807E1440
    r3 = *(0 + r3); // lwz @ 0x807E1444
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807e1458;
    /* li r31, 1 */ // 0x807E1454
    if (==) goto 0x0x807e1510;
    r30 = r28 + 0x14c; // 0x807E1460
    /* li r29, 0 */ // 0x807E1464
    r31 = r30;
    r3 = *(0 + r31); // lwz @ 0x807E146C
    r12 = *(0 + r3); // lwz @ 0x807E1470
    r12 = *(0x10 + r12); // lwz @ 0x807E1474
    /* mtctr r12 */ // 0x807E1478
    /* bctrl  */ // 0x807E147C
    r29 = r29 + 1; // 0x807E1480
    r31 = r31 + 4; // 0x807E1484
    if (<) goto 0x0x807e146c;
    r3 = *(0x15c + r28); // lwz @ 0x807E1490
    r12 = *(0 + r3); // lwz @ 0x807E1494
    r12 = *(0x10 + r12); // lwz @ 0x807E1498
    /* mtctr r12 */ // 0x807E149C
    /* bctrl  */ // 0x807E14A0
    r3 = *(0x164 + r28); // lwz @ 0x807E14A4
    r12 = *(0 + r3); // lwz @ 0x807E14A8
    r12 = *(0x10 + r12); // lwz @ 0x807E14AC
    /* mtctr r12 */ // 0x807E14B0
    /* bctrl  */ // 0x807E14B4
    r3 = *(0x158 + r28); // lwz @ 0x807E14B8
    r12 = *(0 + r3); // lwz @ 0x807E14BC
    r12 = *(0x10 + r12); // lwz @ 0x807E14C0
    /* mtctr r12 */ // 0x807E14C4
    /* bctrl  */ // 0x807E14C8
    r3 = *(0x160 + r28); // lwz @ 0x807E14CC
    r12 = *(0 + r3); // lwz @ 0x807E14D0
    r12 = *(0x10 + r12); // lwz @ 0x807E14D4
    /* mtctr r12 */ // 0x807E14D8
    /* bctrl  */ // 0x807E14DC
    /* li r29, 0 */ // 0x807E14E0
    r3 = *(0 + r30); // lwz @ 0x807E14E4
    r12 = *(0 + r3); // lwz @ 0x807E14E8
    r12 = *(0x10 + r12); // lwz @ 0x807E14EC
    /* mtctr r12 */ // 0x807E14F0
    /* bctrl  */ // 0x807E14F4
    r29 = r29 + 1; // 0x807E14F8
    r30 = r30 + 4; // 0x807E14FC
    if (<) goto 0x0x807e14e4;
    /* li r3, 1 */ // 0x807E1508
    /* b 0x807e1514 */ // 0x807E150C
    /* li r3, 0 */ // 0x807E1510
    r0 = *(0x24 + r1); // lwz @ 0x807E1514
    r31 = *(0x1c + r1); // lwz @ 0x807E1518
    r30 = *(0x18 + r1); // lwz @ 0x807E151C
    r29 = *(0x14 + r1); // lwz @ 0x807E1520
    r28 = *(0x10 + r1); // lwz @ 0x807E1524
    return;
}