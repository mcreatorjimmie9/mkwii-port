/* Function at 0x805B30CC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805B30CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805B30DC
    r30 = r3;
    FUN_805B0B90(); // bl 0x805B0B90
    /* lis r3, 0 */ // 0x805B30E8
    r31 = r30 + 0xd8; // 0x805B30EC
    r3 = r3 + 0; // 0x805B30F0
    *(0 + r30) = r3; // stw @ 0x805B30F4
    r3 = r31;
    FUN_805AE7D4(r3, r3, r3); // bl 0x805AE7D4
    /* lis r5, 0 */ // 0x805B3100
    /* lis r4, 0 */ // 0x805B3104
    r5 = r5 + 0; // 0x805B3108
    *(0 + r31) = r5; // stw @ 0x805B310C
    r4 = r4 + 0; // 0x805B3110
    r3 = r31 + 0x90; // 0x805B3114
    *(0x90 + r31) = r4; // stw @ 0x805B3118
    FUN_805AE488(r5, r4, r3); // bl 0x805AE488
    r3 = r30;
    r4 = r31;
    /* li r5, 0 */ // 0x805B3128
    FUN_805B1180(r3, r4, r5); // bl 0x805B1180
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805B3134
    r30 = *(8 + r1); // lwz @ 0x805B3138
    r0 = *(0x14 + r1); // lwz @ 0x805B313C
    return;
}