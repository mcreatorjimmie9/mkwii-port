/* Function at 0x807322B8, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807322B8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807322CC
    r29 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x807322D4
    r5 = *(0x530 + r3); // lwz @ 0x807322D8
    if (!=) goto 0x0x807322f4;
    r4 = *(0x80 + r3); // lwz @ 0x807322E4
    r0 = *(0xae0 + r3); // lbz @ 0x807322E8
    if (>=) goto 0x0x80732328;
    r30 = r5 + 0x28; // 0x807322F4
    /* li r31, 0xa */ // 0x807322F8
    r3 = *(0 + r30); // lwz @ 0x807322FC
    if (==) goto 0x0x80732318;
    r12 = *(0 + r3); // lwz @ 0x80732308
    r12 = *(0xc + r12); // lwz @ 0x8073230C
    /* mtctr r12 */ // 0x80732310
    /* bctrl  */ // 0x80732314
    r31 = r31 + 1; // 0x80732318
    r30 = r30 + 4; // 0x8073231C
    if (<) goto 0x0x807322fc;
    r0 = *(0x7ba + r29); // lbz @ 0x80732328
    r4 = *(0x530 + r29); // lwz @ 0x8073232C
    if (!=) goto 0x0x80732348;
    r3 = *(0x84 + r29); // lwz @ 0x80732338
    r0 = *(0xae0 + r29); // lbz @ 0x8073233C
    if (>=) goto 0x0x8073237c;
    r30 = r4 + 0x34; // 0x80732348
    /* li r31, 0xd */ // 0x8073234C
    r3 = *(0 + r30); // lwz @ 0x80732350
    if (==) goto 0x0x8073236c;
    r12 = *(0 + r3); // lwz @ 0x8073235C
    r12 = *(0xc + r12); // lwz @ 0x80732360
    /* mtctr r12 */ // 0x80732364
    /* bctrl  */ // 0x80732368
    r31 = r31 + 1; // 0x8073236C
    r30 = r30 + 4; // 0x80732370
    if (<) goto 0x0x80732350;
    r0 = *(0x24 + r1); // lwz @ 0x8073237C
    r31 = *(0x1c + r1); // lwz @ 0x80732380
    r30 = *(0x18 + r1); // lwz @ 0x80732384
    r29 = *(0x14 + r1); // lwz @ 0x80732388
    return;
}