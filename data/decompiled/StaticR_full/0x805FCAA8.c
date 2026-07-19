/* Function at 0x805FCAA8, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805FCAA8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805FCAC4
    r28 = r3;
    FUN_805FB5E4(); // bl 0x805FB5E4
    /* lis r3, 0 */ // 0x805FCAD0
    r31 = r28 + 0x238; // 0x805FCAD4
    r3 = r3 + 0; // 0x805FCAD8
    *(0xc + r28) = r3; // stw @ 0x805FCADC
    r3 = r31;
    r4 = r29;
    /* li r5, 0 */ // 0x805FCAE8
    FUN_806200C4(r3, r3, r4, r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x805FCAF0
    r30 = r28 + 0x2cc; // 0x805FCAF4
    r3 = r3 + 0; // 0x805FCAF8
    *(0xc + r31) = r3; // stw @ 0x805FCAFC
    r3 = r30;
    r4 = r29;
    /* li r5, 0 */ // 0x805FCB08
    FUN_806200C4(r3, r3, r4, r5); // bl 0x806200C4
    /* lis r4, 0 */ // 0x805FCB10
    r3 = r28;
    r4 = r4 + 0; // 0x805FCB18
    *(0xc + r30) = r4; // stw @ 0x805FCB1C
    r31 = *(0x1c + r1); // lwz @ 0x805FCB20
    r30 = *(0x18 + r1); // lwz @ 0x805FCB24
    r29 = *(0x14 + r1); // lwz @ 0x805FCB28
    r28 = *(0x10 + r1); // lwz @ 0x805FCB2C
    r0 = *(0x24 + r1); // lwz @ 0x805FCB30
    return;
}