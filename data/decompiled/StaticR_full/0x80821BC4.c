/* Function at 0x80821BC4, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_80821BC4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0x101 */ // 0x80821BCC
    *(0x24 + r1) = r0; // stw @ 0x80821BD0
    /* stmw r27, 0xc(r1) */ // 0x80821BD4
    r27 = r3;
    /* li r28, 0 */ // 0x80821BDC
    r31 = r4 + 0x101; // 0x80821BE0
    /* li r30, 0 */ // 0x80821BE4
    r29 = *(0x10 + r3); // lwz @ 0x80821BE8
    /* b 0x80821c34 */ // 0x80821BEC
    r3 = *(4 + r27); // lwz @ 0x80821BF0
    /* lwzx r3, r3, r30 */ // 0x80821BF4
    r4 = *(0xa4 + r3); // lwz @ 0x80821BF8
    r0 = *(0x20 + r4); // lwz @ 0x80821BFC
    /* andc. r0, r31, r0 */ // 0x80821C00
    if (!=) goto 0x0x80821c1c;
    r12 = *(0 + r3); // lwz @ 0x80821C08
    r12 = *(0x14 + r12); // lwz @ 0x80821C0C
    /* mtctr r12 */ // 0x80821C10
    /* bctrl  */ // 0x80821C14
    /* b 0x80821c2c */ // 0x80821C18
    r12 = *(0 + r3); // lwz @ 0x80821C1C
    r12 = *(0x10 + r12); // lwz @ 0x80821C20
    /* mtctr r12 */ // 0x80821C24
    /* bctrl  */ // 0x80821C28
    r30 = r30 + 4; // 0x80821C2C
    r28 = r28 + 1; // 0x80821C30
    if (<) goto 0x0x80821bf0;
    r0 = *(0x24 + r1); // lwz @ 0x80821C40
    return;
}