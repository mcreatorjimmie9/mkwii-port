/* Function at 0x807B84BC, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B84BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807B84C8
    r31 = r4;
    r4 = *(0x38 + r3); // lwz @ 0x807B84D0
    r4 = *(8 + r4); // lwz @ 0x807B84D8
    r4 = *(0x14 + r4); // lwz @ 0x807B84DC
    FUN_807D9EA4(r3); // bl 0x807D9EA4
    /* lfs f0, 8(r1) */ // 0x807B84E4
    /* lis r3, 0 */ // 0x807B84E8
    /* stfs f0, 0(r31) */ // 0x807B84EC
    /* lfs f0, 0xc(r1) */ // 0x807B84F0
    /* stfs f0, 4(r31) */ // 0x807B84F4
    /* lfs f0, 0x10(r1) */ // 0x807B84F8
    /* stfs f0, 8(r31) */ // 0x807B84FC
    /* lfs f0, 0(r3) */ // 0x807B8500
    /* stfs f0, 0xc(r31) */ // 0x807B8504
    /* lfs f0, 0(r3) */ // 0x807B8508
    /* stfs f0, 0x10(r31) */ // 0x807B850C
    r31 = *(0x1c + r1); // lwz @ 0x807B8510
    r0 = *(0x24 + r1); // lwz @ 0x807B8514
    return;
}