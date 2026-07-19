/* Function at 0x8077AD64, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8077AD64(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8077AD6C
    *(0xc + r1) = r31; // stw @ 0x8077AD74
    /* lis r31, 0 */ // 0x8077AD78
    /* lfs f1, 0(r31) */ // 0x8077AD7C
    *(8 + r1) = r30; // stw @ 0x8077AD80
    r30 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8077AD88
    r12 = *(0 + r3); // lwz @ 0x8077AD8C
    r12 = *(0x10 + r12); // lwz @ 0x8077AD90
    /* mtctr r12 */ // 0x8077AD94
    /* bctrl  */ // 0x8077AD98
    /* lfs f0, 0(r31) */ // 0x8077AD9C
    /* li r5, 0 */ // 0x8077ADA0
    /* li r0, 0x3e8 */ // 0x8077ADA4
    *(0xc8 + r30) = r5; // stb @ 0x8077ADA8
    r3 = r30;
    /* li r4, 0 */ // 0x8077ADB0
    *(0xcc + r30) = r5; // stw @ 0x8077ADB4
    *(0xd0 + r30) = r5; // stw @ 0x8077ADB8
    *(0xd8 + r30) = r0; // stw @ 0x8077ADBC
    /* stfs f0, 0xdc(r30) */ // 0x8077ADC0
    FUN_808A0A44(r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x8077ADC8
    r31 = *(0xc + r1); // lwz @ 0x8077ADCC
    r30 = *(8 + r1); // lwz @ 0x8077ADD0
    return;
}