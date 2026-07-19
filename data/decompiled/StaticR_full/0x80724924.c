/* Function at 0x80724924, size=488 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80724924(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x80724938
    r0 = *(0x46 + r3); // lbz @ 0x8072493C
    if (==) goto 0x0x8072495c;
    r0 = *(4 + r3); // lbz @ 0x80724948
    if (!=) goto 0x0x8072495c;
    FUN_807386EC(); // bl 0x807386EC
    /* b 0x80724964 */ // 0x80724958
    r3 = r31;
    FUN_807388C8(r3); // bl 0x807388C8
    r0 = *(4 + r31); // lbz @ 0x80724964
    if (==) goto 0x0x80724978;
    r3 = r31;
    FUN_807388C8(r3); // bl 0x807388C8
    r3 = r31;
    FUN_8072D7BC(r3, r3); // bl 0x8072D7BC
    r3 = r31;
    FUN_8073A148(r3, r3, r3); // bl 0x8073A148
    r3 = r31;
    FUN_8073A39C(r3, r3, r3); // bl 0x8073A39C
    /* lfs f1, 0x74(r31) */ // 0x80724990
    /* lis r3, 0 */ // 0x80724994
    /* lfs f0, 0(r3) */ // 0x80724998
    r3 = r31 + 0x6f4; // 0x8072499C
    /* fneg f1, f1 */ // 0x807249A0
    /* stfs f0, 0x20(r1) */ // 0x807249A4
    /* stfs f1, 0x24(r1) */ // 0x807249B0
    /* stfs f0, 0x28(r1) */ // 0x807249B4
    FUN_80743D20(r4, r5); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x807249BC
    r0 = *(0x6f8 + r31); // lwz @ 0x807249C4
    r4 = r31 + 0x6d0; // 0x807249C8
    *(0x34 + r1) = r0; // stw @ 0x807249CC
    *(0x30 + r1) = r6; // stw @ 0x807249D4
    r6 = *(0x6fc + r31); // lwz @ 0x807249D8
    r0 = *(0x700 + r31); // lwz @ 0x807249DC
    *(0x3c + r1) = r0; // stw @ 0x807249E0
    *(0x38 + r1) = r6; // stw @ 0x807249E4
    r6 = *(0x704 + r31); // lwz @ 0x807249E8
    r0 = *(0x708 + r31); // lwz @ 0x807249EC
    *(0x44 + r1) = r0; // stw @ 0x807249F0
    *(0x40 + r1) = r6; // stw @ 0x807249F4
    r6 = *(0x70c + r31); // lwz @ 0x807249F8
    r0 = *(0x710 + r31); // lwz @ 0x807249FC
    *(0x4c + r1) = r0; // stw @ 0x80724A00
    *(0x48 + r1) = r6; // stw @ 0x80724A04
    r6 = *(0x714 + r31); // lwz @ 0x80724A08
    r0 = *(0x718 + r31); // lwz @ 0x80724A0C
    *(0x54 + r1) = r0; // stw @ 0x80724A10
    *(0x50 + r1) = r6; // stw @ 0x80724A14
    r6 = *(0x71c + r31); // lwz @ 0x80724A18
    r0 = *(0x720 + r31); // lwz @ 0x80724A1C
    *(0x5c + r1) = r0; // stw @ 0x80724A20
    *(0x58 + r1) = r6; // stw @ 0x80724A24
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x80724A2C
    /* lfs f1, 0xc(r1) */ // 0x80724A30
    /* lfs f0, 0x10(r1) */ // 0x80724A34
    /* stfs f2, 0x3c(r1) */ // 0x80724A38
    /* stfs f1, 0x4c(r1) */ // 0x80724A3C
    /* stfs f0, 0x5c(r1) */ // 0x80724A40
    r30 = *(0x23c + r31); // lwz @ 0x80724A44
    if (!=) goto 0x0x80724a58;
    /* li r0, 0 */ // 0x80724A50
    /* b 0x80724acc */ // 0x80724A54
    r3 = r30 + 0x74; // 0x80724A58
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80724a70;
    /* li r3, 0 */ // 0x80724A68
    /* b 0x80724a74 */ // 0x80724A6C
    r3 = *(0xc + r3); // lwz @ 0x80724A70
    /* li r0, 0 */ // 0x80724A78
    if (==) goto 0x0x80724a88;
    if (!=) goto 0x0x80724a8c;
    /* li r0, 1 */ // 0x80724A88
    if (!=) goto 0x0x80724a9c;
    /* li r0, 0 */ // 0x80724A94
    /* b 0x80724acc */ // 0x80724A98
    r12 = *(0 + r30); // lwz @ 0x80724A9C
    r3 = r30;
    r12 = *(0x78 + r12); // lwz @ 0x80724AA8
    /* mtctr r12 */ // 0x80724AAC
    /* bctrl  */ // 0x80724AB0
    r12 = *(0 + r30); // lwz @ 0x80724AB4
    r3 = r30;
    r12 = *(0x80 + r12); // lwz @ 0x80724ABC
    /* mtctr r12 */ // 0x80724AC0
    /* bctrl  */ // 0x80724AC4
    /* li r0, 1 */ // 0x80724AC8
    if (==) goto 0x0x80724adc;
    /* li r0, 1 */ // 0x80724AD4
    *(9 + r31) = r0; // stb @ 0x80724AD8
    r0 = *(0x68 + r31); // lbz @ 0x80724ADC
    if (==) goto 0x0x80724b84;
    r30 = *(0x238 + r31); // lwz @ 0x80724AE8
    if (!=) goto 0x0x80724afc;
    /* li r0, 0 */ // 0x80724AF4
    /* b 0x80724b70 */ // 0x80724AF8
    r3 = r30 + 0x74; // 0x80724AFC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80724b14;
}