/* Function at 0x805B0D3C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805B0D3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x805B0D44
    /* li r5, 0x2c */ // 0x805B0D48
    *(0x14 + r1) = r0; // stw @ 0x805B0D4C
    /* li r0, -1 */ // 0x805B0D50
    *(0xc + r1) = r31; // stw @ 0x805B0D54
    r31 = r3;
    r6 = *(4 + r3); // lwz @ 0x805B0D5C
    *(0x10 + r3) = r5; // stw @ 0x805B0D60
    *(0x18 + r3) = r4; // stw @ 0x805B0D68
    *(0x14 + r3) = r0; // stb @ 0x805B0D6C
    *(0xc2 + r3) = r4; // sth @ 0x805B0D70
    *(0xc4 + r3) = r4; // sth @ 0x805B0D74
    if (==) goto 0x0x805b0da8;
    r4 = *(4 + r3); // lwz @ 0x805B0D7C
    r3 = r6;
    if (==) goto 0x0x805b0d94;
    r4 = *(0x51 + r4); // lbz @ 0x805B0D8C
    /* b 0x805b0d98 */ // 0x805B0D90
    /* li r4, 0 */ // 0x805B0D94
    r12 = *(0 + r3); // lwz @ 0x805B0D98
    r12 = *(0x44 + r12); // lwz @ 0x805B0D9C
    /* mtctr r12 */ // 0x805B0DA0
    /* bctrl  */ // 0x805B0DA4
    /* li r0, 0 */ // 0x805B0DA8
    *(0xc6 + r31) = r0; // stb @ 0x805B0DAC
    r31 = *(0xc + r1); // lwz @ 0x805B0DB0
    r0 = *(0x14 + r1); // lwz @ 0x805B0DB4
    return;
}