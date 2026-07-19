/* Function at 0x8087E2FC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8087E2FC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8087E304
    /* lis r4, 0 */ // 0x8087E308
    *(0x14 + r1) = r0; // stw @ 0x8087E30C
    /* lfs f0, 0(r4) */ // 0x8087E310
    /* lis r4, 0 */ // 0x8087E314
    *(0xc + r1) = r31; // stw @ 0x8087E318
    /* lis r31, 0 */ // 0x8087E31C
    r31 = r31 + 0; // 0x8087E320
    /* lfs f1, 0(r5) */ // 0x8087E324
    r3 = r31 + 0xc; // 0x8087E328
    /* stfs f1, 0xc(r31) */ // 0x8087E32C
    r4 = r4 + 0; // 0x8087E330
    r5 = r31 + 0; // 0x8087E334
    /* stfs f0, 4(r3) */ // 0x8087E338
    /* stfs f1, 8(r3) */ // 0x8087E33C
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* lis r3, 0 */ // 0x8087E344
    r3 = r3 + 0; // 0x8087E348
    *(0x18 + r31) = r3; // stw @ 0x8087E34C
    *(0x1c + r31) = r3; // stw @ 0x8087E350
    r31 = *(0xc + r1); // lwz @ 0x8087E354
    r0 = *(0x14 + r1); // lwz @ 0x8087E358
    return;
}