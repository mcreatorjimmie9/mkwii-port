/* Function at 0x80734198, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80734198(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x30; // 0x807341A8
    *(0x18 + r1) = r30; // stw @ 0x807341AC
    /* li r30, 0xc */ // 0x807341B0
    *(0x14 + r1) = r29; // stw @ 0x807341B4
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x807341BC
    if (==) goto 0x0x80734208;
    /* slwi r0, r30, 0x1e */ // 0x807341C8
    /* srwi r4, r30, 0x1f */ // 0x807341CC
    /* subf r0, r4, r0 */ // 0x807341D0
    /* rotlwi r0, r0, 2 */ // 0x807341D4
    r0 = r0 + r4; // 0x807341D8
    r4 = r29 + r0; // 0x807341DC
    r0 = *(0x848 + r4); // lbz @ 0x807341E0
    if (==) goto 0x0x80734208;
    r0 = *(0x96d + r4); // lbz @ 0x807341EC
    if (!=) goto 0x0x80734208;
    r12 = *(0 + r3); // lwz @ 0x807341F8
    r12 = *(0xc + r12); // lwz @ 0x807341FC
    /* mtctr r12 */ // 0x80734200
    /* bctrl  */ // 0x80734204
    r30 = r30 + 1; // 0x80734208
    r31 = r31 + 4; // 0x8073420C
    if (<) goto 0x0x807341bc;
    r0 = *(0x24 + r1); // lwz @ 0x80734218
    r31 = *(0x1c + r1); // lwz @ 0x8073421C
    r30 = *(0x18 + r1); // lwz @ 0x80734220
    r29 = *(0x14 + r1); // lwz @ 0x80734224
    return;
}