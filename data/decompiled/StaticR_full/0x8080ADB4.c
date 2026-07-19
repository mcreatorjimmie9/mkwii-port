/* Function at 0x8080ADB4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8080ADB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080ADC0
    r31 = r3;
    FUN_8080F1E0(); // bl 0x8080F1E0
    r4 = *(8 + r31); // lwz @ 0x8080ADCC
    /* lis r3, 0 */ // 0x8080ADD0
    /* lis r5, 0 */ // 0x8080ADD4
    /* lfs f1, 0(r3) */ // 0x8080ADD8
    r3 = *(0x28 + r4); // lwz @ 0x8080ADDC
    /* li r4, 0 */ // 0x8080ADE0
    /* lfs f2, 0(r5) */ // 0x8080ADE4
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r31;
    /* li r4, 0 */ // 0x8080ADF0
    FUN_808A0A44(r4, r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x8080ADF8
    r31 = *(0xc + r1); // lwz @ 0x8080ADFC
    return;
}