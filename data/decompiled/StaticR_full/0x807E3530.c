/* Function at 0x807E3530, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E3530(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807E3540
    r31 = r31 + 0; // 0x807E3544
    *(8 + r1) = r30; // stw @ 0x807E3548
    r30 = r3;
    r4 = *(0xb0 + r3); // lwz @ 0x807E3550
    r0 = r4 + -4; // 0x807E3554
    if (>) goto 0x0x807e35a0;
    /* li r0, 4 */ // 0x807E3560
    *(0xb0 + r3) = r0; // stw @ 0x807E3564
    r3 = *(8 + r3); // lwz @ 0x807E3568
    /* li r4, 1 */ // 0x807E356C
    /* lfs f1, 0(r31) */ // 0x807E3570
    /* li r5, 1 */ // 0x807E3574
    r3 = *(0x28 + r3); // lwz @ 0x807E3578
    /* lfs f2, 0xb0(r31) */ // 0x807E357C
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lfs f1, 0(r31) */ // 0x807E3584
    /* li r0, 0x5a */ // 0x807E3588
    /* lfs f0, 0xb0(r31) */ // 0x807E358C
    /* stfs f1, 0x128(r30) */ // 0x807E3590
    *(0x124 + r30) = r0; // stw @ 0x807E3594
    /* stfs f0, 0x18c(r30) */ // 0x807E3598
    /* b 0x807e35c4 */ // 0x807E359C
    r3 = *(8 + r3); // lwz @ 0x807E35A0
    /* li r4, 1 */ // 0x807E35A4
    /* lfs f1, 0(r31) */ // 0x807E35A8
    /* li r5, 1 */ // 0x807E35AC
    r3 = *(0x28 + r3); // lwz @ 0x807E35B0
    /* lfs f2, 0xb0(r31) */ // 0x807E35B4
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* li r0, 8 */ // 0x807E35BC
    *(0xb0 + r30) = r0; // stw @ 0x807E35C0
    /* lfs f0, 0x110(r31) */ // 0x807E35C4
    /* stfs f0, 0x18c(r30) */ // 0x807E35C8
    r31 = *(0xc + r1); // lwz @ 0x807E35CC
    r30 = *(8 + r1); // lwz @ 0x807E35D0
    r0 = *(0x14 + r1); // lwz @ 0x807E35D4
    return;
}