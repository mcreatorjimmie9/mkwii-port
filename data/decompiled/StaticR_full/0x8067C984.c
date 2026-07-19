/* Function at 0x8067C984, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8067C984(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0xc54; // 0x8067C994
    *(0x18 + r1) = r30; // stw @ 0x8067C998
    /* li r30, 0 */ // 0x8067C99C
    *(0x14 + r1) = r29; // stw @ 0x8067C9A0
    r29 = r3;
    r12 = *(0 + r31); // lwz @ 0x8067C9A8
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8067C9B0
    /* mtctr r12 */ // 0x8067C9B4
    /* bctrl  */ // 0x8067C9B8
    r30 = r30 + 1; // 0x8067C9BC
    r31 = r31 + 0x274; // 0x8067C9C0
    if (<) goto 0x0x8067c9a8;
    r31 = r29 + 0x1624; // 0x8067C9CC
    /* li r30, 0 */ // 0x8067C9D0
    r12 = *(0 + r31); // lwz @ 0x8067C9D4
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8067C9DC
    /* mtctr r12 */ // 0x8067C9E0
    /* bctrl  */ // 0x8067C9E4
    r30 = r30 + 1; // 0x8067C9E8
    r31 = r31 + 0x274; // 0x8067C9EC
    if (<) goto 0x0x8067c9d4;
    r12 = *(0x5fbc + r29); // lwz @ 0x8067C9F8
    r3 = r29 + 0x5fbc; // 0x8067C9FC
    r12 = *(0x3c + r12); // lwz @ 0x8067CA00
    /* mtctr r12 */ // 0x8067CA04
    /* bctrl  */ // 0x8067CA08
    r12 = *(0x6230 + r29); // lwz @ 0x8067CA0C
    r3 = r29 + 0x6230; // 0x8067CA10
    r12 = *(0x3c + r12); // lwz @ 0x8067CA14
    /* mtctr r12 */ // 0x8067CA18
    /* bctrl  */ // 0x8067CA1C
    r31 = r29 + 0x64a4; // 0x8067CA20
    /* li r30, 0 */ // 0x8067CA24
    r12 = *(0 + r31); // lwz @ 0x8067CA28
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8067CA30
    /* mtctr r12 */ // 0x8067CA34
    /* bctrl  */ // 0x8067CA38
    r30 = r30 + 1; // 0x8067CA3C
    r31 = r31 + 0x1b4; // 0x8067CA40
    if (<) goto 0x0x8067ca28;
    r0 = *(0x24 + r1); // lwz @ 0x8067CA4C
    r31 = *(0x1c + r1); // lwz @ 0x8067CA50
    r30 = *(0x18 + r1); // lwz @ 0x8067CA54
    r29 = *(0x14 + r1); // lwz @ 0x8067CA58
    return;
}