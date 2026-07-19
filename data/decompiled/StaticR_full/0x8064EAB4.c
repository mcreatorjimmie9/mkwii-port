/* Function at 0x8064EAB4, size=200 bytes */
/* Stack frame: 0 bytes */

void FUN_8064EAB4(int r3, int r4, int r5, int r6)
{
    /* lis r5, 0 */ // 0x8064EAB4
    r5 = *(0 + r5); // lwz @ 0x8064EAB8
    r0 = *(0x58 + r5); // lwz @ 0x8064EABC
    if (!=) goto 0x0x8064eb08;
    r5 = *(0 + r3); // lwz @ 0x8064EAC8
    /* lfs f0, 0x20(r4) */ // 0x8064EACC
    /* stfs f0, 4(r5) */ // 0x8064EAD0
    /* lfs f0, 0x24(r4) */ // 0x8064EAD4
    r5 = *(0 + r3); // lwz @ 0x8064EAD8
    /* lfs f2, 0x28(r4) */ // 0x8064EADC
    /* stfs f0, 8(r5) */ // 0x8064EAE0
    /* lfs f1, 0x2c(r4) */ // 0x8064EAE4
    r5 = *(0 + r3); // lwz @ 0x8064EAE8
    /* lfs f0, 0x30(r4) */ // 0x8064EAEC
    /* stfs f2, 0xc(r5) */ // 0x8064EAF0
    r5 = *(0 + r3); // lwz @ 0x8064EAF4
    /* stfs f1, 0x10(r5) */ // 0x8064EAF8
    r5 = *(0 + r3); // lwz @ 0x8064EAFC
    /* stfs f0, 0x14(r5) */ // 0x8064EB00
    /* b 0x8064eb44 */ // 0x8064EB04
    r5 = *(0 + r3); // lwz @ 0x8064EB08
    /* lfs f0, 0xc(r4) */ // 0x8064EB0C
    /* stfs f0, 4(r5) */ // 0x8064EB10
    /* lfs f0, 0x10(r4) */ // 0x8064EB14
    r5 = *(0 + r3); // lwz @ 0x8064EB18
    /* lfs f2, 0x14(r4) */ // 0x8064EB1C
    /* stfs f0, 8(r5) */ // 0x8064EB20
    /* lfs f1, 0x18(r4) */ // 0x8064EB24
    r5 = *(0 + r3); // lwz @ 0x8064EB28
    /* lfs f0, 0x1c(r4) */ // 0x8064EB2C
    /* stfs f2, 0xc(r5) */ // 0x8064EB30
    r5 = *(0 + r3); // lwz @ 0x8064EB34
    /* stfs f1, 0x10(r5) */ // 0x8064EB38
    r5 = *(0 + r3); // lwz @ 0x8064EB3C
    /* stfs f0, 0x14(r5) */ // 0x8064EB40
    r5 = *(0 + r3); // lwz @ 0x8064EB44
    r0 = *(2 + r4); // lhz @ 0x8064EB48
    *(0x18 + r5) = r0; // stb @ 0x8064EB4C
    r6 = *(4 + r4); // lhz @ 0x8064EB50
    r5 = *(0 + r3); // lwz @ 0x8064EB54
    /* neg r0, r6 */ // 0x8064EB58
    /* lfs f0, 8(r4) */ // 0x8064EB5C
    r0 = r0 | r6; // 0x8064EB60
    /* srwi r0, r0, 0x1f */ // 0x8064EB64
    *(0x88 + r5) = r0; // stb @ 0x8064EB68
    r4 = *(0 + r3); // lwz @ 0x8064EB6C
    /* stfs f0, 0x8c(r4) */ // 0x8064EB70
    r3 = *(0 + r3); // lwz @ 0x8064EB74
    /* b 0x806a004c */ // 0x8064EB78
}