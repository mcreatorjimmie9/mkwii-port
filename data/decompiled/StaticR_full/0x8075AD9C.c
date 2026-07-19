/* Function at 0x8075AD9C, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

void FUN_8075AD9C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8075ADA4
    /* lis r11, 0 */ // 0x8075ADA8
    *(0x44 + r1) = r0; // stw @ 0x8075ADAC
    /* li r6, 4 */ // 0x8075ADB8
    *(0x3c + r1) = r31; // stw @ 0x8075ADBC
    *(0x38 + r1) = r30; // stw @ 0x8075ADC0
    *(0x34 + r1) = r29; // stw @ 0x8075ADC4
    r29 = *(0 + r7); // lwzu @ 0x8075ADC8
    r10 = *(0 + r11); // lwzu @ 0x8075ADCC
    r30 = *(4 + r7); // lwz @ 0x8075ADD0
    r31 = *(8 + r7); // lwz @ 0x8075ADD4
    r12 = *(0xc + r7); // lwz @ 0x8075ADD8
    /* li r7, 0 */ // 0x8075ADDC
    r9 = *(4 + r11); // lwz @ 0x8075ADE0
    r8 = *(8 + r11); // lwz @ 0x8075ADE4
    r0 = *(0xc + r11); // lwz @ 0x8075ADE8
    *(0x18 + r1) = r29; // stw @ 0x8075ADEC
    *(0x1c + r1) = r30; // stw @ 0x8075ADF0
    *(0x20 + r1) = r31; // stw @ 0x8075ADF4
    *(0x24 + r1) = r12; // stw @ 0x8075ADF8
    *(8 + r1) = r10; // stw @ 0x8075ADFC
    *(0xc + r1) = r9; // stw @ 0x8075AE00
    *(0x10 + r1) = r8; // stw @ 0x8075AE04
    *(0x14 + r1) = r0; // stw @ 0x8075AE08
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x8075AE10
    r31 = *(0x3c + r1); // lwz @ 0x8075AE14
    r30 = *(0x38 + r1); // lwz @ 0x8075AE18
    r29 = *(0x34 + r1); // lwz @ 0x8075AE1C
    return;
}