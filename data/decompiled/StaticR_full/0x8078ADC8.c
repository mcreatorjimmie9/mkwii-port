/* Function at 0x8078ADC8, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8078ADC8(int r3, int r4, int r5, int r6)
{
    *(0x10 + r3) = r4; // stw @ 0x8078ADC8
    /* lis r6, 0 */ // 0x8078ADCC
    /* lis r4, 0 */ // 0x8078ADD0
    /* lis r5, 0 */ // 0x8078ADD4
    r6 = *(0 + r6); // lwz @ 0x8078ADD8
    /* li r0, 0 */ // 0x8078ADDC
    /* lfs f0, 0(r4) */ // 0x8078ADE0
    r4 = *(0x4c + r6); // lbz @ 0x8078ADE4
    *(0 + r5) = r4; // stb @ 0x8078ADE8
    /* stfs f0, 0x17c(r3) */ // 0x8078ADEC
    *(0x180 + r3) = r0; // stw @ 0x8078ADF0
    *(0x184 + r3) = r0; // stw @ 0x8078ADF4
    return;
}