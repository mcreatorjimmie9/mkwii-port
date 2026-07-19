/* Function at 0x806BA288, size=248 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806BA288(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r30, 0 */ // 0x806BA29C
    r30 = r30 + 0; // 0x806BA2A0
    *(0x64 + r1) = r29; // stw @ 0x806BA2A4
    r29 = r4;
    *(0x60 + r1) = r28; // stw @ 0x806BA2AC
    r28 = r3;
    r4 = r28;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    r5 = r30 + 0x250; // 0x806BA2C0
    r7 = *(0x250 + r30); // lwz @ 0x806BA2C4
    r12 = *(4 + r5); // lwz @ 0x806BA2C8
    /* lis r31, 0 */ // 0x806BA2CC
    r11 = *(8 + r5); // lwz @ 0x806BA2D0
    r31 = r31 + 0; // 0x806BA2D4
    r10 = *(0xc + r5); // lwz @ 0x806BA2D8
    r6 = r29;
    r9 = *(0x10 + r5); // lwz @ 0x806BA2E0
    r8 = *(0x14 + r5); // lwz @ 0x806BA2E8
    r4 = r31 + 0xf3; // 0x806BA2EC
    r0 = *(0x18 + r5); // lwz @ 0x806BA2F0
    r5 = r31 + 0xfa; // 0x806BA2F4
    *(0x10 + r1) = r7; // stw @ 0x806BA2F8
    *(0x14 + r1) = r12; // stw @ 0x806BA300
    *(0x18 + r1) = r11; // stw @ 0x806BA304
    *(0x1c + r1) = r10; // stw @ 0x806BA308
    *(0x20 + r1) = r9; // stw @ 0x806BA30C
    *(0x24 + r1) = r8; // stw @ 0x806BA310
    *(0x28 + r1) = r0; // stw @ 0x806BA314
    FUN_8064E36C(); // bl 0x8064E36C
    r4 = r31 + 0x106; // 0x806BA31C
    r3 = r28 + 0xa8; // 0x806BA320
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    /* lis r4, 0 */ // 0x806BA328
    r4 = *(0 + r4); // lwz @ 0x806BA32C
    r0 = *(0xb90 + r4); // lwz @ 0x806BA330
    /* clrlwi. r0, r0, 0x1f */ // 0x806BA334
    if (==) goto 0x0x806ba354;
    /* lfs f1, 0x26c(r30) */ // 0x806BA33C
    /* stfs f1, 0x44(r3) */ // 0x806BA340
    /* lfs f0, 0x270(r30) */ // 0x806BA344
    /* stfs f1, 8(r1) */ // 0x806BA348
    /* stfs f0, 0xc(r1) */ // 0x806BA34C
    /* stfs f0, 0x48(r3) */ // 0x806BA350
    /* li r4, -1 */ // 0x806BA358
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x74 + r1); // lwz @ 0x806BA360
    r31 = *(0x6c + r1); // lwz @ 0x806BA364
    r30 = *(0x68 + r1); // lwz @ 0x806BA368
    r29 = *(0x64 + r1); // lwz @ 0x806BA36C
    r28 = *(0x60 + r1); // lwz @ 0x806BA370
    return;
}