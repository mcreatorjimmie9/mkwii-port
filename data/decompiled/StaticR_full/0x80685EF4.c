/* Function at 0x80685EF4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80685EF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* slwi r0, r4, 2 */ // 0x80685F00
    *(0xc + r1) = r31; // stw @ 0x80685F04
    r31 = r3 + r0; // 0x80685F08
    *(8 + r1) = r30; // stw @ 0x80685F0C
    r30 = r4;
    r3 = r30;
    FUN_8068657C(r3); // bl 0x8068657C
    *(8 + r31) = r3; // stw @ 0x80685F1C
    r4 = r30;
    FUN_80671220(r3, r4); // bl 0x80671220
    r0 = *(0x14 + r1); // lwz @ 0x80685F28
    r31 = *(0xc + r1); // lwz @ 0x80685F2C
    r30 = *(8 + r1); // lwz @ 0x80685F30
    return;
}