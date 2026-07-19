/* Function at 0x8065B0A4, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8065B0A4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8065B0AC
    *(0xc + r1) = r31; // stw @ 0x8065B0B4
    *(8 + r1) = r30; // stw @ 0x8065B0B8
    r3 = *(0 + r3); // lwz @ 0x8065B0BC
    r3 = *(0 + r3); // lwz @ 0x8065B0C0
    r30 = *(0x25c + r3); // lwz @ 0x8065B0C4
    if (!=) goto 0x0x8065b0d8;
    /* li r30, 0 */ // 0x8065B0D0
    /* b 0x8065b12c */ // 0x8065B0D4
    /* lis r31, 0 */ // 0x8065B0D8
    r31 = r31 + 0; // 0x8065B0DC
    if (==) goto 0x0x8065b128;
    r12 = *(0 + r30); // lwz @ 0x8065B0E4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065B0EC
    /* mtctr r12 */ // 0x8065B0F0
    /* bctrl  */ // 0x8065B0F4
    /* b 0x8065b110 */ // 0x8065B0F8
    if (!=) goto 0x0x8065b10c;
    /* li r0, 1 */ // 0x8065B104
    /* b 0x8065b11c */ // 0x8065B108
    r3 = *(0 + r3); // lwz @ 0x8065B10C
    if (!=) goto 0x0x8065b0fc;
    /* li r0, 0 */ // 0x8065B118
    if (==) goto 0x0x8065b128;
    /* b 0x8065b12c */ // 0x8065B124
    /* li r30, 0 */ // 0x8065B128
    r3 = r30;
    FUN_806641A8(r3); // bl 0x806641A8
    r0 = *(0x14 + r1); // lwz @ 0x8065B134
    r31 = *(0xc + r1); // lwz @ 0x8065B138
    r30 = *(8 + r1); // lwz @ 0x8065B13C
    return;
}