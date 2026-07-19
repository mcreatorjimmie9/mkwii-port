/* Function at 0x8067E9B4, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8067E9B4(int r3, int r4, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r8, 0 */ // 0x8067E9BC
    *(0x24 + r1) = r0; // stw @ 0x8067E9C4
    /* stfd f31, 0x18(r1) */ // 0x8067E9C8
    /* fmr f31, f1 */ // 0x8067E9CC
    *(0x14 + r1) = r31; // stw @ 0x8067E9D0
    r31 = r3;
    *(0x10 + r1) = r30; // stw @ 0x8067E9D8
    *(0xc + r1) = r29; // stw @ 0x8067E9DC
    *(8 + r1) = r28; // stw @ 0x8067E9E0
    r28 = r6;
    r7 = *(0 + r8); // lwz @ 0x8067E9E8
    r6 = *(0x98 + r7); // lwz @ 0x8067E9EC
    *(0x3c4 + r6) = r4; // stw @ 0x8067E9F0
    r4 = *(0 + r8); // lwz @ 0x8067E9F4
    r4 = *(0x98 + r4); // lwz @ 0x8067E9F8
    *(0x3cc + r4) = r5; // stw @ 0x8067E9FC
    r4 = *(0 + r8); // lwz @ 0x8067EA00
    r0 = *(0x1b78 + r3); // lwz @ 0x8067EA04
    r3 = *(0x98 + r4); // lwz @ 0x8067EA08
    *(0x3c8 + r3) = r0; // stw @ 0x8067EA0C
    if (<) goto 0x0x8067eaa0;
    r3 = *(0 + r8); // lwz @ 0x8067EA14
    r3 = *(0 + r3); // lwz @ 0x8067EA18
    r29 = *(0x2b8 + r3); // lwz @ 0x8067EA1C
    if (!=) goto 0x0x8067ea30;
    /* li r29, 0 */ // 0x8067EA28
    /* b 0x8067ea84 */ // 0x8067EA2C
    /* lis r30, 0 */ // 0x8067EA30
    r30 = r30 + 0; // 0x8067EA34
    if (==) goto 0x0x8067ea80;
    r12 = *(0 + r29); // lwz @ 0x8067EA3C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8067EA44
    /* mtctr r12 */ // 0x8067EA48
    /* bctrl  */ // 0x8067EA4C
    /* b 0x8067ea68 */ // 0x8067EA50
    if (!=) goto 0x0x8067ea64;
    /* li r0, 1 */ // 0x8067EA5C
    /* b 0x8067ea74 */ // 0x8067EA60
    r3 = *(0 + r3); // lwz @ 0x8067EA64
    if (!=) goto 0x0x8067ea54;
    /* li r0, 0 */ // 0x8067EA70
    if (==) goto 0x0x8067ea80;
    /* b 0x8067ea84 */ // 0x8067EA7C
    /* li r29, 0 */ // 0x8067EA80
    r3 = *(0x1794 + r31); // lwz @ 0x8067EA84
    r4 = r28;
    r3 = r3 + 0x174; // 0x8067EA8C
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    r4 = r3;
    r3 = r29;
    FUN_806D7354(r4, r3, r4, r3); // bl 0x806D7354
    /* fmr f1, f31 */ // 0x8067EAA0
    /* li r0, 0xac */ // 0x8067EAA4
    *(0x1b70 + r31) = r0; // stw @ 0x8067EAA8
    r3 = r31;
    /* li r4, 0 */ // 0x8067EAB0
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 0 */ // 0x8067EAB8
    *(0x1c25 + r31) = r0; // stb @ 0x8067EABC
    /* lfd f31, 0x18(r1) */ // 0x8067EAC0
    r31 = *(0x14 + r1); // lwz @ 0x8067EAC4
    r30 = *(0x10 + r1); // lwz @ 0x8067EAC8
    r29 = *(0xc + r1); // lwz @ 0x8067EACC
    r28 = *(8 + r1); // lwz @ 0x8067EAD0
    r0 = *(0x24 + r1); // lwz @ 0x8067EAD4
    return;
}