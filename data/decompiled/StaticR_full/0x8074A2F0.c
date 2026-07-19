/* Function at 0x8074A2F0, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8074A2F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8074A304
    r29 = r3;
    r0 = *(0xf8 + r3); // lwz @ 0x8074A30C
    if (!=) goto 0x0x8074a3c4;
    /* li r30, 0 */ // 0x8074A318
    /* li r31, 0 */ // 0x8074A31C
    /* b 0x8074a344 */ // 0x8074A320
    r3 = *(0xd8 + r29); // lwz @ 0x8074A324
    /* lwzx r3, r3, r31 */ // 0x8074A328
    r12 = *(0 + r3); // lwz @ 0x8074A32C
    r12 = *(0x94 + r12); // lwz @ 0x8074A330
    /* mtctr r12 */ // 0x8074A334
    /* bctrl  */ // 0x8074A338
    r31 = r31 + 4; // 0x8074A33C
    r30 = r30 + 1; // 0x8074A340
    r0 = *(0xec + r29); // lwz @ 0x8074A344
    if (<) goto 0x0x8074a324;
    r12 = *(0 + r29); // lwz @ 0x8074A350
    r3 = r29;
    /* li r4, 0 */ // 0x8074A358
    r12 = *(0x68 + r12); // lwz @ 0x8074A35C
    /* mtctr r12 */ // 0x8074A360
    /* bctrl  */ // 0x8074A364
    /* li r31, 0 */ // 0x8074A368
    *(0x180 + r29) = r31; // stb @ 0x8074A36C
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8074A374
    r12 = *(0x90 + r12); // lwz @ 0x8074A378
    /* mtctr r12 */ // 0x8074A37C
    /* bctrl  */ // 0x8074A380
    r3 = *(0xdc + r29); // lwz @ 0x8074A384
    /* li r4, 0 */ // 0x8074A388
    r12 = *(0 + r3); // lwz @ 0x8074A38C
    r12 = *(0x68 + r12); // lwz @ 0x8074A390
    /* mtctr r12 */ // 0x8074A394
    /* bctrl  */ // 0x8074A398
    r3 = *(0xdc + r29); // lwz @ 0x8074A39C
    r12 = *(0 + r3); // lwz @ 0x8074A3A0
    r12 = *(0x90 + r12); // lwz @ 0x8074A3A4
    /* mtctr r12 */ // 0x8074A3A8
    /* bctrl  */ // 0x8074A3AC
    /* lis r3, 0 */ // 0x8074A3B0
    *(0x15c + r29) = r31; // stb @ 0x8074A3B4
    /* lfs f0, 0(r3) */ // 0x8074A3B8
    /* stfs f0, 0x164(r29) */ // 0x8074A3BC
    /* b 0x8074a3f8 */ // 0x8074A3C0
    r12 = *(0 + r3); // lwz @ 0x8074A3C4
    /* li r4, 0 */ // 0x8074A3C8
    r12 = *(0x68 + r12); // lwz @ 0x8074A3CC
    /* mtctr r12 */ // 0x8074A3D0
    /* bctrl  */ // 0x8074A3D4
    /* li r31, 0 */ // 0x8074A3D8
    *(0x180 + r29) = r31; // stb @ 0x8074A3DC
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8074A3E4
    r12 = *(0x90 + r12); // lwz @ 0x8074A3E8
    /* mtctr r12 */ // 0x8074A3EC
    /* bctrl  */ // 0x8074A3F0
    *(0x15c + r29) = r31; // stb @ 0x8074A3F4
    r0 = *(0x24 + r1); // lwz @ 0x8074A3F8
    r31 = *(0x1c + r1); // lwz @ 0x8074A3FC
    r30 = *(0x18 + r1); // lwz @ 0x8074A400
    r29 = *(0x14 + r1); // lwz @ 0x8074A404
    return;
}