/* Function at 0x807A040C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807A040C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807A041C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807A0424
    r30 = r3;
    if (==) goto 0x0x807a0470;
    /* lis r5, 0 */ // 0x807A0430
    /* lis r4, 0 */ // 0x807A0434
    r5 = r5 + 0; // 0x807A0438
    *(0 + r3) = r5; // stw @ 0x807A043C
    /* lis r3, 0 */ // 0x807A0440
    /* li r0, 0 */ // 0x807A0444
    *(0 + r4) = r0; // stw @ 0x807A0448
    r3 = *(0 + r3); // lwz @ 0x807A044C
    FUN_807AABE0(r3); // bl 0x807AABE0
    /* lis r3, 0 */ // 0x807A0454
    r3 = *(0 + r3); // lwz @ 0x807A0458
    FUN_8078D17C(r3); // bl 0x8078D17C
    if (<=) goto 0x0x807a0470;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807A0474
    r30 = *(8 + r1); // lwz @ 0x807A0478
    r0 = *(0x14 + r1); // lwz @ 0x807A047C
    return;
}