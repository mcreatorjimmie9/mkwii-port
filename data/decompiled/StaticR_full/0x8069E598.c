/* Function at 0x8069E598, size=160 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069E598(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3;
    *(0x5c + r1) = r31; // stw @ 0x8069E5AC
    *(0x58 + r1) = r30; // stw @ 0x8069E5B0
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r30, 0 */ // 0x8069E5B8
    r31 = *(0 + r30); // lwzu @ 0x8069E5BC
    /* lis r6, 0 */ // 0x8069E5C0
    *(8 + r1) = r31; // stw @ 0x8069E5C4
    r12 = *(4 + r30); // lwz @ 0x8069E5C8
    r6 = r6 + 0; // 0x8069E5CC
    r11 = *(8 + r30); // lwz @ 0x8069E5D0
    r10 = *(0xc + r30); // lwz @ 0x8069E5D8
    r4 = r6 + 0xf8; // 0x8069E5DC
    r9 = *(0x10 + r30); // lwz @ 0x8069E5E0
    r5 = r6 + 0xfe; // 0x8069E5E4
    r8 = *(0x14 + r30); // lwz @ 0x8069E5E8
    r6 = r6 + 0x109; // 0x8069E5EC
    r0 = *(0x18 + r30); // lwz @ 0x8069E5F0
    *(0xc + r1) = r12; // stw @ 0x8069E5F8
    *(0x10 + r1) = r11; // stw @ 0x8069E5FC
    *(0x14 + r1) = r10; // stw @ 0x8069E600
    *(0x18 + r1) = r9; // stw @ 0x8069E604
    *(0x1c + r1) = r8; // stw @ 0x8069E608
    *(0x20 + r1) = r0; // stw @ 0x8069E60C
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8069E618
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x8069E620
    r31 = *(0x5c + r1); // lwz @ 0x8069E624
    r30 = *(0x58 + r1); // lwz @ 0x8069E628
    return;
}