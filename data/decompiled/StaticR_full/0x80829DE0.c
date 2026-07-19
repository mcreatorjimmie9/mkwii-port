/* Function at 0x80829DE0, size=104 bytes */
/* Stack frame: 0 bytes */

void FUN_80829DE0(int r3, int r4, int r5, int r6)
{
    r0 = *(4 + r3); // lwz @ 0x80829DE0
    /* lis r5, 0 */ // 0x80829DE4
    /* lfs f1, 0x68(r3) */ // 0x80829DE8
    r5 = r5 + 0; // 0x80829DEC
    /* mulli r6, r0, 0x74 */ // 0x80829DF0
    r4 = *(0x74 + r3); // lwz @ 0x80829DF4
    r0 = *(4 + r3); // lwz @ 0x80829DF8
    r4 = r4 | 0x40; // 0x80829DFC
    *(0x74 + r3) = r4; // stw @ 0x80829E00
    r6 = r5 + r6; // 0x80829E04
    /* stfs f1, 0x64(r3) */ // 0x80829E08
    /* mulli r0, r0, 0x74 */ // 0x80829E0C
    r4 = *(0xa4 + r3); // lwz @ 0x80829E10
    /* stfs f1, 0x60(r3) */ // 0x80829E14
    r5 = r5 + r0; // 0x80829E18
    /* stfs f1, 0x5c(r3) */ // 0x80829E1C
    /* lfs f0, 0x40(r6) */ // 0x80829E20
    /* lfs f2, 0x38(r6) */ // 0x80829E24
    /* fmuls f0, f1, f0 */ // 0x80829E28
    /* fmuls f1, f1, f2 */ // 0x80829E2C
    /* stfs f0, 0xb8(r3) */ // 0x80829E30
    /* stfs f1, 0xb4(r3) */ // 0x80829E34
    /* lfs f1, 0x34(r5) */ // 0x80829E38
    /* fmuls f0, f0, f1 */ // 0x80829E3C
    /* stfs f0, 4(r4) */ // 0x80829E40
    return;
}