/* Function at 0x8074845C, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8074845C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80748464
    *(0x24 + r1) = r0; // stw @ 0x80748468
    /* lis r0, 0x4330 */ // 0x8074846C
    /* lfd f3, 0(r5) */ // 0x80748470
    *(0x1c + r1) = r31; // stw @ 0x80748474
    r31 = r3;
    r4 = *(0xbc + r3); // lwz @ 0x8074847C
    *(0xc + r1) = r4; // stw @ 0x80748480
    /* lis r4, 0 */ // 0x80748484
    /* lfs f1, 0xdc(r3) */ // 0x80748488
    *(8 + r1) = r0; // stw @ 0x8074848C
    /* lfs f0, 0(r4) */ // 0x80748490
    /* lfd f2, 8(r1) */ // 0x80748494
    /* fsubs f0, f1, f0 */ // 0x80748498
    /* fsubs f2, f2, f3 */ // 0x8074849C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807484A0
    if (<=) goto 0x0x807484b8;
    /* li r4, 2 */ // 0x807484A8
    /* li r0, 1 */ // 0x807484AC
    *(0x108 + r3) = r4; // stw @ 0x807484B0
    *(0xb8 + r3) = r0; // stw @ 0x807484B4
    r4 = *(0x20 + r3); // lwz @ 0x807484B8
    r0 = *(0x44 + r4); // lbz @ 0x807484BC
    if (==) goto 0x0x807484e8;
    r0 = *(0x134 + r3); // lbz @ 0x807484C8
    if (!=) goto 0x0x80748518;
    /* lfs f1, 0x104(r31) */ // 0x807484D4
    r3 = r31;
    /* li r4, 0x2ab */ // 0x807484DC
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    /* b 0x80748518 */ // 0x807484E4
    r0 = *(0x134 + r3); // lbz @ 0x807484E8
    if (!=) goto 0x0x80748518;
    /* lfs f1, 0x104(r31) */ // 0x807484F4
    r3 = r31;
    /* li r4, 0x2ac */ // 0x807484FC
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    /* lis r4, 0 */ // 0x80748504
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8074850C
    /* li r4, 0x2b1 */ // 0x80748510
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x24 + r1); // lwz @ 0x80748518
    r31 = *(0x1c + r1); // lwz @ 0x8074851C
    return;
}