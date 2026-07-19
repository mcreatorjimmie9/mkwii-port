/* Function at 0x807FC124, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FC124(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807FC12C
    *(0x24 + r1) = r0; // stw @ 0x807FC130
    /* lfs f0, 0(r4) */ // 0x807FC134
    *(0x1c + r1) = r31; // stw @ 0x807FC138
    r31 = r3;
    r5 = *(0xc4 + r3); // lwz @ 0x807FC140
    r0 = *(0xc8 + r3); // lwz @ 0x807FC144
    *(0xc + r1) = r0; // stw @ 0x807FC148
    *(8 + r1) = r5; // stw @ 0x807FC14C
    r0 = *(0xcc + r3); // lwz @ 0x807FC150
    *(0x10 + r1) = r0; // stw @ 0x807FC158
    /* stfs f0, 0xc(r1) */ // 0x807FC15C
    FUN_805E3430(r3); // bl 0x805E3430
}