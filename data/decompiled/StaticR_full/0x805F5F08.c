/* Function at 0x805F5F08, size=144 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F5F08(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805F5F10
    /* lis r7, 0 */ // 0x805F5F14
    *(0x34 + r1) = r0; // stw @ 0x805F5F18
    /* lfs f0, 0(r6) */ // 0x805F5F1C
    *(0x2c + r1) = r31; // stw @ 0x805F5F20
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x805F5F28
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x805F5F30
    r29 = r3;
    /* lfs f1, 0(r7) */ // 0x805F5F38
    /* stfs f1, 8(r1) */ // 0x805F5F3C
    /* stfs f0, 0xc(r1) */ // 0x805F5F40
    /* stfs f0, 0x10(r1) */ // 0x805F5F44
    /* stfs f1, 0x28(r3) */ // 0x805F5F48
    /* stfs f0, 0x2c(r3) */ // 0x805F5F4C
    /* stfs f0, 0x30(r3) */ // 0x805F5F50
    /* li r3, 3 */ // 0x805F5F54
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F5F5C
    *(0 + r29) = r30; // stw @ 0x805F5F60
    if (==) goto 0x0x805f5f7c;
    r0 = *(0x34 + r29); // lhz @ 0x805F5F6C
    *(4 + r29) = r31; // stw @ 0x805F5F70
    r0 = r0 | 1; // 0x805F5F74
    *(0x34 + r29) = r0; // sth @ 0x805F5F78
    r0 = *(0x34 + r1); // lwz @ 0x805F5F7C
    r31 = *(0x2c + r1); // lwz @ 0x805F5F80
    r30 = *(0x28 + r1); // lwz @ 0x805F5F84
    r29 = *(0x24 + r1); // lwz @ 0x805F5F88
    return;
}