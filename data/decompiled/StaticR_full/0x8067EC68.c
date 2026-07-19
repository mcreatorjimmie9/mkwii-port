/* Function at 0x8067EC68, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8067EC68(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8067EC7C
    r29 = r3;
    *(0x1b74 + r3) = r4; // stw @ 0x8067EC84
    /* lis r4, 0 */ // 0x8067EC88
    r3 = *(0 + r4); // lwz @ 0x8067EC8C
    r3 = *(0 + r3); // lwz @ 0x8067EC90
    r30 = *(0x25c + r3); // lwz @ 0x8067EC94
    if (!=) goto 0x0x8067eca8;
    /* li r30, 0 */ // 0x8067ECA0
    /* b 0x8067ecfc */ // 0x8067ECA4
    /* lis r31, 0 */ // 0x8067ECA8
    r31 = r31 + 0; // 0x8067ECAC
    if (==) goto 0x0x8067ecf8;
    r12 = *(0 + r30); // lwz @ 0x8067ECB4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8067ECBC
    /* mtctr r12 */ // 0x8067ECC0
    /* bctrl  */ // 0x8067ECC4
    /* b 0x8067ece0 */ // 0x8067ECC8
    if (!=) goto 0x0x8067ecdc;
    /* li r0, 1 */ // 0x8067ECD4
    /* b 0x8067ecec */ // 0x8067ECD8
    r3 = *(0 + r3); // lwz @ 0x8067ECDC
    if (!=) goto 0x0x8067eccc;
    /* li r0, 0 */ // 0x8067ECE8
    if (==) goto 0x0x8067ecf8;
    /* b 0x8067ecfc */ // 0x8067ECF4
    /* li r30, 0 */ // 0x8067ECF8
    /* lis r31, 0 */ // 0x8067ECFC
    r3 = *(0 + r31); // lwz @ 0x8067ED04
    FUN_805D9544(r4); // bl 0x805D9544
    r3 = *(0 + r31); // lwz @ 0x8067ED0C
    FUN_805D956C(r4, r4); // bl 0x805D956C
    r0 = *(0x1b74 + r29); // lwz @ 0x8067ED18
    if (==) goto 0x0x8067ed38;
    if (==) goto 0x0x8067ed44;
    if (==) goto 0x0x8067ed58;
    /* b 0x8067ed68 */ // 0x8067ED34
    r3 = r30;
    FUN_806642AC(r3); // bl 0x806642AC
    /* b 0x8067ed68 */ // 0x8067ED40
    r4 = *(0xa + r1); // lhz @ 0x8067ED44
    r3 = r30;
    r5 = *(8 + r1); // lhz @ 0x8067ED4C
    FUN_806644FC(r3); // bl 0x806644FC
    /* b 0x8067ed68 */ // 0x8067ED54
    r4 = *(0xa + r1); // lhz @ 0x8067ED58
    r3 = r30;
    r5 = *(8 + r1); // lhz @ 0x8067ED60
    FUN_806643B0(r3); // bl 0x806643B0
    /* li r0, 0 */ // 0x8067ED68
    *(0x1c25 + r29) = r0; // stb @ 0x8067ED6C
    r31 = *(0x1c + r1); // lwz @ 0x8067ED70
    r30 = *(0x18 + r1); // lwz @ 0x8067ED74
    r29 = *(0x14 + r1); // lwz @ 0x8067ED78
    r0 = *(0x24 + r1); // lwz @ 0x8067ED7C
    return;
}