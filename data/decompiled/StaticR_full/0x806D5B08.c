/* Function at 0x806D5B08, size=604 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806D5B08(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 2 */ // 0x806D5B14
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x806D5B20
    *(0xd4 + r1) = r29; // stw @ 0x806D5B24
    r4 = *(0x58 + r3); // lwz @ 0x806D5B28
    *(0x54 + r3) = r0; // stw @ 0x806D5B2C
    if (==) goto 0x0x806d5b44;
    if (==) goto 0x0x806d5b4c;
    /* b 0x806d5b50 */ // 0x806D5B40
    /* li r5, 1 */ // 0x806D5B44
    /* b 0x806d5b50 */ // 0x806D5B48
    /* li r5, 0 */ // 0x806D5B4C
    r0 = *(0x474 + r3); // lwz @ 0x806D5B50
    if (==) goto 0x0x806d5b68;
    if (==) goto 0x0x806d5b80;
    /* b 0x806d5b94 */ // 0x806D5B64
    /* lis r3, 0 */ // 0x806D5B68
    r4 = *(0x5c + r31); // lwz @ 0x806D5B6C
    r3 = *(0 + r3); // lwz @ 0x806D5B70
    r6 = r31 + 0x60; // 0x806D5B74
    FUN_807003D8(r3, r6); // bl 0x807003D8
    /* b 0x806d5b94 */ // 0x806D5B7C
    /* lis r3, 0 */ // 0x806D5B80
    r4 = *(0x5c + r31); // lwz @ 0x806D5B84
    r3 = *(0 + r3); // lwz @ 0x806D5B88
    r6 = r31 + 0x60; // 0x806D5B8C
    FUN_80700528(r3, r6); // bl 0x80700528
    if (!=) goto 0x0x806d5c80;
    /* lis r3, 0 */ // 0x806D5B9C
    r3 = *(0 + r3); // lwz @ 0x806D5BA0
    r3 = *(0 + r3); // lwz @ 0x806D5BA4
    r29 = *(0x14c + r3); // lwz @ 0x806D5BA8
    if (!=) goto 0x0x806d5bbc;
    /* li r29, 0 */ // 0x806D5BB4
    /* b 0x806d5c10 */ // 0x806D5BB8
    /* lis r30, 0 */ // 0x806D5BBC
    r30 = r30 + 0; // 0x806D5BC0
    if (==) goto 0x0x806d5c0c;
    r12 = *(0 + r29); // lwz @ 0x806D5BC8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D5BD0
    /* mtctr r12 */ // 0x806D5BD4
    /* bctrl  */ // 0x806D5BD8
    /* b 0x806d5bf4 */ // 0x806D5BDC
    if (!=) goto 0x0x806d5bf0;
    /* li r0, 1 */ // 0x806D5BE8
    /* b 0x806d5c00 */ // 0x806D5BEC
    r3 = *(0 + r3); // lwz @ 0x806D5BF0
    if (!=) goto 0x0x806d5be0;
    /* li r0, 0 */ // 0x806D5BFC
    if (==) goto 0x0x806d5c0c;
    /* b 0x806d5c10 */ // 0x806D5C08
    /* li r29, 0 */ // 0x806D5C0C
    r12 = *(0 + r29); // lwz @ 0x806D5C10
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806D5C18
    /* mtctr r12 */ // 0x806D5C1C
    /* bctrl  */ // 0x806D5C20
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806D5C2C
    r3 = *(0 + r3); // lwz @ 0x806D5C30
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806D5C38
    r3 = r29;
    /* li r4, 0x17e3 */ // 0x806D5C44
    r12 = *(0 + r29); // lwz @ 0x806D5C48
    r12 = *(0x68 + r12); // lwz @ 0x806D5C4C
    /* mtctr r12 */ // 0x806D5C50
    /* bctrl  */ // 0x806D5C54
    r12 = *(0 + r31); // lwz @ 0x806D5C58
    r3 = r31;
    /* li r4, 0x51 */ // 0x806D5C60
    /* li r5, 0 */ // 0x806D5C64
    r12 = *(0x24 + r12); // lwz @ 0x806D5C68
    /* mtctr r12 */ // 0x806D5C6C
    /* bctrl  */ // 0x806D5C70
    /* li r0, 6 */ // 0x806D5C74
    *(0x54 + r31) = r0; // stw @ 0x806D5C78
    /* b 0x806d5d48 */ // 0x806D5C7C
    /* lis r3, 0 */ // 0x806D5C80
    r3 = *(0 + r3); // lwz @ 0x806D5C84
    r3 = *(0 + r3); // lwz @ 0x806D5C88
    r29 = *(0x148 + r3); // lwz @ 0x806D5C8C
    if (!=) goto 0x0x806d5ca0;
    /* li r29, 0 */ // 0x806D5C98
    /* b 0x806d5cf4 */ // 0x806D5C9C
    /* lis r30, 0 */ // 0x806D5CA0
    r30 = r30 + 0; // 0x806D5CA4
    if (==) goto 0x0x806d5cf0;
    r12 = *(0 + r29); // lwz @ 0x806D5CAC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D5CB4
    /* mtctr r12 */ // 0x806D5CB8
    /* bctrl  */ // 0x806D5CBC
    /* b 0x806d5cd8 */ // 0x806D5CC0
    if (!=) goto 0x0x806d5cd4;
    /* li r0, 1 */ // 0x806D5CCC
    /* b 0x806d5ce4 */ // 0x806D5CD0
    r3 = *(0 + r3); // lwz @ 0x806D5CD4
    if (!=) goto 0x0x806d5cc4;
    /* li r0, 0 */ // 0x806D5CE0
    if (==) goto 0x0x806d5cf0;
    /* b 0x806d5cf4 */ // 0x806D5CEC
    /* li r29, 0 */ // 0x806D5CF0
    r12 = *(0 + r29); // lwz @ 0x806D5CF4
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806D5CFC
    /* mtctr r12 */ // 0x806D5D00
    /* bctrl  */ // 0x806D5D04
    r12 = *(0 + r29); // lwz @ 0x806D5D08
    r3 = r29;
    /* li r4, 0x17e2 */ // 0x806D5D10
    /* li r5, 0 */ // 0x806D5D14
    r12 = *(0x68 + r12); // lwz @ 0x806D5D18
    /* mtctr r12 */ // 0x806D5D1C
    /* bctrl  */ // 0x806D5D20
    r12 = *(0 + r31); // lwz @ 0x806D5D24
    r3 = r31;
    /* li r4, 0x50 */ // 0x806D5D2C
    /* li r5, 0 */ // 0x806D5D30
    r12 = *(0x24 + r12); // lwz @ 0x806D5D34
    /* mtctr r12 */ // 0x806D5D38
    /* bctrl  */ // 0x806D5D3C
    /* li r0, 2 */ // 0x806D5D40
    *(0x54 + r31) = r0; // stw @ 0x806D5D44
    r0 = *(0xe4 + r1); // lwz @ 0x806D5D48
    r31 = *(0xdc + r1); // lwz @ 0x806D5D4C
    r30 = *(0xd8 + r1); // lwz @ 0x806D5D50
    r29 = *(0xd4 + r1); // lwz @ 0x806D5D54
    return;
}