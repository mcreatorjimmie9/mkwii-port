/* Function at 0x807432B0, size=308 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807432B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807432C4
    r30 = r3;
    r0 = *(0x2a0 + r3); // lwz @ 0x807432CC
    if (==) goto 0x0x807432ec;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x807432DC
    r12 = *(0x20 + r12); // lwz @ 0x807432E0
    /* mtctr r12 */ // 0x807432E4
    /* bctrl  */ // 0x807432E8
    r3 = *(0x2a4 + r30); // lwz @ 0x807432EC
    if (==) goto 0x0x8074330c;
    r12 = *(0 + r3); // lwz @ 0x807432F8
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x80743300
    /* mtctr r12 */ // 0x80743304
    /* bctrl  */ // 0x80743308
    r3 = *(0x2a8 + r30); // lwz @ 0x8074330C
    if (==) goto 0x0x8074332c;
    r12 = *(0 + r3); // lwz @ 0x80743318
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x80743320
    /* mtctr r12 */ // 0x80743324
    /* bctrl  */ // 0x80743328
    r3 = *(0x2ac + r30); // lwz @ 0x8074332C
    if (==) goto 0x0x8074334c;
    r12 = *(0 + r3); // lwz @ 0x80743338
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x80743340
    /* mtctr r12 */ // 0x80743344
    /* bctrl  */ // 0x80743348
    r3 = *(0x2b4 + r30); // lwz @ 0x8074334C
    if (==) goto 0x0x8074336c;
    r12 = *(0 + r3); // lwz @ 0x80743358
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x80743360
    /* mtctr r12 */ // 0x80743364
    /* bctrl  */ // 0x80743368
    r3 = *(0x2b0 + r30); // lwz @ 0x8074336C
    if (==) goto 0x0x8074338c;
    r12 = *(0 + r3); // lwz @ 0x80743378
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x80743380
    /* mtctr r12 */ // 0x80743384
    /* bctrl  */ // 0x80743388
    r3 = *(0x2b8 + r30); // lwz @ 0x8074338C
    if (==) goto 0x0x807433ac;
    r12 = *(0 + r3); // lwz @ 0x80743398
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x807433A0
    /* mtctr r12 */ // 0x807433A4
    /* bctrl  */ // 0x807433A8
    r3 = *(0x2bc + r30); // lwz @ 0x807433AC
    if (==) goto 0x0x807433cc;
    r12 = *(0 + r3); // lwz @ 0x807433B8
    r4 = r31;
    r12 = *(0x20 + r12); // lwz @ 0x807433C0
    /* mtctr r12 */ // 0x807433C4
    /* bctrl  */ // 0x807433C8
    r0 = *(0x14 + r1); // lwz @ 0x807433CC
    r31 = *(0xc + r1); // lwz @ 0x807433D0
    r30 = *(8 + r1); // lwz @ 0x807433D4
    return;
}