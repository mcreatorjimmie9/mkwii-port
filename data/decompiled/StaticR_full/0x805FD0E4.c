/* Function at 0x805FD0E4, size=300 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805FD0E4(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x48 + r1) = r30; // stw @ 0x805FD0F8
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x805FD100
    r29 = r3;
    if (!=) goto 0x0x805fd170;
    /* lfs f0, 0x254(r3) */ // 0x805FD10C
    /* stfs f0, 8(r1) */ // 0x805FD110
    /* lfs f0, 0x258(r3) */ // 0x805FD114
    /* stfs f0, 0xc(r1) */ // 0x805FD118
    /* lfs f0, 0x25c(r3) */ // 0x805FD11C
    /* stfs f0, 0x10(r1) */ // 0x805FD120
    /* lfs f0, 0x260(r3) */ // 0x805FD124
    /* stfs f0, 0x14(r1) */ // 0x805FD128
    /* lfs f0, 0x264(r3) */ // 0x805FD12C
    /* stfs f0, 0x18(r1) */ // 0x805FD130
    /* lfs f0, 0x268(r3) */ // 0x805FD134
    /* stfs f0, 0x1c(r1) */ // 0x805FD138
    /* lfs f0, 0x26c(r3) */ // 0x805FD13C
    /* stfs f0, 0x20(r1) */ // 0x805FD140
    /* lfs f0, 0x270(r3) */ // 0x805FD144
    /* stfs f0, 0x24(r1) */ // 0x805FD148
    /* lfs f0, 0x274(r3) */ // 0x805FD14C
    /* stfs f0, 0x28(r1) */ // 0x805FD150
    /* lfs f0, 0x278(r3) */ // 0x805FD154
    /* stfs f0, 0x2c(r1) */ // 0x805FD158
    /* lfs f0, 0x27c(r3) */ // 0x805FD15C
    /* stfs f0, 0x30(r1) */ // 0x805FD160
    /* lfs f0, 0x280(r3) */ // 0x805FD164
    /* stfs f0, 0x34(r1) */ // 0x805FD168
    /* b 0x805fd194 */ // 0x805FD16C
    FUN_8061DC48(); // bl 0x8061DC48
    r31 = r3;
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r4 = r3;
    r4 = r4 + 0x100; // 0x805FD188
    r5 = r31 + 0x68; // 0x805FD18C
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
    /* lfs f0, 8(r1) */ // 0x805FD194
    /* stfs f0, 0x1c(r30) */ // 0x805FD198
    /* lfs f0, 0xc(r1) */ // 0x805FD19C
    /* stfs f0, 0x20(r30) */ // 0x805FD1A0
    /* lfs f0, 0x10(r1) */ // 0x805FD1A4
    /* stfs f0, 0x24(r30) */ // 0x805FD1A8
    /* lfs f0, 0x14(r1) */ // 0x805FD1AC
    /* stfs f0, 0x28(r30) */ // 0x805FD1B0
    /* lfs f0, 0x18(r1) */ // 0x805FD1B4
    /* stfs f0, 0x2c(r30) */ // 0x805FD1B8
    /* lfs f0, 0x1c(r1) */ // 0x805FD1BC
    /* stfs f0, 0x30(r30) */ // 0x805FD1C0
    /* lfs f0, 0x20(r1) */ // 0x805FD1C4
    /* stfs f0, 0x34(r30) */ // 0x805FD1C8
    /* lfs f0, 0x24(r1) */ // 0x805FD1CC
    /* stfs f0, 0x38(r30) */ // 0x805FD1D0
    /* lfs f0, 0x28(r1) */ // 0x805FD1D4
    /* stfs f0, 0x3c(r30) */ // 0x805FD1D8
    /* lfs f0, 0x2c(r1) */ // 0x805FD1DC
    /* stfs f0, 0x40(r30) */ // 0x805FD1E0
    /* lfs f0, 0x30(r1) */ // 0x805FD1E4
    /* stfs f0, 0x44(r30) */ // 0x805FD1E8
    /* lfs f0, 0x34(r1) */ // 0x805FD1EC
    /* stfs f0, 0x48(r30) */ // 0x805FD1F0
    r31 = *(0x4c + r1); // lwz @ 0x805FD1F4
    r30 = *(0x48 + r1); // lwz @ 0x805FD1F8
    r29 = *(0x44 + r1); // lwz @ 0x805FD1FC
    r0 = *(0x54 + r1); // lwz @ 0x805FD200
    return;
}