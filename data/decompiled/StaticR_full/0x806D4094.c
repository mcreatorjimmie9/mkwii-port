/* Function at 0x806D4094, size=300 bytes */
/* Stack frame: 512 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_806D4094(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -512(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = *(0 + r4); // lwz @ 0x806D40A0
    r31 = r4;
    *(0x1f8 + r1) = r30; // stw @ 0x806D40B0
    r30 = r3;
    *(0x1f4 + r1) = r29; // stw @ 0x806D40B8
    if (==) goto 0x0x806d40cc;
    if (==) goto 0x0x806d4100;
    /* b 0x806d414c */ // 0x806D40C8
    r0 = *(4 + r31); // lwz @ 0x806D40CC
    /* lis r4, 1 */ // 0x806D40D0
    /* lis r6, 0 */ // 0x806D40D4
    r3 = *(0x174 + r3); // lwz @ 0x806D40D8
    /* clrlwi r5, r0, 0x18 */ // 0x806D40DC
    r0 = r4 + -0x6c10; // 0x806D40E0
    r0 = r0 * r5; // 0x806D40E4
    r5 = *(0 + r6); // lwz @ 0x806D40E8
    r4 = *(0x178 + r30); // lwz @ 0x806D40EC
    r5 = r5 + r0; // 0x806D40F0
    r5 = r5 + 0x4e; // 0x806D40F4
    FUN_8066DE9C(r5); // bl 0x8066DE9C
    /* b 0x806d414c */ // 0x806D40FC
    /* lis r3, 0 */ // 0x806D4100
    r4 = *(4 + r4); // lwz @ 0x806D4104
    r3 = *(0 + r3); // lwz @ 0x806D4108
    r3 = *(0 + r3); // lwz @ 0x806D410C
    r3 = *(0x404 + r3); // lwz @ 0x806D4110
    FUN_80659814(r3); // bl 0x80659814
    /* li r0, 0x26 */ // 0x806D4118
    r4 = r3 + 0x21; // 0x806D4120
    /* mtctr r0 */ // 0x806D4124
    r3 = *(1 + r4); // lbz @ 0x806D4128
    /* lbzu r0, 2(r4) */ // 0x806D412C
    *(1 + r5) = r3; // stb @ 0x806D4130
    /* stbu r0, 2(r5) */ // 0x806D4134
    if (counter-- != 0) goto 0x0x806d4128;
    r3 = *(0x174 + r30); // lwz @ 0x806D413C
    r4 = *(0x178 + r30); // lwz @ 0x806D4144
    FUN_8066DDCC(r5); // bl 0x8066DDCC
    FUN_80654ECC(r5, r3); // bl 0x80654ECC
    r3 = *(0x174 + r30); // lwz @ 0x806D4154
    r4 = *(0x178 + r30); // lwz @ 0x806D4158
    FUN_8066E0EC(r3); // bl 0x8066E0EC
    /* lis r29, 0 */ // 0x806D4160
    *(0x168 + r1) = r3; // stw @ 0x806D4164
    r29 = r29 + 0; // 0x806D4168
    r3 = r30;
    r4 = r29 + 0x98; // 0x806D4170
    /* li r5, 0x251d */ // 0x806D4178
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r4 = r29 + 0xa4; // 0x806D4180
    r3 = r30 + 0xa8; // 0x806D4184
    FUN_80665D1C(r6, r5, r4, r3); // bl 0x80665D1C
    r0 = *(0x14 + r31); // lwz @ 0x806D418C
    r5 = r29 + 0xaf; // 0x806D4190
    r6 = *(0xbb + r3); // lbz @ 0x806D4194
    /* li r4, 7 */ // 0x806D4198
    /* cntlzw r7, r0 */ // 0x806D419C
    r0 = *(0x1c + r31); // lwz @ 0x806D41A0
    r6 = r6 rlwinm 0; // rlwinm
    r6 = r7 rlwimi 0x1b; // rlwimi
    *(0xbb + r3) = r6; // stb @ 0x806D41AC
    /* srwi r6, r0, 0x18 */ // 0x806D41B4
    /* crclr cr1eq */ // 0x806D41B8
    FUN_805E3430(r3); // bl 0x805E3430
}