/* Function at 0x8069AD48, size=244 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8069AD48(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x8069AD5C
    r30 = r30 + 0; // 0x8069AD60
    *(0x34 + r1) = r29; // stw @ 0x8069AD64
    r29 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8069AD70
    r3 = r29 + 0x174; // 0x8069AD74
    r4 = r4 + 0; // 0x8069AD78
    *(0 + r29) = r4; // stw @ 0x8069AD7C
    FUN_806690C4(r4, r3, r4); // bl 0x806690C4
    r3 = r30 + 0x60; // 0x8069AD84
    r31 = *(0x60 + r30); // lwz @ 0x8069AD88
    r12 = *(4 + r3); // lwz @ 0x8069AD8C
    /* lis r10, 0 */ // 0x8069AD90
    r11 = *(8 + r3); // lwz @ 0x8069AD94
    *(0x208 + r29) = r11; // stw @ 0x8069AD9C
    r5 = r30 + 0x6c; // 0x8069ADA0
    r4 = r30 + 0x78; // 0x8069ADA4
    r3 = r29;
    *(0x1f8 + r29) = r10; // stw @ 0x8069ADAC
    *(0x1fc + r29) = r29; // stw @ 0x8069ADB0
    *(0x200 + r29) = r31; // stw @ 0x8069ADB4
    *(0x204 + r29) = r12; // stw @ 0x8069ADB8
    r9 = *(0x6c + r30); // lwz @ 0x8069ADBC
    r8 = *(4 + r5); // lwz @ 0x8069ADC0
    r7 = *(8 + r5); // lwz @ 0x8069ADC4
    *(0x21c + r29) = r7; // stw @ 0x8069ADC8
    *(0x20c + r29) = r10; // stw @ 0x8069ADCC
    *(0x210 + r29) = r29; // stw @ 0x8069ADD0
    *(0x214 + r29) = r9; // stw @ 0x8069ADD4
    *(0x218 + r29) = r8; // stw @ 0x8069ADD8
    r6 = *(0x78 + r30); // lwz @ 0x8069ADDC
    r5 = *(4 + r4); // lwz @ 0x8069ADE0
    r0 = *(8 + r4); // lwz @ 0x8069ADE4
    *(0x230 + r29) = r0; // stw @ 0x8069ADE8
    *(0x220 + r29) = r10; // stw @ 0x8069ADEC
    *(0x224 + r29) = r29; // stw @ 0x8069ADF0
    *(0x228 + r29) = r6; // stw @ 0x8069ADF4
    *(0x22c + r29) = r5; // stw @ 0x8069ADF8
    *(0x20 + r1) = r31; // stw @ 0x8069ADFC
    r31 = *(0x3c + r1); // lwz @ 0x8069AE00
    r30 = *(0x38 + r1); // lwz @ 0x8069AE04
    *(0x10 + r1) = r0; // stw @ 0x8069AE08
    r29 = *(0x34 + r1); // lwz @ 0x8069AE0C
    r0 = *(0x44 + r1); // lwz @ 0x8069AE10
    *(0x24 + r1) = r12; // stw @ 0x8069AE14
    *(0x28 + r1) = r11; // stw @ 0x8069AE18
    *(0x14 + r1) = r9; // stw @ 0x8069AE1C
    *(0x18 + r1) = r8; // stw @ 0x8069AE20
    *(0x1c + r1) = r7; // stw @ 0x8069AE24
    *(8 + r1) = r6; // stw @ 0x8069AE28
    *(0xc + r1) = r5; // stw @ 0x8069AE2C
    return;
}