/* Function at 0x80607520, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80607520(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80607534
    r29 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060753C
    r3 = *(4 + r5); // lwz @ 0x80607540
    r0 = *(0xc + r3); // lwz @ 0x80607544
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80607548
    if (!=) goto 0x0x806075c8;
    r0 = *(0x14 + r3); // lwz @ 0x80607550
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80607554
    if (==) goto 0x0x80607564;
    if (==) goto 0x0x806075bc;
    r4 = *(4 + r5); // lwz @ 0x80607564
    r3 = r29;
    r0 = *(0xc + r4); // lwz @ 0x8060756C
    r0 = r0 | 0x200; // 0x80607570
    *(0xc + r4) = r0; // stw @ 0x80607574
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lis r30, 0 */ // 0x8060757C
    /* lfs f0, 0(r30) */ // 0x80607580
    r31 = r30 + 0; // 0x80607584
    /* stfs f0, 0xb0(r3) */ // 0x80607588
    /* lfs f0, 4(r31) */ // 0x8060758C
    /* stfs f0, 0xb4(r3) */ // 0x80607590
    /* lfs f0, 8(r31) */ // 0x80607594
    /* stfs f0, 0xb8(r3) */ // 0x80607598
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0(r30) */ // 0x806075A4
    /* stfs f0, 0xc8(r3) */ // 0x806075A8
    /* lfs f0, 4(r31) */ // 0x806075AC
    /* stfs f0, 0xcc(r3) */ // 0x806075B0
    /* lfs f0, 8(r31) */ // 0x806075B4
    /* stfs f0, 0xd0(r3) */ // 0x806075B8
    r3 = r29;
    /* li r4, 5 */ // 0x806075C0
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r0 = *(0x24 + r1); // lwz @ 0x806075C8
    r31 = *(0x1c + r1); // lwz @ 0x806075CC
    r30 = *(0x18 + r1); // lwz @ 0x806075D0
    r29 = *(0x14 + r1); // lwz @ 0x806075D4
    return;
}