/* Function at 0x807B8280, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B8280(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807B828C
    r31 = r3;
    FUN_807B70B8(); // bl 0x807B70B8
    /* lis r4, 0 */ // 0x807B8298
    /* lis r3, 0 */ // 0x807B829C
    /* lfs f1, 0(r4) */ // 0x807B82A0
    /* li r5, 0 */ // 0x807B82A4
    /* lfs f0, 0(r3) */ // 0x807B82A8
    /* li r0, 1 */ // 0x807B82AC
    /* stfs f1, 8(r1) */ // 0x807B82B0
    /* stfs f1, 0xc(r1) */ // 0x807B82B8
    /* stfs f0, 0x10(r1) */ // 0x807B82BC
    *(0x14 + r1) = r5; // stw @ 0x807B82C0
    *(0x18 + r1) = r5; // stw @ 0x807B82C4
    *(0x1c + r1) = r5; // stb @ 0x807B82C8
    *(0x1d + r1) = r0; // stb @ 0x807B82CC
    r3 = *(0x3c + r31); // lwz @ 0x807B82D0
    r12 = *(0 + r3); // lwz @ 0x807B82D4
    r12 = *(0xc + r12); // lwz @ 0x807B82D8
    /* mtctr r12 */ // 0x807B82DC
    /* bctrl  */ // 0x807B82E0
    r0 = *(0x34 + r1); // lwz @ 0x807B82E4
    r31 = *(0x2c + r1); // lwz @ 0x807B82E8
    return;
}