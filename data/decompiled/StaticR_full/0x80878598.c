/* Function at 0x80878598, size=176 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80878598(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x58 + r1) = r30; // stw @ 0x808785AC
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x808785B4
    r29 = r3;
    r4 = r29;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r7, 0 */ // 0x808785C8
    r11 = *(0 + r7); // lwzu @ 0x808785CC
    /* lis r4, 0 */ // 0x808785D0
    *(8 + r1) = r11; // stw @ 0x808785D4
    r10 = *(4 + r7); // lwz @ 0x808785D8
    r4 = r4 + 0; // 0x808785DC
    r9 = *(8 + r7); // lwz @ 0x808785E0
    r5 = r30;
    r8 = *(0xc + r7); // lwz @ 0x808785E8
    r6 = r31;
    r0 = *(0x10 + r7); // lwz @ 0x808785F0
    *(0xc + r1) = r10; // stw @ 0x808785F8
    r4 = r4 + 0xe; // 0x808785FC
    *(0x10 + r1) = r9; // stw @ 0x80878604
    *(0x14 + r1) = r8; // stw @ 0x80878608
    *(0x18 + r1) = r0; // stw @ 0x8087860C
    FUN_8064E36C(r4, r7); // bl 0x8064E36C
    /* lis r4, 0 */ // 0x80878614
    /* lfs f0, 0(r4) */ // 0x8087861C
    /* li r4, -1 */ // 0x80878620
    /* stfs f0, 0x7c(r29) */ // 0x80878624
    FUN_8064E32C(r4, r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x8087862C
    r31 = *(0x5c + r1); // lwz @ 0x80878630
    r30 = *(0x58 + r1); // lwz @ 0x80878634
    r29 = *(0x54 + r1); // lwz @ 0x80878638
    return;
}