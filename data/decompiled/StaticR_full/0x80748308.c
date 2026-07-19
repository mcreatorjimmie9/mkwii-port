/* Function at 0x80748308, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80748308(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80748318
    r31 = r31 + 0; // 0x8074831C
    *(8 + r1) = r30; // stw @ 0x80748320
    r30 = r3;
    r0 = *(0x108 + r3); // lwz @ 0x80748328
    if (!=) goto 0x0x80748368;
    /* lfs f2, 0x104(r3) */ // 0x80748334
    /* lfs f1, 0xd4(r3) */ // 0x80748338
    /* lfs f0, 0xd0(r3) */ // 0x8074833C
    /* fadds f1, f2, f1 */ // 0x80748340
    /* stfs f1, 0x104(r3) */ // 0x80748344
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80748348
    if (<=) goto 0x0x807483dc;
    /* li r4, 1 */ // 0x80748350
    /* li r0, 2 */ // 0x80748354
    /* stfs f0, 0x104(r3) */ // 0x80748358
    *(0x108 + r3) = r4; // stw @ 0x8074835C
    *(0xb8 + r3) = r0; // stw @ 0x80748360
    /* b 0x807483dc */ // 0x80748364
    if (!=) goto 0x0x807483dc;
    /* lfs f2, 0x104(r3) */ // 0x80748370
    /* lfs f1, 0xd4(r3) */ // 0x80748374
    /* lfd f0, 0x40(r31) */ // 0x80748378
    /* fsubs f1, f2, f1 */ // 0x8074837C
    /* stfs f1, 0x104(r3) */ // 0x80748380
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80748384
    if (>=) goto 0x0x80748394;
    /* lfs f0, 0x48(r31) */ // 0x8074838C
    /* stfs f0, 0x104(r3) */ // 0x80748390
    r0 = *(0x10c + r3); // lbz @ 0x80748394
    if (==) goto 0x0x807483dc;
    /* lfs f1, 0(r31) */ // 0x807483A0
    /* stfs f1, 0x104(r3) */ // 0x807483A4
    r3 = *(0x20 + r3); // lwz @ 0x807483A8
    r0 = *(0x44 + r3); // lbz @ 0x807483AC
    if (==) goto 0x0x807483cc;
    r12 = *(0 + r3); // lwz @ 0x807483B8
    /* li r4, 0 */ // 0x807483BC
    r12 = *(0x10 + r12); // lwz @ 0x807483C0
    /* mtctr r12 */ // 0x807483C4
    /* bctrl  */ // 0x807483C8
    /* li r3, 1 */ // 0x807483CC
    /* li r0, 0 */ // 0x807483D0
    *(0x108 + r30) = r3; // stw @ 0x807483D4
    *(0xb8 + r30) = r0; // stw @ 0x807483D8
    r3 = *(0x20 + r30); // lwz @ 0x807483DC
    r0 = *(0x44 + r3); // lbz @ 0x807483E0
    if (==) goto 0x0x8074840c;
    r0 = *(0x134 + r30); // lbz @ 0x807483EC
    if (!=) goto 0x0x80748438;
    /* lfs f1, 0x104(r30) */ // 0x807483F8
    r3 = r30;
    /* li r4, 0x2ab */ // 0x80748400
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    /* b 0x80748438 */ // 0x80748408
    r0 = *(0x134 + r30); // lbz @ 0x8074840C
    if (!=) goto 0x0x80748438;
    /* lfs f1, 0x104(r30) */ // 0x80748418
    r3 = r30;
    /* li r4, 0x2ac */ // 0x80748420
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    /* lfs f1, 0(r31) */ // 0x80748428
    r3 = r30;
    /* li r4, 0x2b1 */ // 0x80748430
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x80748438
    r31 = *(0xc + r1); // lwz @ 0x8074843C
    r30 = *(8 + r1); // lwz @ 0x80748440
    return;
}