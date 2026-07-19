/* Function at 0x808E4954, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_808E4954(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808E4970
    *(0x10 + r1) = r28; // stw @ 0x808E4974
    r0 = *(8 + r3); // lwz @ 0x808E4978
    if (!=) goto 0x0x808e4a6c;
    r28 = *(0x644 + r4); // lwz @ 0x808E4984
    /* lis r29, 0 */ // 0x808E4988
    *(0x1750 + r3) = r28; // stw @ 0x808E498C
    r3 = *(0 + r29); // lwz @ 0x808E4990
    r3 = *(0x98 + r3); // lwz @ 0x808E4994
    r3 = *(0x150 + r3); // lwz @ 0x808E4998
    FUN_80662338(); // bl 0x80662338
    if (==) goto 0x0x808e49c4;
    r3 = *(0 + r29); // lwz @ 0x808E49A8
    /* mulli r0, r28, 0x14 */ // 0x808E49AC
    /* lis r4, 0 */ // 0x808E49B0
    r3 = *(0x98 + r3); // lwz @ 0x808E49B4
    r4 = r4 + 0; // 0x808E49B8
    /* lwzx r0, r4, r0 */ // 0x808E49BC
    *(0x150 + r3) = r0; // stw @ 0x808E49C0
    /* lis r29, 0 */ // 0x808E49C4
    r3 = *(0 + r29); // lwz @ 0x808E49C8
    r3 = *(0 + r3); // lwz @ 0x808E49CC
    r3 = *(0 + r3); // lwz @ 0x808E49D0
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808e4a14;
    r0 = *(0x1750 + r30); // lwz @ 0x808E49E0
    /* lis r7, 0 */ // 0x808E49E4
    /* lis r4, 0 */ // 0x808E49E8
    r3 = r30;
    /* mulli r0, r0, 0x14 */ // 0x808E49F0
    r7 = r7 + 0; // 0x808E49F4
    r6 = *(0 + r4); // lwz @ 0x808E49F8
    r5 = r31;
    /* li r4, 0x79 */ // 0x808E4A00
    /* lwzx r0, r7, r0 */ // 0x808E4A04
    *(0x1758 + r6) = r0; // stw @ 0x808E4A08
    FUN_808B38C8(r5, r4); // bl 0x808B38C8
    /* b 0x808e4a6c */ // 0x808E4A10
    r3 = *(0 + r29); // lwz @ 0x808E4A14
    r3 = *(0 + r3); // lwz @ 0x808E4A18
    r3 = *(0x250 + r3); // lwz @ 0x808E4A1C
    if (==) goto 0x0x808e4a5c;
    /* lis r28, 0 */ // 0x808E4A28
    r28 = r28 + 0; // 0x808E4A2C
    if (==) goto 0x0x808e4a5c;
    r12 = *(0 + r3); // lwz @ 0x808E4A34
    r12 = *(0x60 + r12); // lwz @ 0x808E4A38
    /* mtctr r12 */ // 0x808E4A3C
    /* bctrl  */ // 0x808E4A40
    /* b 0x808e4a54 */ // 0x808E4A44
    if (==) goto 0x0x808e4a5c;
    r3 = *(0 + r3); // lwz @ 0x808E4A50
    if (!=) goto 0x0x808e4a48;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x79 */ // 0x808E4A64
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808E4A6C
    r31 = *(0x1c + r1); // lwz @ 0x808E4A70
    r30 = *(0x18 + r1); // lwz @ 0x808E4A74
    r29 = *(0x14 + r1); // lwz @ 0x808E4A78
    r28 = *(0x10 + r1); // lwz @ 0x808E4A7C
    return;
}