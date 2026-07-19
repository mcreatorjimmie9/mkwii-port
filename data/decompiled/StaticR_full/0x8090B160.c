/* Function at 0x8090B160, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8090B160(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8090B168
    *(0x34 + r1) = r0; // stw @ 0x8090B16C
    *(0x2c + r1) = r31; // stw @ 0x8090B170
    r31 = r3;
    FUN_8089BC74(r5); // bl 0x8089BC74
    r0 = *(0x54 + r31); // lbz @ 0x8090B17C
    /* lis r3, 0 */ // 0x8090B180
    r3 = r3 + 0; // 0x8090B184
    *(0 + r31) = r3; // stw @ 0x8090B188
    if (==) goto 0x0x8090b19c;
    r3 = r31 + 0x48; // 0x8090B194
    /* b 0x8090b1cc */ // 0x8090B198
    /* li r0, 1 */ // 0x8090B19C
    *(0x54 + r31) = r0; // stb @ 0x8090B1A0
    r4 = r31 + 0x58; // 0x8090B1A8
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8090B1B0
    r3 = r31 + 0x48; // 0x8090B1B4
    /* stfs f0, 0x48(r31) */ // 0x8090B1B8
    /* lfs f0, 0xc(r1) */ // 0x8090B1BC
    /* stfs f0, 0x4c(r31) */ // 0x8090B1C0
    /* lfs f0, 0x10(r1) */ // 0x8090B1C4
    /* stfs f0, 0x50(r31) */ // 0x8090B1C8
    /* lis r4, 0 */ // 0x8090B1CC
    r7 = *(0 + r3); // lwz @ 0x8090B1D0
    /* lfs f1, 0(r4) */ // 0x8090B1D4
    /* lis r5, 0 */ // 0x8090B1D8
    r6 = *(4 + r3); // lwz @ 0x8090B1DC
    r0 = *(8 + r3); // lwz @ 0x8090B1E4
    r3 = r31 + 0x114; // 0x8090B1E8
    *(0x104 + r31) = r7; // stw @ 0x8090B1EC
    /* lfs f0, 0(r5) */ // 0x8090B1F0
    *(0x108 + r31) = r6; // stw @ 0x8090B1F4
    *(0x10c + r31) = r0; // stw @ 0x8090B1F8
    /* stfs f1, 0x110(r31) */ // 0x8090B1FC
    /* stfs f0, 0x14(r1) */ // 0x8090B200
    /* stfs f1, 0x18(r1) */ // 0x8090B204
    /* stfs f0, 0x1c(r1) */ // 0x8090B208
    FUN_805E3430(); // bl 0x805E3430
}