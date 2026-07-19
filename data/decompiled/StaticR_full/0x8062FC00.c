/* Function at 0x8062FC00, size=108 bytes */
/* Stack frame: 0 bytes */

int FUN_8062FC00(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x8062FC00
    /* lfsu f3, 0(r4) */ // 0x8062FC04
    r5 = *(0x338 + r3); // lwz @ 0x8062FC08
    /* fmuls f2, f3, f1 */ // 0x8062FC0C
    *(0x14 + r5) = r4; // stw @ 0x8062FC10
    /* lfs f0, 8(r5) */ // 0x8062FC14
    /* fadds f0, f0, f2 */ // 0x8062FC18
    /* stfs f0, 8(r5) */ // 0x8062FC1C
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8062FC20
    if (>=) goto 0x0x8062fc2c;
    /* stfs f3, 8(r5) */ // 0x8062FC28
    /* lis r3, 0 */ // 0x8062FC2C
    /* li r0, 1 */ // 0x8062FC30
    r3 = r3 + 0; // 0x8062FC34
    /* lfsu f2, 0xc(r3) */ // 0x8062FC38
    *(0 + r5) = r0; // stb @ 0x8062FC3C
    /* fmuls f1, f2, f1 */ // 0x8062FC40
    *(0x30 + r5) = r3; // stw @ 0x8062FC44
    /* lfs f0, 0x24(r5) */ // 0x8062FC48
    /* fadds f0, f0, f1 */ // 0x8062FC4C
    /* stfs f0, 0x24(r5) */ // 0x8062FC50
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8062FC54
    if (>=) goto 0x0x8062fc60;
    /* stfs f2, 0x24(r5) */ // 0x8062FC5C
    /* li r0, 1 */ // 0x8062FC60
    *(0x1c + r5) = r0; // stb @ 0x8062FC64
    return;
}