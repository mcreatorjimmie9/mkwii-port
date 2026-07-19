/* Function at 0x8072E12C, size=364 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8072E12C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x8072E140
    FUN_8073A148(); // bl 0x8073A148
    r3 = r31;
    FUN_8073A39C(r3); // bl 0x8073A39C
    /* lfs f1, 0x74(r31) */ // 0x8072E150
    /* lis r3, 0 */ // 0x8072E154
    /* lfs f0, 0(r3) */ // 0x8072E158
    r3 = r31 + 0x6f4; // 0x8072E15C
    /* fneg f1, f1 */ // 0x8072E160
    /* stfs f0, 8(r1) */ // 0x8072E164
    /* stfs f1, 0xc(r1) */ // 0x8072E170
    /* stfs f0, 0x10(r1) */ // 0x8072E174
    FUN_80743D20(r4, r5); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x8072E17C
    r0 = *(0x6f8 + r31); // lwz @ 0x8072E184
    r4 = r31 + 0x6d0; // 0x8072E188
    *(0x34 + r1) = r0; // stw @ 0x8072E18C
    *(0x30 + r1) = r6; // stw @ 0x8072E194
    r6 = *(0x6fc + r31); // lwz @ 0x8072E198
    r0 = *(0x700 + r31); // lwz @ 0x8072E19C
    *(0x3c + r1) = r0; // stw @ 0x8072E1A0
    *(0x38 + r1) = r6; // stw @ 0x8072E1A4
    r6 = *(0x704 + r31); // lwz @ 0x8072E1A8
    r0 = *(0x708 + r31); // lwz @ 0x8072E1AC
    *(0x44 + r1) = r0; // stw @ 0x8072E1B0
    *(0x40 + r1) = r6; // stw @ 0x8072E1B4
    r6 = *(0x70c + r31); // lwz @ 0x8072E1B8
    r0 = *(0x710 + r31); // lwz @ 0x8072E1BC
    *(0x4c + r1) = r0; // stw @ 0x8072E1C0
    *(0x48 + r1) = r6; // stw @ 0x8072E1C4
    r6 = *(0x714 + r31); // lwz @ 0x8072E1C8
    r0 = *(0x718 + r31); // lwz @ 0x8072E1CC
    *(0x54 + r1) = r0; // stw @ 0x8072E1D0
    *(0x50 + r1) = r6; // stw @ 0x8072E1D4
    r6 = *(0x71c + r31); // lwz @ 0x8072E1D8
    r0 = *(0x720 + r31); // lwz @ 0x8072E1DC
    *(0x5c + r1) = r0; // stw @ 0x8072E1E0
    *(0x58 + r1) = r6; // stw @ 0x8072E1E4
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 0x20(r1) */ // 0x8072E1EC
    /* lfs f1, 0x24(r1) */ // 0x8072E1F0
    /* lfs f0, 0x28(r1) */ // 0x8072E1F4
    /* stfs f2, 0x3c(r1) */ // 0x8072E1F8
    /* stfs f1, 0x4c(r1) */ // 0x8072E1FC
    /* stfs f0, 0x5c(r1) */ // 0x8072E200
    r30 = *(0x23c + r31); // lwz @ 0x8072E204
    if (!=) goto 0x0x8072e218;
    /* li r0, 0 */ // 0x8072E210
    /* b 0x8072e28c */ // 0x8072E214
    r3 = r30 + 0x74; // 0x8072E218
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072e230;
    /* li r3, 0 */ // 0x8072E228
    /* b 0x8072e234 */ // 0x8072E22C
    r3 = *(0xc + r3); // lwz @ 0x8072E230
    /* li r0, 0 */ // 0x8072E238
    if (==) goto 0x0x8072e248;
    if (!=) goto 0x0x8072e24c;
    /* li r0, 1 */ // 0x8072E248
    if (!=) goto 0x0x8072e25c;
    /* li r0, 0 */ // 0x8072E254
    /* b 0x8072e28c */ // 0x8072E258
    r12 = *(0 + r30); // lwz @ 0x8072E25C
    r3 = r30;
    r12 = *(0x78 + r12); // lwz @ 0x8072E268
    /* mtctr r12 */ // 0x8072E26C
    /* bctrl  */ // 0x8072E270
    r12 = *(0 + r30); // lwz @ 0x8072E274
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x8072E27C
    /* mtctr r12 */ // 0x8072E280
    /* bctrl  */ // 0x8072E284
    /* li r0, 1 */ // 0x8072E288
    if (==) goto 0x0x8072e29c;
    /* li r0, 1 */ // 0x8072E294
}