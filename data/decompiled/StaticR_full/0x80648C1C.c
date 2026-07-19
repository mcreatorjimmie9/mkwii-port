/* Function at 0x80648C1C, size=144 bytes */
/* Stack frame: 0 bytes */

void FUN_80648C1C(int r3, int r4, int r5)
{
    r3 = *(0x18 + r3); // lwz @ 0x80648C1C
    /* slwi r0, r4, 2 */ // 0x80648C20
    /* lwzx r5, r3, r0 */ // 0x80648C24
    r3 = *(5 + r5); // lbz @ 0x80648C28
    r0 = *(4 + r5); // lbz @ 0x80648C2C
    /* beqlr  */ // 0x80648C34
    r0 = *(0x11 + r5); // lbz @ 0x80648C38
    if (==) goto 0x0x80648c68;
    /* li r0, 0 */ // 0x80648C44
    *(0x10 + r5) = r0; // stb @ 0x80648C48
    /* lis r3, 0 */ // 0x80648C4C
    *(0x11 + r5) = r0; // stb @ 0x80648C50
    /* lfs f0, 0(r3) */ // 0x80648C54
    r0 = *(5 + r5); // lbz @ 0x80648C58
    *(4 + r5) = r0; // stb @ 0x80648C5C
    /* stfs f0, 8(r5) */ // 0x80648C60
    return;
    /* li r0, 1 */ // 0x80648C68
    *(0x10 + r5) = r0; // stb @ 0x80648C6C
    /* lis r3, 0 */ // 0x80648C70
    r4 = *(0xc + r5); // lwz @ 0x80648C74
    /* lfs f1, 8(r5) */ // 0x80648C78
    /* lfs f2, 0x20(r4) */ // 0x80648C7C
    /* lfs f0, 0(r3) */ // 0x80648C80
    /* fadds f1, f1, f2 */ // 0x80648C84
    /* stfs f1, 8(r5) */ // 0x80648C88
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80648C8C
    if (>=) goto 0x0x80648ca0;
    /* stfs f0, 8(r5) */ // 0x80648C94
    /* li r0, 1 */ // 0x80648C98
    /* b 0x80648ca4 */ // 0x80648C9C
    /* li r0, 0 */ // 0x80648CA0
    *(0x11 + r5) = r0; // stb @ 0x80648CA4
    return;
}