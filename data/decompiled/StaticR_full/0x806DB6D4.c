/* Function at 0x806DB6D4, size=260 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806DB6D4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 2 */ // 0x806DB6E0
    *(0x2c + r1) = r31; // stw @ 0x806DB6E4
    /* lis r31, 0 */ // 0x806DB6E8
    r31 = r31 + 0; // 0x806DB6EC
    *(0x28 + r1) = r30; // stw @ 0x806DB6F0
    /* lis r30, 0 */ // 0x806DB6F4
    r30 = r30 + 0; // 0x806DB6F8
    *(0x24 + r1) = r29; // stw @ 0x806DB6FC
    r29 = r3;
    *(0x180 + r3) = r0; // stw @ 0x806DB704
    /* lfs f0, 0x10(r31) */ // 0x806DB708
    /* stfs f0, 0x1a0(r3) */ // 0x806DB70C
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lfs f1, 0x38(r30) */ // 0x806DB718
    /* lfs f0, 0x14(r31) */ // 0x806DB720
    /* fmuls f1, f1, f0 */ // 0x806DB724
    FUN_805E3728(r3); // bl 0x805E3728
    /* lfs f2, 0x194(r29) */ // 0x806DB72C
    /* lfs f0, 0x14(r31) */ // 0x806DB730
    /* fsubs f0, f2, f0 */ // 0x806DB734
    /* fadds f1, f0, f1 */ // 0x806DB738
    /* stfs f1, 0x1a4(r29) */ // 0x806DB73C
    /* lfs f0, 0xc(r31) */ // 0x806DB740
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DB744
    if (>=) goto 0x0x806db754;
    /* stfs f0, 0x1a4(r29) */ // 0x806DB74C
    /* b 0x806db764 */ // 0x806DB750
    /* lfs f0, 8(r31) */ // 0x806DB754
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DB758
    if (<=) goto 0x0x806db764;
    /* stfs f0, 0x1a4(r29) */ // 0x806DB760
    /* lfs f0, 0x34(r30) */ // 0x806DB764
    /* lis r4, 0 */ // 0x806DB768
    /* stfs f0, 0x1a8(r29) */ // 0x806DB76C
    r4 = r4 + 0; // 0x806DB770
    /* lfs f1, 0x38(r30) */ // 0x806DB774
    /* lfs f0, 0x1c(r4) */ // 0x806DB77C
    /* stfs f0, 0x1ac(r29) */ // 0x806DB780
    FUN_805E3728(r4, r3); // bl 0x805E3728
    /* lfs f0, 0x64(r30) */ // 0x806DB788
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DB78C
    /* mfcr r0 */ // 0x806DB790
    r4 = *(0x18c + r29); // lwz @ 0x806DB794
    /* srwi r0, r0, 0x1f */ // 0x806DB798
    *(0x1b0 + r29) = r0; // stb @ 0x806DB79C
    /* li r5, 0xff */ // 0x806DB7A0
    *(0xb8 + r4) = r5; // stb @ 0x806DB7A8
    /* li r0, 0 */ // 0x806DB7AC
    /* li r4, -1 */ // 0x806DB7B0
    *(0x80 + r29) = r0; // stb @ 0x806DB7B4
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x806DB7BC
    r31 = *(0x2c + r1); // lwz @ 0x806DB7C0
    r30 = *(0x28 + r1); // lwz @ 0x806DB7C4
    r29 = *(0x24 + r1); // lwz @ 0x806DB7C8
    return;
}