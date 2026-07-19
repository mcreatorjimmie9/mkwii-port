/* Function at 0x806A3044, size=324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806A3044(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806A3058
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806A3060
    r29 = r4;
    r0 = *(0x178 + r3); // lwz @ 0x806A3068
    if (==) goto 0x0x806a30dc;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x806A3078
    r12 = *(0x68 + r12); // lwz @ 0x806A307C
    /* mtctr r12 */ // 0x806A3080
    /* bctrl  */ // 0x806A3084
    r0 = *(0 + r29); // lha @ 0x806A3088
    *(0x10 + r3) = r0; // sth @ 0x806A308C
    r0 = *(2 + r29); // lha @ 0x806A3090
    *(0x12 + r3) = r0; // sth @ 0x806A3094
    r0 = *(4 + r29); // lha @ 0x806A3098
    *(0x14 + r3) = r0; // sth @ 0x806A309C
    r0 = *(6 + r29); // lha @ 0x806A30A0
    *(0x16 + r3) = r0; // sth @ 0x806A30A4
    r3 = *(0x178 + r30); // lwz @ 0x806A30A8
    r12 = *(0 + r3); // lwz @ 0x806A30AC
    r12 = *(0x68 + r12); // lwz @ 0x806A30B0
    /* mtctr r12 */ // 0x806A30B4
    /* bctrl  */ // 0x806A30B8
    r0 = *(0 + r31); // lha @ 0x806A30BC
    *(0x18 + r3) = r0; // sth @ 0x806A30C0
    r0 = *(2 + r31); // lha @ 0x806A30C4
    *(0x1a + r3) = r0; // sth @ 0x806A30C8
    r0 = *(4 + r31); // lha @ 0x806A30CC
    *(0x1c + r3) = r0; // sth @ 0x806A30D0
    r0 = *(6 + r31); // lha @ 0x806A30D4
    *(0x1e + r3) = r0; // sth @ 0x806A30D8
    r3 = *(0x180 + r30); // lwz @ 0x806A30DC
    if (==) goto 0x0x806a316c;
    r12 = *(0 + r3); // lwz @ 0x806A30E8
    /* li r0, 0 */ // 0x806A30EC
    r6 = *(0 + r29); // lhz @ 0x806A30F0
    r12 = *(0x68 + r12); // lwz @ 0x806A30F4
    r5 = *(2 + r29); // lhz @ 0x806A30F8
    r4 = *(4 + r29); // lhz @ 0x806A30FC
    *(8 + r1) = r6; // sth @ 0x806A3100
    *(0xa + r1) = r5; // sth @ 0x806A3104
    *(0xc + r1) = r4; // sth @ 0x806A3108
    *(0xe + r1) = r0; // sth @ 0x806A310C
    /* mtctr r12 */ // 0x806A3110
    /* bctrl  */ // 0x806A3114
    r0 = *(8 + r1); // lha @ 0x806A3118
    *(0x10 + r3) = r0; // sth @ 0x806A311C
    r0 = *(0xa + r1); // lha @ 0x806A3120
    *(0x12 + r3) = r0; // sth @ 0x806A3124
    r0 = *(0xc + r1); // lha @ 0x806A3128
    *(0x14 + r3) = r0; // sth @ 0x806A312C
    r0 = *(0xe + r1); // lha @ 0x806A3130
    *(0x16 + r3) = r0; // sth @ 0x806A3134
    r3 = *(0x180 + r30); // lwz @ 0x806A3138
    r12 = *(0 + r3); // lwz @ 0x806A313C
    r12 = *(0x68 + r12); // lwz @ 0x806A3140
    /* mtctr r12 */ // 0x806A3144
    /* bctrl  */ // 0x806A3148
    r0 = *(0 + r31); // lha @ 0x806A314C
    *(0x18 + r3) = r0; // sth @ 0x806A3150
    r0 = *(2 + r31); // lha @ 0x806A3154
    *(0x1a + r3) = r0; // sth @ 0x806A3158
    r0 = *(4 + r31); // lha @ 0x806A315C
    *(0x1c + r3) = r0; // sth @ 0x806A3160
    r0 = *(6 + r31); // lha @ 0x806A3164
    *(0x1e + r3) = r0; // sth @ 0x806A3168
    r0 = *(0x24 + r1); // lwz @ 0x806A316C
    r31 = *(0x1c + r1); // lwz @ 0x806A3170
    r30 = *(0x18 + r1); // lwz @ 0x806A3174
    r29 = *(0x14 + r1); // lwz @ 0x806A3178
    return;
}