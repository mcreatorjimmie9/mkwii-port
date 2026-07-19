/* Function at 0x807A32F8, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807A32F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807A3308
    r4 = r31 + 0; // 0x807A330C
    *(0x18 + r1) = r30; // stw @ 0x807A3310
    /* li r30, 0 */ // 0x807A3314
    *(0x14 + r1) = r29; // stw @ 0x807A3318
    /* lis r29, 0 */ // 0x807A331C
    r29 = r29 + 0; // 0x807A3320
    *(0xc + r29) = r30; // stw @ 0x807A3324
    r3 = r29 + 0xc; // 0x807A3328
    r5 = r29 + 0; // 0x807A332C
    FUN_8091EFA4(r3, r5); // bl 0x8091EFA4
    *(0x1c + r29) = r30; // stw @ 0x807A3334
    r3 = r29 + 0x1c; // 0x807A3338
    r4 = r31 + 0; // 0x807A333C
    r5 = r29 + 0x10; // 0x807A3340
    FUN_8091EFA4(r3, r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x807A3348
    r31 = *(0x1c + r1); // lwz @ 0x807A334C
    r30 = *(0x18 + r1); // lwz @ 0x807A3350
    r29 = *(0x14 + r1); // lwz @ 0x807A3354
    return;
}