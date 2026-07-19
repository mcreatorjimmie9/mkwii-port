/* Function at 0x805F87C8, size=392 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_805F87C8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805F87D8
    *(8 + r1) = r30; // stw @ 0x805F87DC
    r30 = r3;
    r0 = *(0xcc + r3); // lhz @ 0x805F87E4
    /* clrlwi. r0, r0, 0x1f */ // 0x805F87E8
    if (!=) goto 0x0x805f88dc;
    r4 = *(0xe4 + r3); // lwz @ 0x805F87F0
    if (==) goto 0x0x805f8878;
    /* lfs f1, 0xe0(r3) */ // 0x805F87FC
    /* lfs f0, 0x10(r4) */ // 0x805F8800
    /* lfs f2, 0xd0(r3) */ // 0x805F8804
    /* fmuls f0, f1, f0 */ // 0x805F8808
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805F880C
    if (<=) goto 0x0x805f8858;
    /* lfs f1, 0xd4(r3) */ // 0x805F8814
    /* lfs f0, 0xd8(r3) */ // 0x805F8818
    /* fmuls f0, f1, f0 */ // 0x805F881C
    /* stfs f0, 0xd4(r3) */ // 0x805F8820
    /* lfs f1, 4(r4) */ // 0x805F8824
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F8828
    if (<=) goto 0x0x805f8834;
    /* stfs f1, 0xd4(r3) */ // 0x805F8830
    /* lfs f1, 0xd8(r3) */ // 0x805F8834
    /* lfs f0, 0xdc(r3) */ // 0x805F8838
    r4 = *(0xe4 + r3); // lwz @ 0x805F883C
    /* fsubs f0, f1, f0 */ // 0x805F8840
    /* stfs f0, 0xd8(r3) */ // 0x805F8844
    /* lfs f1, 8(r4) */ // 0x805F8848
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F884C
    if (<=) goto 0x0x805f8858;
    /* stfs f1, 0xd8(r3) */ // 0x805F8854
    /* lfs f1, 0xd0(r3) */ // 0x805F8858
    /* lfs f0, 0xd4(r3) */ // 0x805F885C
    /* lfs f2, 0xe0(r3) */ // 0x805F8860
    /* fadds f0, f1, f0 */ // 0x805F8864
    /* stfs f0, 0xd0(r3) */ // 0x805F8868
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805F886C
    if (>=) goto 0x0x805f8878;
    /* stfs f2, 0xd0(r3) */ // 0x805F8874
    /* lfs f1, 0xd0(r3) */ // 0x805F8878
    /* lfs f0, 0x2c(r3) */ // 0x805F887C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F8880
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805F8884
    if (!=) goto 0x0x805f88dc;
    r4 = *(0 + r3); // lwz @ 0x805F888C
    r4 = *(4 + r4); // lwz @ 0x805F8890
    r0 = *(4 + r4); // lwz @ 0x805F8894
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x805F8898
    if (==) goto 0x0x805f88dc;
    r0 = *(0xcc + r3); // lhz @ 0x805F88A0
    r0 = r0 | 1; // 0x805F88A4
    *(0xcc + r3) = r0; // sth @ 0x805F88A8
    r3 = r30;
    FUN_8061E2E8(r3); // bl 0x8061E2E8
    if (!=) goto 0x0x805f88cc;
    r3 = r30;
    FUN_8061DC48(r3, r3); // bl 0x8061DC48
    /* li r0, 0 */ // 0x805F88C4
    *(0x170 + r3) = r0; // stb @ 0x805F88C8
    r3 = r30;
    FUN_8061DC28(r3, r3); // bl 0x8061DC28
    r4 = r30 + 0xb0; // 0x805F88D4
    FUN_8062A210(r3, r4); // bl 0x8062A210
    r0 = *(0xc4 + r30); // lwz @ 0x805F88DC
    if (<) goto 0x0x805f890c;
    r0 = *(0xcc + r30); // lhz @ 0x805F88E8
    /* li r31, 1 */ // 0x805F88EC
    /* clrlwi. r0, r0, 0x1f */ // 0x805F88F0
    if (!=) goto 0x0x805f8944;
    r3 = r30;
    FUN_8061DC28(r3); // bl 0x8061DC28
    r4 = r30 + 0xb0; // 0x805F8900
    FUN_8062A210(r3, r4); // bl 0x8062A210
    /* b 0x805f8944 */ // 0x805F8908
    r0 = *(0xcc + r30); // lhz @ 0x805F890C
    /* clrlwi. r0, r0, 0x1f */ // 0x805F8910
    if (!=) goto 0x0x805f8944;
    /* lis r3, 0 */ // 0x805F8918
    /* lfs f0, 0xd0(r30) */ // 0x805F891C
    /* lfs f1, 0(r3) */ // 0x805F8920
    r3 = r30 + 0xb0; // 0x805F8924
    r4 = r30 + 0x3c; // 0x805F8928
    /* fmuls f1, f1, f0 */ // 0x805F892C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_8061DC28(r3, r4, r3); // bl 0x8061DC28
    r4 = r30 + 0xb0; // 0x805F893C
    FUN_8062A088(r3, r4); // bl 0x8062A088
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805F8948
    r30 = *(8 + r1); // lwz @ 0x805F894C
}