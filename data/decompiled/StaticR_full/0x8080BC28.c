/* Function at 0x8080BC28, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8080BC28(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x38(r1) */ // 0x8080BC34
    /* fmr f31, f1 */ // 0x8080BC38
    *(0x34 + r1) = r31; // stw @ 0x8080BC3C
    r31 = r4;
    r4 = r5;
    *(0x30 + r1) = r30; // stw @ 0x8080BC48
    r30 = r3;
    r5 = r31;
    FUN_805A4498(r4, r5, r3); // bl 0x805A4498
    /* fmr f1, f31 */ // 0x8080BC5C
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    r4 = r31;
    FUN_805A4464(r4, r4, r3, r5); // bl 0x805A4464
    r3 = *(8 + r1); // lwz @ 0x8080BC7C
    r0 = *(0xc + r1); // lwz @ 0x8080BC80
    *(4 + r30) = r0; // stw @ 0x8080BC84
    *(0 + r30) = r3; // stw @ 0x8080BC88
    r0 = *(0x10 + r1); // lwz @ 0x8080BC8C
    *(8 + r30) = r0; // stw @ 0x8080BC90
    /* lfd f31, 0x38(r1) */ // 0x8080BC94
    r31 = *(0x34 + r1); // lwz @ 0x8080BC98
    r30 = *(0x30 + r1); // lwz @ 0x8080BC9C
    r0 = *(0x44 + r1); // lwz @ 0x8080BCA0
    return;
}