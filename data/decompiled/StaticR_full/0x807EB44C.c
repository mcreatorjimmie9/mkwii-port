/* Function at 0x807EB44C, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807EB44C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807EB458
    r31 = r3;
    r0 = *(0x124 + r3); // lwz @ 0x807EB460
    if (==) goto 0x0x807eb4e0;
    /* li r0, 2 */ // 0x807EB46C
    *(0x124 + r3) = r0; // stw @ 0x807EB470
    r4 = *(0x20 + r3); // lwz @ 0x807EB474
    r5 = r31 + 0x30; // 0x807EB47C
    r0 = *(0x48 + r4); // lha @ 0x807EB480
    r4 = *(8 + r4); // lwz @ 0x807EB484
    /* slwi r0, r0, 4 */ // 0x807EB488
    r4 = r4 + r0; // 0x807EB48C
    FUN_805A4498(r5); // bl 0x805A4498
    /* lis r4, 0 */ // 0x807EB494
    /* lfs f1, 0(r4) */ // 0x807EB49C
    FUN_80735EBC(r4, r3, r4); // bl 0x80735EBC
    /* lfs f0, 8(r1) */ // 0x807EB4A8
    /* lis r3, 0 */ // 0x807EB4AC
    /* stfs f0, 0x130(r31) */ // 0x807EB4B0
    /* li r4, 0 */ // 0x807EB4B4
    /* lfs f0, 0(r3) */ // 0x807EB4B8
    /* li r0, 1 */ // 0x807EB4BC
    /* lfs f1, 0xc(r1) */ // 0x807EB4C0
    /* stfs f1, 0x134(r31) */ // 0x807EB4C4
    /* lfs f1, 0x10(r1) */ // 0x807EB4C8
    /* stfs f1, 0x138(r31) */ // 0x807EB4CC
    *(0x13c + r31) = r4; // stw @ 0x807EB4D0
    /* stfs f0, 0xf8(r31) */ // 0x807EB4D4
    *(0x100 + r31) = r0; // stb @ 0x807EB4D8
    *(0x101 + r31) = r4; // stb @ 0x807EB4DC
    r0 = *(0x34 + r1); // lwz @ 0x807EB4E0
    r31 = *(0x2c + r1); // lwz @ 0x807EB4E4
    return;
}