/* Function at 0x80674A20, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80674A20(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80674A38
    r29 = r4;
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x80674A4C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x80674A54
    r3 = *(0 + r3); // lwz @ 0x80674A58
    r3 = *(0 + r3); // lwz @ 0x80674A5C
    r30 = *(0x18c + r3); // lwz @ 0x80674A60
    if (!=) goto 0x0x80674a74;
    /* li r30, 0 */ // 0x80674A6C
    /* b 0x80674ac8 */ // 0x80674A70
    /* lis r31, 0 */ // 0x80674A74
    r31 = r31 + 0; // 0x80674A78
    if (==) goto 0x0x80674ac4;
    r12 = *(0 + r30); // lwz @ 0x80674A80
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80674A88
    /* mtctr r12 */ // 0x80674A8C
    /* bctrl  */ // 0x80674A90
    /* b 0x80674aac */ // 0x80674A94
    if (!=) goto 0x0x80674aa8;
    /* li r0, 1 */ // 0x80674AA0
    /* b 0x80674ab8 */ // 0x80674AA4
    r3 = *(0 + r3); // lwz @ 0x80674AA8
    if (!=) goto 0x0x80674a98;
    /* li r0, 0 */ // 0x80674AB4
    if (==) goto 0x0x80674ac4;
    /* b 0x80674ac8 */ // 0x80674AC0
    /* li r30, 0 */ // 0x80674AC4
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    /* li r0, 1 */ // 0x80674AD0
    *(0x668 + r30) = r0; // stb @ 0x80674AD4
    /* li r0, 0 */ // 0x80674AD8
    *(0x66c + r30) = r0; // stw @ 0x80674ADC
    /* stfs f1, 0x670(r30) */ // 0x80674AE0
    r31 = *(0x1c + r1); // lwz @ 0x80674AE4
    r30 = *(0x18 + r1); // lwz @ 0x80674AE8
    r29 = *(0x14 + r1); // lwz @ 0x80674AEC
    r0 = *(0x24 + r1); // lwz @ 0x80674AF0
    return;
}