/* Function at 0x8080A528, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080A528(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8080A530
    *(0x34 + r1) = r0; // stw @ 0x8080A534
    /* lfs f1, 0(r6) */ // 0x8080A53C
    *(0x2c + r1) = r31; // stw @ 0x8080A540
    r31 = r3;
    r4 = r31 + 0xbc; // 0x8080A548
    r8 = *(0x20 + r3); // lwz @ 0x8080A54C
    r7 = *(0x24 + r8); // lwz @ 0x8080A554
    r0 = *(0x28 + r8); // lwz @ 0x8080A558
    *(0x18 + r1) = r0; // stw @ 0x8080A55C
    *(0x14 + r1) = r7; // stw @ 0x8080A560
    r0 = *(0x2c + r8); // lwz @ 0x8080A564
    *(0x1c + r1) = r0; // stw @ 0x8080A568
    FUN_8080A5B0(); // bl 0x8080A5B0
    /* lfs f0, 8(r1) */ // 0x8080A570
    r3 = r31 + 0xbc; // 0x8080A574
    /* stfs f0, 0xbc(r31) */ // 0x8080A578
    /* lfs f0, 0xc(r1) */ // 0x8080A57C
    /* stfs f0, 0xc0(r31) */ // 0x8080A580
    /* lfs f0, 0x10(r1) */ // 0x8080A584
    /* stfs f0, 0xc4(r31) */ // 0x8080A588
    FUN_805E3430(); // bl 0x805E3430
}