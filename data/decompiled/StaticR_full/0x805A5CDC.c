/* Function at 0x805A5CDC, size=136 bytes */
/* Stack frame: 32 bytes */

void FUN_805A5CDC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x805A5CE4
    r5 = *(4 + r3); // lwz @ 0x805A5CE8
    /* lfs f1, 0(r4) */ // 0x805A5CEC
    /* lfs f3, 4(r5) */ // 0x805A5CF0
    /* lfs f4, 8(r5) */ // 0x805A5CF4
    /* fsubs f2, f3, f1 */ // 0x805A5CF8
    /* lfs f0, 4(r4) */ // 0x805A5CFC
    /* lfs f5, 0xc(r5) */ // 0x805A5D00
    /* fsubs f7, f4, f0 */ // 0x805A5D04
    /* lfs f1, 8(r4) */ // 0x805A5D08
    /* fmuls f2, f2, f2 */ // 0x805A5D0C
    /* fsubs f6, f5, f1 */ // 0x805A5D10
    /* stfs f3, 8(r1) */ // 0x805A5D14
    /* fmuls f1, f7, f7 */ // 0x805A5D18
    /* lfs f0, 0x40(r3) */ // 0x805A5D1C
    /* fmuls f3, f6, f6 */ // 0x805A5D20
    /* stfs f4, 0xc(r1) */ // 0x805A5D24
    /* fadds f1, f2, f1 */ // 0x805A5D28
    /* stfs f5, 0x10(r1) */ // 0x805A5D2C
    /* fadds f1, f3, f1 */ // 0x805A5D30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A5D34
    if (<=) goto 0x0x805a5d44;
    /* li r3, 0 */ // 0x805A5D3C
    /* b 0x805a5d54 */ // 0x805A5D40
    r12 = *(0 + r3); // lwz @ 0x805A5D44
    r12 = *(8 + r12); // lwz @ 0x805A5D48
    /* mtctr r12 */ // 0x805A5D4C
    /* bctrl  */ // 0x805A5D50
    r0 = *(0x24 + r1); // lwz @ 0x805A5D54
    return;
}