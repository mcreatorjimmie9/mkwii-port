/* Function at 0x807F1544, size=104 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807F1544(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x54 + r1) = r29; // stw @ 0x807F1558
    r29 = r3;
    r30 = *(0x10 + r3); // lwz @ 0x807F1560
    if (==) goto 0x0x807f1608;
    r3 = *(0x10 + r30); // lwz @ 0x807F156C
    r3 = *(0 + r3); // lwz @ 0x807F1570
    if (==) goto 0x0x807f158c;
    r3 = r3 + 0xc; // 0x807F157C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x807f1594 */ // 0x807F1588
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x807F1594
    /* li r31, 0 */ // 0x807F1598
    /* stfs f0, 0x24(r1) */ // 0x807F159C
    /* lfs f0, 0x34(r29) */ // 0x807F15A0
    /* stfs f0, 0x34(r1) */ // 0x807F15A4
    /* lfs f0, 0x38(r29) */ // 0x807F15A8
}