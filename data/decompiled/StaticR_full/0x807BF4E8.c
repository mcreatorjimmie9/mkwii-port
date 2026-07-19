/* Function at 0x807BF4E8, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_807BF4E8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807BF4F4
    r27 = r3;
    r4 = *(4 + r3); // lwz @ 0x807BF4FC
    r3 = *(0 + r4); // lwz @ 0x807BF500
    r3 = *(0x10 + r3); // lwz @ 0x807BF504
    r3 = *(0x144 + r3); // lwz @ 0x807BF508
    r12 = *(0x34 + r3); // lwz @ 0x807BF50C
    r12 = *(0x44 + r12); // lwz @ 0x807BF510
    /* mtctr r12 */ // 0x807BF514
    /* bctrl  */ // 0x807BF518
    r4 = *(4 + r27); // lwz @ 0x807BF51C
    r29 = r3;
    r31 = *(8 + r4); // lwz @ 0x807BF524
    r3 = r31;
    FUN_807C24E8(r3); // bl 0x807C24E8
    if (==) goto 0x0x807bf5f8;
    /* lis r3, 0 */ // 0x807BF538
    /* li r28, 0 */ // 0x807BF53C
    r3 = *(0 + r3); // lwz @ 0x807BF540
    r3 = *(0x84 + r3); // lwz @ 0x807BF544
    if (==) goto 0x0x807bf560;
    FUN_807C5AAC(); // bl 0x807C5AAC
    if (==) goto 0x0x807bf560;
    /* li r28, 1 */ // 0x807BF55C
    r3 = *(0xc + r31); // lwz @ 0x807BF560
    r4 = *(4 + r27); // lwz @ 0x807BF564
    r12 = *(0 + r3); // lwz @ 0x807BF568
    r30 = *(4 + r4); // lwz @ 0x807BF56C
    r12 = *(0x14 + r12); // lwz @ 0x807BF570
    /* mtctr r12 */ // 0x807BF574
    /* bctrl  */ // 0x807BF578
    if (==) goto 0x0x807bf5b0;
    r12 = *(0 + r29); // lwz @ 0x807BF584
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x807BF58C
    /* mtctr r12 */ // 0x807BF590
    /* bctrl  */ // 0x807BF594
    if (==) goto 0x0x807bf5b0;
    if (!=) goto 0x0x807bf5b0;
    /* li r0, 1 */ // 0x807BF5A8
    *(8 + r27) = r0; // stb @ 0x807BF5AC
    r3 = *(0xc + r31); // lwz @ 0x807BF5B0
    r12 = *(0 + r3); // lwz @ 0x807BF5B4
    r12 = *(0x18 + r12); // lwz @ 0x807BF5B8
    /* mtctr r12 */ // 0x807BF5BC
    /* bctrl  */ // 0x807BF5C0
    if (==) goto 0x0x807bf5e0;
    /* li r0, 0 */ // 0x807BF5CC
    *(8 + r27) = r0; // stb @ 0x807BF5D0
    r3 = r30;
    /* li r4, 2 */ // 0x807BF5D8
    FUN_805AE794(r3, r4); // bl 0x805AE794
    r0 = *(8 + r27); // lbz @ 0x807BF5E0
    if (==) goto 0x0x807bf5f8;
    r3 = r30;
    /* li r4, 1 */ // 0x807BF5F0
    FUN_805AE794(r3, r4); // bl 0x805AE794
    r0 = *(0x24 + r1); // lwz @ 0x807BF5FC
    return;
}