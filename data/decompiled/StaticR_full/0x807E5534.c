/* Function at 0x807E5534, size=104 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E5534(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807E553C
    *(0x54 + r1) = r0; // stw @ 0x807E5540
    /* lfs f1, 0(r6) */ // 0x807E5548
    *(0x4c + r1) = r31; // stw @ 0x807E554C
    r31 = r3;
    r4 = r31 + 0xb4; // 0x807E5554
    r8 = *(0x20 + r3); // lwz @ 0x807E5558
    r7 = *(0x24 + r8); // lwz @ 0x807E5560
    r0 = *(0x28 + r8); // lwz @ 0x807E5564
    *(0x3c + r1) = r0; // stw @ 0x807E5568
    *(0x38 + r1) = r7; // stw @ 0x807E556C
    r0 = *(0x2c + r8); // lwz @ 0x807E5570
    *(0x40 + r1) = r0; // stw @ 0x807E5574
    FUN_807E5630(); // bl 0x807E5630
    /* lfs f0, 0x14(r1) */ // 0x807E557C
    r3 = r31 + 0xb4; // 0x807E5580
    /* stfs f0, 0xb4(r31) */ // 0x807E5584
    /* lfs f0, 0x18(r1) */ // 0x807E5588
    /* stfs f0, 0xb8(r31) */ // 0x807E558C
    /* lfs f0, 0x1c(r1) */ // 0x807E5590
    /* stfs f0, 0xbc(r31) */ // 0x807E5594
    FUN_805E3430(); // bl 0x805E3430
}