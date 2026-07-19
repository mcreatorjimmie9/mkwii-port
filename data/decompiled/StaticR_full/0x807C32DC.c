/* Function at 0x807C32DC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C32DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0x64 */ // 0x807C32E4
    *(0xc + r1) = r31; // stw @ 0x807C32EC
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807C32F4
    /* lis r30, 0 */ // 0x807C32F8
    r3 = *(0 + r30); // lwz @ 0x807C32FC
    FUN_807C03BC(); // bl 0x807C03BC
    r4 = *(0xc + r31); // lwz @ 0x807C3304
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C330C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C3314
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C331C
    r3 = *(0 + r30); // lwz @ 0x807C3320
    r4 = *(0xc + r4); // lwz @ 0x807C3324
    r3 = *(0x8c + r3); // lwz @ 0x807C3328
    /* lwzx r4, r4, r0 */ // 0x807C332C
    r4 = *(0x20 + r4); // lbz @ 0x807C3330
    r4 = r4 + -1; // 0x807C3334
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(4 + r3); // lbz @ 0x807C333C
    /* clrlwi r3, r31, 0x18 */ // 0x807C3340
    r31 = *(0xc + r1); // lwz @ 0x807C3344
    /* subf r0, r0, r3 */ // 0x807C3348
    r30 = *(8 + r1); // lwz @ 0x807C334C
    /* srwi r3, r0, 0x1f */ // 0x807C3350
    r0 = *(0x14 + r1); // lwz @ 0x807C3354
    return;
}