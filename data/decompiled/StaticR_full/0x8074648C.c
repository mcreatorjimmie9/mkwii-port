/* Function at 0x8074648C, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8074648C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x80746494
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807464A4
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807464AC
    r29 = r5;
    r7 = *(0 + r7); // lwz @ 0x807464B4
    r0 = *(0xb68 + r7); // lwz @ 0x807464B8
    if (!=) goto 0x0x80746528;
    r0 = *(0xde + r3); // lbz @ 0x807464C4
    if (==) goto 0x0x80746528;
    r3 = r31;
    FUN_808ABA6C(r3); // bl 0x808ABA6C
    /* lis r5, 0 */ // 0x807464D8
    r4 = *(0xdc + r30); // lhz @ 0x807464DC
    r6 = *(0 + r5); // lwz @ 0x807464E0
    /* extsh r0, r3 */ // 0x807464E4
    /* slwi r7, r4, 1 */ // 0x807464E8
    r5 = *(0x10 + r6); // lwz @ 0x807464EC
    /* slwi r8, r0, 1 */ // 0x807464F0
    r6 = *(0x14 + r6); // lwz @ 0x807464F4
    r4 = *(0x10 + r5); // lwz @ 0x807464F8
    r3 = *(0x10 + r6); // lwz @ 0x807464FC
    /* lhax r4, r4, r7 */ // 0x80746500
    /* lhax r0, r3, r7 */ // 0x80746504
    r5 = *(0xc + r5); // lwz @ 0x80746508
    /* slwi r4, r4, 2 */ // 0x8074650C
    r3 = *(0xc + r6); // lwz @ 0x80746510
    /* slwi r0, r0, 2 */ // 0x80746514
    /* lwzx r4, r5, r4 */ // 0x80746518
    /* lwzx r3, r3, r0 */ // 0x8074651C
    /* lhax r29, r4, r8 */ // 0x80746520
    /* lhax r6, r3, r8 */ // 0x80746524
    if (==) goto 0x0x80746544;
    if (==) goto 0x0x8074654c;
    if (==) goto 0x0x807465b0;
    /* b 0x80746610 */ // 0x80746540
    r3 = r29;
    /* b 0x80746614 */ // 0x80746548
    r0 = *(0xb4 + r30); // lhz @ 0x8074654C
    if (==) goto 0x0x80746610;
    r3 = r31;
    /* li r4, 0 */ // 0x8074655C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 1 */ // 0x80746564
    *(0xb8 + r30) = r0; // stw @ 0x80746568
    r3 = r31;
    FUN_8061DA88(r4, r3); // bl 0x8061DA88
    /* lfs f0, 0(r3) */ // 0x80746574
    /* stfs f0, 0x11c(r30) */ // 0x80746578
    /* lfs f0, 4(r3) */ // 0x8074657C
    /* stfs f0, 0x120(r30) */ // 0x80746580
    /* lfs f0, 8(r3) */ // 0x80746584
    r3 = r31;
    /* stfs f0, 0x124(r30) */ // 0x8074658C
    FUN_8061E584(r3); // bl 0x8061E584
    /* lfs f0, 0(r3) */ // 0x80746594
    /* stfs f0, 0x128(r30) */ // 0x80746598
    /* lfs f0, 4(r3) */ // 0x8074659C
    /* stfs f0, 0x12c(r30) */ // 0x807465A0
    /* lfs f0, 8(r3) */ // 0x807465A4
    /* stfs f0, 0x130(r30) */ // 0x807465A8
    /* b 0x80746610 */ // 0x807465AC
    r0 = *(0xb4 + r30); // lhz @ 0x807465B0
    if (==) goto 0x0x80746610;
}