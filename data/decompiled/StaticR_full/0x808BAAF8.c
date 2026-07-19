/* Function at 0x808BAAF8, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808BAAF8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808BAB0C
    *(0x14 + r1) = r29; // stw @ 0x808BAB10
    r0 = *(8 + r3); // lwz @ 0x808BAB14
    if (!=) goto 0x0x808bac38;
    r3 = *(0x23d8 + r3); // lwz @ 0x808BAB20
    if (==) goto 0x0x808bab38;
    r0 = *(8 + r3); // lwz @ 0x808BAB2C
    if (!=) goto 0x0x808bac38;
    /* lis r30, 0 */ // 0x808BAB38
    r3 = *(0 + r30); // lwz @ 0x808BAB3C
    r3 = *(0 + r3); // lwz @ 0x808BAB40
    r3 = *(0 + r3); // lwz @ 0x808BAB44
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808bac38;
    r4 = *(0x23dc + r31); // lwz @ 0x808BAB54
    /* lis r3, 0 */ // 0x808BAB58
    /* lfs f0, 0(r3) */ // 0x808BAB5C
    /* lfs f1, 0(r4) */ // 0x808BAB60
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808BAB64
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808BAB68
    /* mfcr r0 */ // 0x808BAB6C
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808BAB70
    if (==) goto 0x0x808bac38;
    r3 = *(0 + r30); // lwz @ 0x808BAB78
    r3 = *(0 + r3); // lwz @ 0x808BAB7C
    r29 = *(0x250 + r3); // lwz @ 0x808BAB80
    if (!=) goto 0x0x808bab94;
    /* li r29, 0 */ // 0x808BAB8C
    /* b 0x808babe8 */ // 0x808BAB90
    /* lis r30, 0 */ // 0x808BAB94
    r30 = r30 + 0; // 0x808BAB98
    if (==) goto 0x0x808babe4;
    r12 = *(0 + r29); // lwz @ 0x808BABA0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BABA8
    /* mtctr r12 */ // 0x808BABAC
    /* bctrl  */ // 0x808BABB0
    /* b 0x808babcc */ // 0x808BABB4
    if (!=) goto 0x0x808babc8;
    /* li r0, 1 */ // 0x808BABC0
    /* b 0x808babd8 */ // 0x808BABC4
    r3 = *(0 + r3); // lwz @ 0x808BABC8
    if (!=) goto 0x0x808babb8;
    /* li r0, 0 */ // 0x808BABD4
    if (==) goto 0x0x808babe4;
    /* b 0x808babe8 */ // 0x808BABE0
    /* li r29, 0 */ // 0x808BABE4
    r3 = r29;
    /* li r4, -1 */ // 0x808BABEC
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    r3 = *(0x23d8 + r31); // lwz @ 0x808BABF4
    if (==) goto 0x0x808bac1c;
    r0 = *(8 + r3); // lwz @ 0x808BAC00
    if (!=) goto 0x0x808bac1c;
    /* lis r4, 0 */ // 0x808BAC0C
    /* lfs f1, 0(r4) */ // 0x808BAC10
    /* li r4, -1 */ // 0x808BAC14
    FUN_80671C48(r4, r4); // bl 0x80671C48
    /* lis r4, 0 */ // 0x808BAC1C
    /* li r0, -1 */ // 0x808BAC20
    /* lfs f1, 0(r4) */ // 0x808BAC24
    r3 = r31;
    *(0x3e8 + r31) = r0; // stw @ 0x808BAC2C
    /* li r4, 0 */ // 0x808BAC30
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808BAC38
    r31 = *(0x1c + r1); // lwz @ 0x808BAC3C
    r30 = *(0x18 + r1); // lwz @ 0x808BAC40
    r29 = *(0x14 + r1); // lwz @ 0x808BAC44
    return;
}