/* Function at 0x80699A00, size=492 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 15 function(s) */

int FUN_80699A00(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80699A14
    r29 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r29 + 0x98; // 0x80699A20
    /* li r4, 0 */ // 0x80699A24
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699A2C
    /* li r4, 0 */ // 0x80699A30
    /* lfs f1, 0(r5) */ // 0x80699A34
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    r3 = *(0x64 + r29); // lwz @ 0x80699A3C
    r3 = *(0xc + r3); // lwz @ 0x80699A40
    r30 = *(0x38 + r3); // lwz @ 0x80699A44
    if (!=) goto 0x0x80699a58;
    /* li r30, 0 */ // 0x80699A50
    /* b 0x80699aac */ // 0x80699A54
    /* lis r31, 0 */ // 0x80699A58
    r31 = r31 + 0; // 0x80699A5C
    if (==) goto 0x0x80699aa8;
    r12 = *(0 + r30); // lwz @ 0x80699A64
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x80699A6C
    /* mtctr r12 */ // 0x80699A70
    /* bctrl  */ // 0x80699A74
    /* b 0x80699a90 */ // 0x80699A78
    if (!=) goto 0x0x80699a8c;
    /* li r0, 1 */ // 0x80699A84
    /* b 0x80699a9c */ // 0x80699A88
    r3 = *(0 + r3); // lwz @ 0x80699A8C
    if (!=) goto 0x0x80699a7c;
    /* li r0, 0 */ // 0x80699A98
    if (==) goto 0x0x80699aa8;
    /* b 0x80699aac */ // 0x80699AA4
    /* li r30, 0 */ // 0x80699AA8
    r3 = *(0x54 + r30); // lwz @ 0x80699AAC
    r0 = r29 + 0x174; // 0x80699AB0
    /* li r5, 0 */ // 0x80699AB4
    if (!=) goto 0x0x80699ac8;
    /* li r5, 1 */ // 0x80699AC0
    /* b 0x80699b18 */ // 0x80699AC4
    r3 = *(0xb0 + r30); // lwz @ 0x80699AC8
    if (!=) goto 0x0x80699adc;
    /* li r5, 1 */ // 0x80699AD4
    /* b 0x80699b18 */ // 0x80699AD8
    r3 = *(0x10c + r30); // lwz @ 0x80699ADC
    r4 = r30 + 0xb8; // 0x80699AE0
    if (!=) goto 0x0x80699af4;
    /* li r5, 1 */ // 0x80699AEC
    /* b 0x80699b18 */ // 0x80699AF0
    r3 = *(0xb0 + r4); // lwz @ 0x80699AF4
    if (!=) goto 0x0x80699b08;
    /* li r5, 1 */ // 0x80699B00
    /* b 0x80699b18 */ // 0x80699B04
    r3 = *(0x10c + r4); // lwz @ 0x80699B08
    if (!=) goto 0x0x80699b18;
    /* li r5, 1 */ // 0x80699B14
    if (==) goto 0x0x80699b40;
    r3 = r29 + 0x98; // 0x80699B20
    /* li r4, 1 */ // 0x80699B24
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699B2C
    /* li r4, 2 */ // 0x80699B30
    /* lfs f1, 0(r5) */ // 0x80699B34
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x80699b5c */ // 0x80699B3C
    r3 = r29 + 0x98; // 0x80699B40
    /* li r4, 1 */ // 0x80699B44
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699B4C
    /* li r4, 0 */ // 0x80699B50
    /* lfs f1, 0(r5) */ // 0x80699B54
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80699B5C
    /* li r4, 2 */ // 0x80699B60
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80699B68
    /* li r4, 1 */ // 0x80699B6C
    /* lfs f1, 0(r31) */ // 0x80699B70
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80699B78
    /* li r4, 3 */ // 0x80699B7C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80699B84
    /* li r4, 1 */ // 0x80699B88
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x23c + r29); // lbz @ 0x80699B90
    if (==) goto 0x0x80699bb8;
    r3 = r29 + 0x98; // 0x80699B9C
    /* li r4, 4 */ // 0x80699BA0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80699BA8
    /* li r4, 0 */ // 0x80699BAC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* b 0x80699bd0 */ // 0x80699BB4
    r3 = r29 + 0x98; // 0x80699BB8
    /* li r4, 4 */ // 0x80699BBC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80699BC4
    /* li r4, 1 */ // 0x80699BC8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x80699BD0
    r31 = *(0x1c + r1); // lwz @ 0x80699BD4
    r30 = *(0x18 + r1); // lwz @ 0x80699BD8
    r29 = *(0x14 + r1); // lwz @ 0x80699BDC
    return;
}