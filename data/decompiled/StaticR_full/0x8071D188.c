/* Function at 0x8071D188, size=120 bytes */
/* Stack frame: 32 bytes */
/* Calls: 2 function(s) */

int FUN_8071D188(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8071D190
    r0 = *(0x33 + r3); // lbz @ 0x8071D194
    if (!=) goto 0x0x8071d1f0;
    r0 = *(0x30 + r3); // lbz @ 0x8071D1A0
    if (!=) goto 0x0x8071d1d0;
    /* lis r3, 0 */ // 0x8071D1AC
    /* stfs f1, 0x14(r1) */ // 0x8071D1B0
    r3 = r3 + 0; // 0x8071D1B4
    /* stfs f1, 0x18(r1) */ // 0x8071D1BC
    r3 = r3 + 0x8f; // 0x8071D1C0
    /* stfs f1, 0x1c(r1) */ // 0x8071D1C4
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d1f0 */ // 0x8071D1CC
    /* lis r3, 0 */ // 0x8071D1D0
    /* stfs f1, 8(r1) */ // 0x8071D1D4
    r3 = r3 + 0; // 0x8071D1D8
    /* stfs f1, 0xc(r1) */ // 0x8071D1E0
    r3 = r3 + 0x9c; // 0x8071D1E4
    /* stfs f1, 0x10(r1) */ // 0x8071D1E8
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    r0 = *(0x24 + r1); // lwz @ 0x8071D1F0
    return;
}