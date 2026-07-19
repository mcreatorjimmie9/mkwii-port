/* Function at 0x8065EA08, size=720 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8065EA08(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8065EA20
    /* lis r29, 0 */ // 0x8065EA24
    *(0x10 + r1) = r28; // stw @ 0x8065EA28
    r3 = *(0 + r29); // lwz @ 0x8065EA2C
    r3 = *(0 + r3); // lwz @ 0x8065EA30
    r3 = *(0x404 + r3); // lwz @ 0x8065EA34
    FUN_806599D4(); // bl 0x806599D4
    r4 = *(0 + r29); // lwz @ 0x8065EA3C
    r3 = *(0 + r4); // lwz @ 0x8065EA40
    r4 = *(0x98 + r4); // lwz @ 0x8065EA44
    r3 = *(0x404 + r3); // lwz @ 0x8065EA48
    r4 = *(0x508 + r4); // lwz @ 0x8065EA4C
    FUN_8065984C(); // bl 0x8065984C
    r0 = r3 + -0x15; // 0x8065EA54
    r30 = r3;
    if (<=) goto 0x0x8065eb08;
    if (!=) goto 0x0x8065ec08;
    r3 = *(0 + r29); // lwz @ 0x8065EA6C
    r3 = *(0 + r3); // lwz @ 0x8065EA70
    r30 = *(0x274 + r3); // lwz @ 0x8065EA74
    if (!=) goto 0x0x8065ea88;
    /* li r30, 0 */ // 0x8065EA80
    /* b 0x8065eadc */ // 0x8065EA84
    /* lis r29, 0 */ // 0x8065EA88
    r29 = r29 + 0; // 0x8065EA8C
    if (==) goto 0x0x8065ead8;
    r12 = *(0 + r30); // lwz @ 0x8065EA94
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065EA9C
    /* mtctr r12 */ // 0x8065EAA0
    /* bctrl  */ // 0x8065EAA4
    /* b 0x8065eac0 */ // 0x8065EAA8
    if (!=) goto 0x0x8065eabc;
    /* li r0, 1 */ // 0x8065EAB4
    /* b 0x8065eacc */ // 0x8065EAB8
    r3 = *(0 + r3); // lwz @ 0x8065EABC
    if (!=) goto 0x0x8065eaac;
    /* li r0, 0 */ // 0x8065EAC8
    if (==) goto 0x0x8065ead8;
    /* b 0x8065eadc */ // 0x8065EAD4
    /* li r30, 0 */ // 0x8065EAD8
    r3 = r30;
    /* li r4, 1 */ // 0x8065EAE0
    FUN_806C2644(r3, r4); // bl 0x806C2644
    /* lis r3, 0 */ // 0x8065EAE8
    /* li r0, 0x9b */ // 0x8065EAEC
    r3 = *(0 + r3); // lwz @ 0x8065EAF0
    r3 = *(0x98 + r3); // lwz @ 0x8065EAF4
    r3 = *(0x508 + r3); // lwz @ 0x8065EAF8
    *(0x354 + r30) = r3; // stw @ 0x8065EAFC
    *(0x54 + r31) = r0; // stw @ 0x8065EB00
    /* b 0x8065ecb8 */ // 0x8065EB04
    r3 = *(0 + r29); // lwz @ 0x8065EB08
    r3 = *(0 + r3); // lwz @ 0x8065EB0C
    r28 = *(0x244 + r3); // lwz @ 0x8065EB10
    if (!=) goto 0x0x8065eb24;
    /* li r28, 0 */ // 0x8065EB1C
    /* b 0x8065eb78 */ // 0x8065EB20
    /* lis r29, 0 */ // 0x8065EB24
    r29 = r29 + 0; // 0x8065EB28
    if (==) goto 0x0x8065eb74;
    r12 = *(0 + r28); // lwz @ 0x8065EB30
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x8065EB38
    /* mtctr r12 */ // 0x8065EB3C
    /* bctrl  */ // 0x8065EB40
    /* b 0x8065eb5c */ // 0x8065EB44
    if (!=) goto 0x0x8065eb58;
    /* li r0, 1 */ // 0x8065EB50
    /* b 0x8065eb68 */ // 0x8065EB54
    r3 = *(0 + r3); // lwz @ 0x8065EB58
    if (!=) goto 0x0x8065eb48;
    /* li r0, 0 */ // 0x8065EB64
    if (==) goto 0x0x8065eb74;
    /* b 0x8065eb78 */ // 0x8065EB70
    /* li r28, 0 */ // 0x8065EB74
    /* lis r3, 0 */ // 0x8065EB78
    r0 = r30 + -0x15; // 0x8065EB7C
    r3 = *(0 + r3); // lwz @ 0x8065EB80
    r3 = *(0x98 + r3); // lwz @ 0x8065EB88
    r0 = *(0x508 + r3); // lwz @ 0x8065EB8C
    *(0x1cfc + r28) = r0; // stw @ 0x8065EB90
    if (<=) goto 0x0x8065eba8;
    r0 = r30 + -0x17; // 0x8065EB98
    if (<=) goto 0x0x8065ebb4;
    /* b 0x8065ebbc */ // 0x8065EBA4
    /* li r0, 2 */ // 0x8065EBA8
    *(0x1cf4 + r28) = r0; // stw @ 0x8065EBAC
    /* b 0x8065ebbc */ // 0x8065EBB0
    /* li r0, 3 */ // 0x8065EBB4
    *(0x1cf4 + r28) = r0; // stw @ 0x8065EBB8
    if (==) goto 0x0x8065ebe0;
    if (==) goto 0x0x8065ebe0;
    if (==) goto 0x0x8065ebf0;
    if (==) goto 0x0x8065ebf0;
    /* b 0x8065ebfc */ // 0x8065EBDC
    r3 = r28;
    /* li r4, 0 */ // 0x8065EBE4
    FUN_80679484(r3, r4); // bl 0x80679484
    /* b 0x8065ebfc */ // 0x8065EBEC
    r3 = r28;
    /* li r4, 1 */ // 0x8065EBF4
    FUN_80679484(r4, r3, r4); // bl 0x80679484
    /* li r0, 0x8f */ // 0x8065EBFC
    *(0x54 + r31) = r0; // stw @ 0x8065EC00
    /* b 0x8065ecb8 */ // 0x8065EC04
    r3 = *(0 + r29); // lwz @ 0x8065EC08
    r3 = *(0 + r3); // lwz @ 0x8065EC0C
    r28 = *(0x14c + r3); // lwz @ 0x8065EC10
    if (!=) goto 0x0x8065ec24;
    /* li r28, 0 */ // 0x8065EC1C
    /* b 0x8065ec78 */ // 0x8065EC20
    /* lis r29, 0 */ // 0x8065EC24
    r29 = r29 + 0; // 0x8065EC28
    if (==) goto 0x0x8065ec74;
    r12 = *(0 + r28); // lwz @ 0x8065EC30
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x8065EC38
    /* mtctr r12 */ // 0x8065EC3C
    /* bctrl  */ // 0x8065EC40
    /* b 0x8065ec5c */ // 0x8065EC44
    if (!=) goto 0x0x8065ec58;
    /* li r0, 1 */ // 0x8065EC50
    /* b 0x8065ec68 */ // 0x8065EC54
    r3 = *(0 + r3); // lwz @ 0x8065EC58
    if (!=) goto 0x0x8065ec48;
    /* li r0, 0 */ // 0x8065EC64
    if (==) goto 0x0x8065ec74;
    /* b 0x8065ec78 */ // 0x8065EC70
    /* li r28, 0 */ // 0x8065EC74
    r12 = *(0 + r28); // lwz @ 0x8065EC78
    r3 = r28;
    r12 = *(0x64 + r12); // lwz @ 0x8065EC80
    /* mtctr r12 */ // 0x8065EC84
    /* bctrl  */ // 0x8065EC88
    r12 = *(0 + r28); // lwz @ 0x8065EC8C
    r3 = r28;
    /* li r4, 0xfb6 */ // 0x8065EC94
    /* li r5, 0 */ // 0x8065EC98
    r12 = *(0x68 + r12); // lwz @ 0x8065EC9C
    /* mtctr r12 */ // 0x8065ECA0
    /* bctrl  */ // 0x8065ECA4
    /* li r0, 0x96 */ // 0x8065ECA8
    *(0x604 + r28) = r0; // stw @ 0x8065ECAC
    /* li r0, 0x51 */ // 0x8065ECB0
    *(0x54 + r31) = r0; // stw @ 0x8065ECB4
    r0 = *(0x24 + r1); // lwz @ 0x8065ECB8
    r31 = *(0x1c + r1); // lwz @ 0x8065ECBC
    r30 = *(0x18 + r1); // lwz @ 0x8065ECC0
    r29 = *(0x14 + r1); // lwz @ 0x8065ECC4
    r28 = *(0x10 + r1); // lwz @ 0x8065ECC8
    return;
}