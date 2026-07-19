/* Function at 0x80885F40, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80885F40(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r6 = r3;
    *(0x24 + r1) = r0; // stw @ 0x80885F4C
    *(0x1c + r1) = r31; // stw @ 0x80885F54
    r31 = r4;
    r4 = r5;
    r5 = r6 + 0x30; // 0x80885F60
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x80885F68
    /* stfs f0, 8(r31) */ // 0x80885F6C
    r0 = *(0 + r31); // lwz @ 0x80885F70
    /* lfs f0, 0xc(r1) */ // 0x80885F74
    /* stfs f0, 0xc(r31) */ // 0x80885F78
    r0 = r0 | 0x20; // 0x80885F7C
    /* lfs f0, 0x10(r1) */ // 0x80885F80
    /* stfs f0, 0x10(r31) */ // 0x80885F84
    *(0 + r31) = r0; // stw @ 0x80885F88
    r31 = *(0x1c + r1); // lwz @ 0x80885F8C
    r0 = *(0x24 + r1); // lwz @ 0x80885F90
    return;
}