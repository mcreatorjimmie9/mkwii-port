/* Function at 0x807B8080, size=508 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807B8080(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807B8094
    *(0x14 + r1) = r29; // stw @ 0x807B8098
    /* lis r29, 0 */ // 0x807B809C
    r29 = r29 + 0; // 0x807B80A0
    FUN_807B6F84(); // bl 0x807B6F84
    /* li r0, 2 */ // 0x807B80A8
    *(0x5c + r31) = r0; // stw @ 0x807B80AC
    r3 = *(0x44 + r31); // lwz @ 0x807B80B0
    r12 = *(0 + r3); // lwz @ 0x807B80B4
    r12 = *(0xc + r12); // lwz @ 0x807B80B8
    /* mtctr r12 */ // 0x807B80BC
    /* bctrl  */ // 0x807B80C0
    r12 = *(0x34 + r31); // lwz @ 0x807B80C4
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x807B80CC
    /* mtctr r12 */ // 0x807B80D0
    /* bctrl  */ // 0x807B80D4
    r3 = *(0x194 + r31); // lwz @ 0x807B80D8
    /* li r30, 0 */ // 0x807B80DC
    *(0xc + r3) = r30; // stw @ 0x807B80E0
    *(0x24 + r3) = r30; // stw @ 0x807B80E4
    *(0x10 + r3) = r30; // stw @ 0x807B80E8
    *(0x28 + r3) = r30; // stw @ 0x807B80EC
    *(0x14 + r3) = r30; // stw @ 0x807B80F0
    *(0x2c + r3) = r30; // stw @ 0x807B80F4
    *(0x18 + r3) = r30; // stw @ 0x807B80F8
    *(0x30 + r3) = r30; // stw @ 0x807B80FC
    *(0x1c + r3) = r30; // stw @ 0x807B8100
    *(0x34 + r3) = r30; // stw @ 0x807B8104
    *(0x20 + r3) = r30; // stw @ 0x807B8108
    *(0x38 + r3) = r30; // stw @ 0x807B810C
    *(8 + r3) = r30; // stw @ 0x807B8110
    *(0x3c + r3) = r30; // stw @ 0x807B8114
    r3 = *(0x198 + r31); // lwz @ 0x807B8118
    r12 = *(0 + r3); // lwz @ 0x807B811C
    r12 = *(0xc + r12); // lwz @ 0x807B8120
    /* mtctr r12 */ // 0x807B8124
    /* bctrl  */ // 0x807B8128
    /* lis r3, 0 */ // 0x807B812C
    r5 = *(0x19c + r31); // lwz @ 0x807B8130
    /* lfs f0, 0(r3) */ // 0x807B8134
    /* li r4, -1 */ // 0x807B8138
    /* stfs f0, 0x18(r5) */ // 0x807B813C
    /* li r0, 1 */ // 0x807B8140
    /* lis r3, 0 */ // 0x807B8144
    /* stfs f0, 0x14(r5) */ // 0x807B8148
    /* stfs f0, 0x10(r5) */ // 0x807B814C
    /* stfs f0, 0x24(r5) */ // 0x807B8150
    /* stfs f0, 0x20(r5) */ // 0x807B8154
    /* stfs f0, 0x1c(r5) */ // 0x807B8158
    /* stfs f0, 0x28(r5) */ // 0x807B815C
    /* stfs f0, 0x2c(r5) */ // 0x807B8160
    *(0x30 + r5) = r30; // stw @ 0x807B8164
    *(0x34 + r5) = r4; // stw @ 0x807B8168
    *(0x38 + r5) = r4; // stw @ 0x807B816C
    *(0x3c + r5) = r4; // stw @ 0x807B8170
    *(0x40 + r5) = r4; // stw @ 0x807B8174
    *(0x44 + r5) = r4; // stw @ 0x807B8178
    *(0x48 + r5) = r30; // stw @ 0x807B817C
    *(0x4c + r5) = r30; // stw @ 0x807B8180
    r5 = *(0x1a0 + r31); // lwz @ 0x807B8184
    /* stfs f0, 0x18(r5) */ // 0x807B8188
    /* stfs f0, 0x14(r5) */ // 0x807B818C
    /* stfs f0, 0x10(r5) */ // 0x807B8190
    /* stfs f0, 0x24(r5) */ // 0x807B8194
    /* stfs f0, 0x20(r5) */ // 0x807B8198
    /* stfs f0, 0x1c(r5) */ // 0x807B819C
    /* stfs f0, 0x28(r5) */ // 0x807B81A0
    /* stfs f0, 0x2c(r5) */ // 0x807B81A4
    *(0x30 + r5) = r30; // stw @ 0x807B81A8
    *(0x34 + r5) = r4; // stw @ 0x807B81AC
    *(0x38 + r5) = r4; // stw @ 0x807B81B0
    *(0x3c + r5) = r4; // stw @ 0x807B81B4
    *(0x40 + r5) = r4; // stw @ 0x807B81B8
    *(0x44 + r5) = r4; // stw @ 0x807B81BC
    *(0x48 + r5) = r30; // stw @ 0x807B81C0
    *(0x4c + r5) = r30; // stw @ 0x807B81C4
    r4 = *(0x38 + r31); // lwz @ 0x807B81C8
    r4 = *(0 + r4); // lwz @ 0x807B81CC
    r4 = *(0x10 + r4); // lwz @ 0x807B81D0
    r4 = *(0x14c + r4); // lwz @ 0x807B81D4
    *(0x1a1 + r4) = r0; // stb @ 0x807B81D8
    r4 = *(0x1a4 + r31); // lwz @ 0x807B81DC
    *(0x1a8 + r31) = r30; // stw @ 0x807B81E0
    *(0x1ac + r31) = r30; // stw @ 0x807B81E4
    *(0 + r4) = r30; // stw @ 0x807B81E8
    *(4 + r4) = r30; // stw @ 0x807B81EC
    *(8 + r4) = r30; // stw @ 0x807B81F0
    *(0xc + r4) = r30; // stw @ 0x807B81F4
    r3 = *(0 + r3); // lwz @ 0x807B81F8
    FUN_807BFFC0(); // bl 0x807BFFC0
    if (==) goto 0x0x807b821c;
    if (==) goto 0x0x807b822c;
    if (==) goto 0x0x807b823c;
    /* b 0x807b8248 */ // 0x807B8218
    r3 = *(0x58 + r31); // lwz @ 0x807B821C
    r0 = *(0x72 + r29); // lha @ 0x807B8220
    *(8 + r3) = r0; // stw @ 0x807B8224
    /* b 0x807b8248 */ // 0x807B8228
    r3 = *(0x58 + r31); // lwz @ 0x807B822C
    r0 = *(0x74 + r29); // lha @ 0x807B8230
    *(8 + r3) = r0; // stw @ 0x807B8234
    /* b 0x807b8248 */ // 0x807B8238
    r3 = *(0x58 + r31); // lwz @ 0x807B823C
    r0 = *(0x76 + r29); // lha @ 0x807B8240
    *(8 + r3) = r0; // stw @ 0x807B8244
    FUN_807C0164(); // bl 0x807C0164
    if (!=) goto 0x0x807b8260;
    r3 = r31;
    r4 = r31 + 0x60; // 0x807B8258
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807B8260
    r31 = *(0x1c + r1); // lwz @ 0x807B8264
    r30 = *(0x18 + r1); // lwz @ 0x807B8268
    r29 = *(0x14 + r1); // lwz @ 0x807B826C
    return;
}