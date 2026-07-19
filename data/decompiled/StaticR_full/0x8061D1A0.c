/* Function at 0x8061D1A0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_8061D1A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r3, 0 */ // 0x8061D1A8
    /* lis r4, 0 */ // 0x8061D1AC
    /* lfs f1, 0(r3) */ // 0x8061D1B0
    /* lis r3, 0 */ // 0x8061D1B4
    /* lfs f0, 0(r4) */ // 0x8061D1B8
    /* lis r4, 0 */ // 0x8061D1BC
    /* stfs f1, 8(r1) */ // 0x8061D1C0
    r3 = r3 + 0; // 0x8061D1C4
    /* lis r5, 0 */ // 0x8061D1C8
    r4 = r4 + 0; // 0x8061D1CC
    /* stfs f0, 0xc(r1) */ // 0x8061D1D0
    r5 = r5 + 0; // 0x8061D1D4
    r7 = *(8 + r1); // lwz @ 0x8061D1D8
    *(0x24 + r1) = r0; // stw @ 0x8061D1DC
    r6 = *(0xc + r1); // lwz @ 0x8061D1E0
    /* stfs f1, 0x10(r1) */ // 0x8061D1E4
    r0 = *(0x10 + r1); // lwz @ 0x8061D1E8
    *(4 + r3) = r7; // stw @ 0x8061D1EC
    *(8 + r3) = r6; // stw @ 0x8061D1F0
    *(0xc + r3) = r0; // stw @ 0x8061D1F4
    FUN_8091EFA4(); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x8061D1FC
    return;
}