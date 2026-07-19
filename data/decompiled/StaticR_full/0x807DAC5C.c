/* Function at 0x807DAC5C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DAC5C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807DAC64
    *(0x24 + r1) = r0; // stw @ 0x807DAC68
    /* lfs f0, 0(r4) */ // 0x807DAC6C
    *(0x1c + r1) = r31; // stw @ 0x807DAC70
    r31 = r3;
    r4 = r31;
    /* stfs f0, 0x28(r3) */ // 0x807DAC7C
    FUN_807D9DE0(r4, r3); // bl 0x807D9DE0
    /* lfs f0, 8(r1) */ // 0x807DAC88
    /* stfs f0, 0x14(r31) */ // 0x807DAC8C
    /* lfs f0, 0xc(r1) */ // 0x807DAC90
    /* stfs f0, 0x18(r31) */ // 0x807DAC94
    /* lfs f0, 0x10(r1) */ // 0x807DAC98
    /* stfs f0, 0x1c(r31) */ // 0x807DAC9C
    r31 = *(0x1c + r1); // lwz @ 0x807DACA0
    r0 = *(0x24 + r1); // lwz @ 0x807DACA4
    return;
}