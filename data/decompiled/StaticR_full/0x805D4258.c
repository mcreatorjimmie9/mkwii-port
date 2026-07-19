/* Function at 0x805D4258, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

int FUN_805D4258(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r6, 1 */ // 0x805D425C
    r0 = r6 + -0x7340; // 0x805D4260
    /* stmw r25, 0x14(r1) */ // 0x805D4264
    r0 = r5 * r0; // 0x805D4268
    r25 = r3 + r0; // 0x805D426C
    r26 = *(0x48 + r25); // lwz @ 0x805D4270
    r27 = *(0x4c + r25); // lwz @ 0x805D4274
    r28 = *(0x50 + r25); // lwz @ 0x805D4278
    r29 = *(0x54 + r25); // lwz @ 0x805D427C
    r30 = *(0x58 + r25); // lwz @ 0x805D4280
    r31 = *(0x5c + r25); // lwz @ 0x805D4284
    r12 = *(0x60 + r25); // lwz @ 0x805D4288
    r11 = *(0x64 + r25); // lwz @ 0x805D428C
    r10 = *(0x68 + r25); // lwz @ 0x805D4290
    r9 = *(0x6c + r25); // lwz @ 0x805D4294
    r8 = *(0x70 + r25); // lwz @ 0x805D4298
    r7 = *(0x74 + r25); // lwz @ 0x805D429C
    r6 = *(0x78 + r25); // lwz @ 0x805D42A0
    r5 = *(0x7c + r25); // lwz @ 0x805D42A4
    r3 = *(0x80 + r25); // lwz @ 0x805D42A8
    r0 = *(0x84 + r25); // lwz @ 0x805D42AC
    *(0 + r4) = r26; // stw @ 0x805D42B0
    *(4 + r4) = r27; // stw @ 0x805D42B4
    *(8 + r4) = r28; // stw @ 0x805D42B8
    *(0xc + r4) = r29; // stw @ 0x805D42BC
    *(0x10 + r4) = r30; // stw @ 0x805D42C0
    *(0x14 + r4) = r31; // stw @ 0x805D42C4
    *(0x18 + r4) = r12; // stw @ 0x805D42C8
    *(0x1c + r4) = r11; // stw @ 0x805D42CC
    *(0x20 + r4) = r10; // stw @ 0x805D42D0
    *(0x24 + r4) = r9; // stw @ 0x805D42D4
    *(0x28 + r4) = r8; // stw @ 0x805D42D8
    *(0x2c + r4) = r7; // stw @ 0x805D42DC
    *(0x30 + r4) = r6; // stw @ 0x805D42E0
    *(0x34 + r4) = r5; // stw @ 0x805D42E4
    *(0x38 + r4) = r3; // stw @ 0x805D42E8
    *(0x3c + r4) = r0; // stw @ 0x805D42EC
    return;
}