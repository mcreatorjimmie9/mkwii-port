/* Function at 0x8072E4C4, size=440 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8072E4C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8072E4D4
    r31 = r31 + 0; // 0x8072E4D8
    *(0x58 + r1) = r30; // stw @ 0x8072E4DC
    r30 = r3;
    *(0x54 + r1) = r29; // stw @ 0x8072E4E4
    r0 = *(0x14e + r3); // lbz @ 0x8072E4E8
    if (==) goto 0x0x8072e758;
    /* lfs f1, 0x70(r3) */ // 0x8072E4F4
    /* lfs f0, 0x40(r31) */ // 0x8072E4F8
    r6 = *(0x64 + r3); // lwz @ 0x8072E4FC
    /* fsubs f0, f1, f0 */ // 0x8072E500
    /* lfs f1, 0x6d4(r3) */ // 0x8072E504
    r0 = *(0x60 + r3); // lwz @ 0x8072E508
    r5 = r6 >> 0x1f; // srawi
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8072E510
    /* srwi r4, r0, 0x1f */ // 0x8072E514
    /* subfc r0, r0, r6 */ // 0x8072E518
    /* adde r4, r5, r4 */ // 0x8072E51C
    /* mfcr r5 */ // 0x8072E520
    r0 = *(0x14b + r3); // lbz @ 0x8072E524
    /* srwi r5, r5, 0x1f */ // 0x8072E528
    /* li r6, 1 */ // 0x8072E52C
    if (==) goto 0x0x8072e550;
    /* lfs f1, 0x6e0(r3) */ // 0x8072E538
    /* li r6, 0 */ // 0x8072E53C
    /* lfs f0, 0x44(r31) */ // 0x8072E540
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8072E544
    if (>=) goto 0x0x8072e550;
    /* li r6, 1 */ // 0x8072E54C
    if (==) goto 0x0x8072e5e0;
    if (==) goto 0x0x8072e5e0;
    if (==) goto 0x0x8072e5e0;
    r29 = *(0x228 + r3); // lwz @ 0x8072E568
    if (==) goto 0x0x8072e5ac;
    r12 = *(0 + r29); // lwz @ 0x8072E574
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x8072E57C
    /* mtctr r12 */ // 0x8072E580
    /* bctrl  */ // 0x8072E584
    r0 = *(0xb0 + r30); // lbz @ 0x8072E588
    if (==) goto 0x0x8072e5ac;
    r12 = *(0 + r29); // lwz @ 0x8072E594
    r3 = r29;
    r4 = r30 + 0x72c; // 0x8072E59C
    r12 = *(0x70 + r12); // lwz @ 0x8072E5A0
    /* mtctr r12 */ // 0x8072E5A4
    /* bctrl  */ // 0x8072E5A8
    r3 = *(0x118 + r30); // lwz @ 0x8072E5AC
    FUN_8061E010(r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8072E5B4
    /* li r4, 0x2f8 */ // 0x8072E5B8
    /* lfs f1, 0(r31) */ // 0x8072E5BC
    r12 = *(0xe4 + r12); // lwz @ 0x8072E5C0
    /* mtctr r12 */ // 0x8072E5C4
    /* bctrl  */ // 0x8072E5C8
    r0 = *(0x14b + r30); // lbz @ 0x8072E5CC
    if (==) goto 0x0x8072e5e0;
    /* li r0, 1 */ // 0x8072E5D8
    *(0x10c + r30) = r0; // stb @ 0x8072E5DC
    r3 = *(0x64 + r30); // lwz @ 0x8072E5E0
    r0 = *(0x60 + r30); // lwz @ 0x8072E5E4
    if (<) goto 0x0x8072e6c0;
    /* lfs f0, 0(r31) */ // 0x8072E5F0
    /* lfs f1, 0x48(r31) */ // 0x8072E5F8
    /* stfs f1, 8(r1) */ // 0x8072E600
    /* stfs f0, 0xc(r1) */ // 0x8072E604
    /* stfs f0, 0x10(r1) */ // 0x8072E608
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f0, 0x6d0(r30) */ // 0x8072E610
    /* stfs f0, 0x24(r1) */ // 0x8072E614
    /* lfs f0, 0x6d4(r30) */ // 0x8072E618
    /* stfs f0, 0x34(r1) */ // 0x8072E61C
    /* lfs f0, 0x6d8(r30) */ // 0x8072E620
    /* stfs f0, 0x44(r1) */ // 0x8072E624
    r29 = *(0x228 + r30); // lwz @ 0x8072E628
    if (!=) goto 0x0x8072e63c;
    /* li r0, 0 */ // 0x8072E634
    /* b 0x8072e6b0 */ // 0x8072E638
    r3 = r29 + 0x74; // 0x8072E63C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072e654;
    /* li r3, 0 */ // 0x8072E64C
    /* b 0x8072e658 */ // 0x8072E650
    r3 = *(0xc + r3); // lwz @ 0x8072E654
    /* li r0, 0 */ // 0x8072E65C
    if (==) goto 0x0x8072e66c;
    if (!=) goto 0x0x8072e670;
    /* li r0, 1 */ // 0x8072E66C
    if (!=) goto 0x0x8072e680;
    /* li r0, 0 */ // 0x8072E678
}