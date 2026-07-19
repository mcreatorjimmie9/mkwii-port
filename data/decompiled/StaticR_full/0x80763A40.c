/* Function at 0x80763A40, size=484 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80763A40(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80763A50
    /* lis r31, 0 */ // 0x80763A54
    r31 = r31 + 0; // 0x80763A58
    *(0x18 + r1) = r30; // stw @ 0x80763A5C
    /* lis r30, 0 */ // 0x80763A60
    r30 = r30 + 0; // 0x80763A64
    *(0x14 + r1) = r29; // stw @ 0x80763A68
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80763A70
    r28 = r3;
    if (==) goto 0x0x80763a90;
    if (==) goto 0x0x80763aac;
    if (==) goto 0x0x80763b58;
    /* b 0x80763c00 */ // 0x80763A8C
    r3 = r4;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lfs f0, 0x50(r31) */ // 0x80763A98
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80763A9C
    if (>=) goto 0x0x80763c00;
    /* li r29, 8 */ // 0x80763AA4
    /* b 0x80763c00 */ // 0x80763AA8
    r0 = *(0xb8 + r3); // lhz @ 0x80763AAC
    if (!=) goto 0x0x80763ad0;
    /* li r0, 1 */ // 0x80763AB8
    *(0x140 + r3) = r0; // stb @ 0x80763ABC
    /* lfs f0, 0x2c(r31) */ // 0x80763AC0
    /* stfs f0, 0x144(r3) */ // 0x80763AC4
    r3 = r29;
    /* b 0x80763c04 */ // 0x80763ACC
    r0 = *(0x124 + r3); // lwz @ 0x80763AD0
    if (!=) goto 0x0x80763c00;
    r3 = r4;
    /* li r4, 1 */ // 0x80763AE0
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    r12 = *(0 + r28); // lwz @ 0x80763AE8
    r3 = r28;
    r12 = *(0x90 + r12); // lwz @ 0x80763AF0
    /* mtctr r12 */ // 0x80763AF4
    /* bctrl  */ // 0x80763AF8
    /* lfs f0, 0(r30) */ // 0x80763AFC
    /* li r0, 0 */ // 0x80763B00
    *(0x124 + r28) = r0; // stw @ 0x80763B04
    /* lfs f1, 0xb4(r30) */ // 0x80763B08
    /* stfs f0, 0x150(r28) */ // 0x80763B0C
    /* lfs f3, 0xb8(r30) */ // 0x80763B10
    /* lfs f0, 0x48(r31) */ // 0x80763B14
    /* lfs f4, 0x4c(r31) */ // 0x80763B18
    /* fmuls f5, f1, f0 */ // 0x80763B1C
    /* lfs f0, 0x108(r28) */ // 0x80763B20
    /* lfs f2, 0x100(r28) */ // 0x80763B24
    /* lfs f1, 0x104(r28) */ // 0x80763B28
    /* fdivs f4, f5, f4 */ // 0x80763B2C
    /* stfs f0, 0x164(r28) */ // 0x80763B30
    /* lfs f5, 0x34(r28) */ // 0x80763B34
    /* stfs f2, 0x15c(r28) */ // 0x80763B38
    /* stfs f1, 0x160(r28) */ // 0x80763B3C
    /* stfs f5, 0x14c(r28) */ // 0x80763B40
    /* fdivs f0, f3, f4 */ // 0x80763B44
    /* stfs f4, 0x158(r28) */ // 0x80763B48
    *(0x168 + r28) = r0; // stb @ 0x80763B4C
    /* stfs f0, 0x154(r28) */ // 0x80763B50
    /* b 0x80763c00 */ // 0x80763B54
    r0 = *(0xb8 + r3); // lhz @ 0x80763B58
    if (!=) goto 0x0x80763b7c;
    /* li r0, 1 */ // 0x80763B64
    *(0x140 + r3) = r0; // stb @ 0x80763B68
    /* lfs f0, 0x2c(r31) */ // 0x80763B6C
    /* stfs f0, 0x144(r3) */ // 0x80763B70
    r3 = r29;
    /* b 0x80763c04 */ // 0x80763B78
    r0 = *(0x124 + r3); // lwz @ 0x80763B7C
    if (!=) goto 0x0x80763c00;
    r3 = r4;
    /* li r4, 1 */ // 0x80763B8C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    r12 = *(0 + r28); // lwz @ 0x80763B94
    r3 = r28;
    r12 = *(0x90 + r12); // lwz @ 0x80763B9C
    /* mtctr r12 */ // 0x80763BA0
    /* bctrl  */ // 0x80763BA4
    /* lfs f0, 0(r30) */ // 0x80763BA8
    /* li r0, 0 */ // 0x80763BAC
    *(0x124 + r28) = r0; // stw @ 0x80763BB0
    /* lfs f1, 0xb4(r30) */ // 0x80763BB4
    /* stfs f0, 0x150(r28) */ // 0x80763BB8
    /* lfs f3, 0xb8(r30) */ // 0x80763BBC
    /* lfs f0, 0x48(r31) */ // 0x80763BC0
    /* lfs f4, 0x4c(r31) */ // 0x80763BC4
    /* fmuls f5, f1, f0 */ // 0x80763BC8
    /* lfs f0, 0x108(r28) */ // 0x80763BCC
    /* lfs f2, 0x100(r28) */ // 0x80763BD0
    /* lfs f1, 0x104(r28) */ // 0x80763BD4
    /* fdivs f4, f5, f4 */ // 0x80763BD8
    /* stfs f0, 0x164(r28) */ // 0x80763BDC
    /* lfs f5, 0x34(r28) */ // 0x80763BE0
    /* stfs f2, 0x15c(r28) */ // 0x80763BE4
    /* stfs f1, 0x160(r28) */ // 0x80763BE8
    /* stfs f5, 0x14c(r28) */ // 0x80763BEC
    /* fdivs f0, f3, f4 */ // 0x80763BF0
    /* stfs f4, 0x158(r28) */ // 0x80763BF4
    *(0x168 + r28) = r0; // stb @ 0x80763BF8
    /* stfs f0, 0x154(r28) */ // 0x80763BFC
    r3 = r29;
    r0 = *(0x24 + r1); // lwz @ 0x80763C04
    r31 = *(0x1c + r1); // lwz @ 0x80763C08
    r30 = *(0x18 + r1); // lwz @ 0x80763C0C
    r29 = *(0x14 + r1); // lwz @ 0x80763C10
    r28 = *(0x10 + r1); // lwz @ 0x80763C14
    return;
}