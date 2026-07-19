/* Function at 0x807C3F5C, size=808 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 10 function(s) */

int FUN_807C3F5C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807C3F74
    *(0x10 + r1) = r28; // stw @ 0x807C3F78
    r0 = *(0x24 + r3); // lwz @ 0x807C3F7C
    if (==) goto 0x0x807c3f94;
    if (==) goto 0x0x807c4114;
    /* b 0x807c4264 */ // 0x807C3F90
    r5 = *(0x28 + r3); // lwz @ 0x807C3F94
    /* lis r4, 0 */ // 0x807C3F98
    r5 = r5 + 1; // 0x807C3F9C
    *(0x28 + r3) = r5; // stw @ 0x807C3FA0
    r0 = *(0 + r4); // lha @ 0x807C3FA4
    if (<=) goto 0x0x807c4058;
    r28 = *(4 + r3); // lwz @ 0x807C3FB0
    if (<=) goto 0x0x807c4050;
    /* lis r30, 0 */ // 0x807C3FBC
    r4 = r28;
    r3 = *(0 + r30); // lwz @ 0x807C3FC4
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r28; // 0x807C3FCC
    r29 = *(4 + r31); // lwz @ 0x807C3FD0
    r0 = r0 * r28; // 0x807C3FD4
    /* subf r0, r0, r3 */ // 0x807C3FD8
    /* slwi r0, r0, 2 */ // 0x807C3FDC
    r3 = r31 + r0; // 0x807C3FE0
    r28 = *(0xc + r3); // lwz @ 0x807C3FE4
    if (==) goto 0x0x807c4014;
    r3 = *(0 + r30); // lwz @ 0x807C3FF0
    r4 = r29 + -1; // 0x807C3FF4
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r28); // lwz @ 0x807C3FFC
    r4 = r4 + 1; // 0x807C4000
    r0 = r4 / r29; // 0x807C4004
    r0 = r0 * r29; // 0x807C4008
    /* subf r4, r0, r4 */ // 0x807C400C
    /* b 0x807c4024 */ // 0x807C4010
    r3 = *(0 + r30); // lwz @ 0x807C4014
    r4 = r29;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C4020
    r3 = r4 + r3; // 0x807C4024
    r4 = *(0x18 + r28); // lwz @ 0x807C4028
    r0 = r3 / r29; // 0x807C402C
    r0 = r0 * r29; // 0x807C4030
    /* subf r3, r0, r3 */ // 0x807C4034
    /* slwi r0, r3, 2 */ // 0x807C4038
    r3 = r31 + r0; // 0x807C403C
    r3 = *(0xc + r3); // lwz @ 0x807C4040
    r0 = *(0x18 + r3); // lwz @ 0x807C4044
    *(0x18 + r28) = r0; // stw @ 0x807C4048
    *(0x18 + r3) = r4; // stw @ 0x807C404C
    /* li r0, 0 */ // 0x807C4050
    *(0x28 + r31) = r0; // stw @ 0x807C4054
    /* lis r3, 0 */ // 0x807C4058
    r3 = *(0 + r3); // lwz @ 0x807C405C
    FUN_805C2BFC(r3); // bl 0x805C2BFC
    r0 = *(4 + r31); // lwz @ 0x807C4064
    r30 = r3;
    r5 = r31;
    /* li r3, 0 */ // 0x807C4070
    /* mtctr r0 */ // 0x807C4074
    if (<=) goto 0x0x807c40a0;
    r4 = *(0xc + r5); // lwz @ 0x807C4080
    r0 = *(0x18 + r4); // lwz @ 0x807C4084
    if (!=) goto 0x0x807c4098;
    r3 = r4;
    /* b 0x807c40a0 */ // 0x807C4094
    r5 = r5 + 4; // 0x807C4098
    if (counter-- != 0) goto 0x0x807c4080;
    if (==) goto 0x0x807c40e0;
    r3 = *(4 + r3); // lwz @ 0x807C40A8
    r3 = *(0 + r3); // lwz @ 0x807C40AC
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C40B4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807C40BC
    /* clrlwi r4, r30, 0x18 */ // 0x807C40C0
    r3 = *(0xc + r3); // lwz @ 0x807C40C4
    /* lwzx r3, r3, r0 */ // 0x807C40C8
    r0 = *(0x26 + r3); // lbz @ 0x807C40CC
    if (!=) goto 0x0x807c40e0;
    /* li r0, 1 */ // 0x807C40D8
    /* b 0x807c40e4 */ // 0x807C40DC
    /* li r0, 0 */ // 0x807C40E0
    if (==) goto 0x0x807c4264;
    /* lis r4, 0 */ // 0x807C40EC
    r3 = *(0x24 + r31); // lwz @ 0x807C40F0
    r4 = *(0 + r4); // lha @ 0x807C40F4
    r0 = r3 + 1; // 0x807C40F8
    /* srwi r3, r4, 0x1f */ // 0x807C40FC
    *(0x24 + r31) = r0; // stw @ 0x807C4100
    r0 = r3 + r4; // 0x807C4104
    r0 = r0 >> 1; // srawi
    *(0x28 + r31) = r0; // stw @ 0x807C410C
    /* b 0x807c4264 */ // 0x807C4110
    r5 = *(0x28 + r3); // lwz @ 0x807C4114
    /* lis r4, 0 */ // 0x807C4118
    r5 = r5 + 1; // 0x807C411C
    *(0x28 + r3) = r5; // stw @ 0x807C4120
    r0 = *(0 + r4); // lha @ 0x807C4124
    if (<=) goto 0x0x807c4264;
    r29 = *(4 + r3); // lwz @ 0x807C4130
    if (<=) goto 0x0x807c41d0;
    /* lis r30, 0 */ // 0x807C413C
    r4 = r29;
    r3 = *(0 + r30); // lwz @ 0x807C4144
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r29; // 0x807C414C
    r28 = *(4 + r31); // lwz @ 0x807C4150
    r0 = r0 * r29; // 0x807C4154
    /* subf r0, r0, r3 */ // 0x807C4158
    /* slwi r0, r0, 2 */ // 0x807C415C
    r3 = r31 + r0; // 0x807C4160
    r29 = *(0xc + r3); // lwz @ 0x807C4164
    if (==) goto 0x0x807c4194;
    r3 = *(0 + r30); // lwz @ 0x807C4170
    r4 = r28 + -1; // 0x807C4174
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r29); // lwz @ 0x807C417C
    r4 = r4 + 1; // 0x807C4180
    r0 = r4 / r28; // 0x807C4184
    r0 = r0 * r28; // 0x807C4188
    /* subf r4, r0, r4 */ // 0x807C418C
    /* b 0x807c41a4 */ // 0x807C4190
    r3 = *(0 + r30); // lwz @ 0x807C4194
    r4 = r28;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C41A0
    r3 = r4 + r3; // 0x807C41A4
    r4 = *(0x18 + r29); // lwz @ 0x807C41A8
    r0 = r3 / r28; // 0x807C41AC
    r0 = r0 * r28; // 0x807C41B0
    /* subf r3, r0, r3 */ // 0x807C41B4
    /* slwi r0, r3, 2 */ // 0x807C41B8
    r3 = r31 + r0; // 0x807C41BC
    r3 = *(0xc + r3); // lwz @ 0x807C41C0
    r0 = *(0x18 + r3); // lwz @ 0x807C41C4
    *(0x18 + r29) = r0; // stw @ 0x807C41C8
    *(0x18 + r3) = r4; // stw @ 0x807C41CC
    r29 = *(4 + r31); // lwz @ 0x807C41D0
    if (<=) goto 0x0x807c425c;
    r28 = *(0xc + r31); // lwz @ 0x807C41DC
    r0 = *(0x18 + r28); // lwz @ 0x807C41E0
    if (!=) goto 0x0x807c425c;
    if (==) goto 0x0x807c421c;
    /* lis r3, 0 */ // 0x807C41F4
    r4 = r29 + -1; // 0x807C41F8
    r3 = *(0 + r3); // lwz @ 0x807C41FC
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r4 = *(0x10 + r28); // lwz @ 0x807C4204
    r4 = r4 + 1; // 0x807C4208
    r0 = r4 / r29; // 0x807C420C
    r0 = r0 * r29; // 0x807C4210
    /* subf r4, r0, r4 */ // 0x807C4214
    /* b 0x807c4230 */ // 0x807C4218
    /* lis r3, 0 */ // 0x807C421C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x807C4224
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C422C
    r3 = r4 + r3; // 0x807C4230
    r4 = *(0x18 + r28); // lwz @ 0x807C4234
    r0 = r3 / r29; // 0x807C4238
    r0 = r0 * r29; // 0x807C423C
    /* subf r3, r0, r3 */ // 0x807C4240
    /* slwi r0, r3, 2 */ // 0x807C4244
    r3 = r31 + r0; // 0x807C4248
    r3 = *(0xc + r3); // lwz @ 0x807C424C
    r0 = *(0x18 + r3); // lwz @ 0x807C4250
    *(0x18 + r28) = r0; // stw @ 0x807C4254
    *(0x18 + r3) = r4; // stw @ 0x807C4258
    /* li r0, 0 */ // 0x807C425C
    *(0x28 + r31) = r0; // stw @ 0x807C4260
    r0 = *(0x24 + r1); // lwz @ 0x807C4264
    r31 = *(0x1c + r1); // lwz @ 0x807C4268
    r30 = *(0x18 + r1); // lwz @ 0x807C426C
    r29 = *(0x14 + r1); // lwz @ 0x807C4270
    r28 = *(0x10 + r1); // lwz @ 0x807C4274
    return;
}