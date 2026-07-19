/* Function at 0x807D9874, size=108 bytes */
/* Stack frame: 0 bytes */

void FUN_807D9874(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x807D9874
    /* li r0, 0 */ // 0x807D9878
    /* lfs f0, 0(r4) */ // 0x807D987C
    /* lis r4, 0 */ // 0x807D9880
    r4 = r4 + 0; // 0x807D9884
    /* lis r5, 0 */ // 0x807D9888
    *(0 + r3) = r4; // stw @ 0x807D988C
    /* lis r4, 0 */ // 0x807D9890
    /* lfs f1, 0(r5) */ // 0x807D9894
    *(4 + r3) = r0; // stw @ 0x807D9898
    *(8 + r3) = r0; // stb @ 0x807D989C
    *(0x10 + r3) = r0; // stw @ 0x807D98A0
    /* stfs f0, 0x20(r3) */ // 0x807D98A4
    /* stfs f0, 0x24(r3) */ // 0x807D98A8
    /* stfs f0, 0x28(r3) */ // 0x807D98AC
    /* stfs f0, 0x2c(r3) */ // 0x807D98B0
    *(0x30 + r3) = r0; // stw @ 0x807D98B4
    /* stfs f1, 0(r4) */ // 0x807D98B8
    /* stfs f0, 0x1c(r3) */ // 0x807D98BC
    /* stfs f0, 0x18(r3) */ // 0x807D98C0
    /* stfs f0, 0x14(r3) */ // 0x807D98C4
    *(9 + r3) = r0; // stb @ 0x807D98C8
    *(0xa + r3) = r0; // stb @ 0x807D98CC
    *(0xb + r3) = r0; // stb @ 0x807D98D0
    *(0xc + r3) = r0; // stb @ 0x807D98D4
    *(0xd + r3) = r0; // stb @ 0x807D98D8
    return;
}