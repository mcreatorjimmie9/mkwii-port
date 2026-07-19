/* Function at 0x8077A9C4, size=512 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 11 function(s) */

int FUN_8077A9C4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8077A9D0
    r29 = r3;
    /* li r30, 0 */ // 0x8077A9D8
    /* li r31, 0 */ // 0x8077A9DC
    r12 = *(0 + r3); // lwz @ 0x8077A9E0
    r12 = *(0x30 + r12); // lwz @ 0x8077A9E4
    /* mtctr r12 */ // 0x8077A9E8
    /* bctrl  */ // 0x8077A9EC
    /* lis r4, 0x101 */ // 0x8077A9F0
    r0 = *(0x20 + r3); // lwz @ 0x8077A9F4
    r3 = r4 + 0x101; // 0x8077A9F8
    /* andc. r0, r3, r0 */ // 0x8077A9FC
    if (!=) goto 0x0x8077aa1c;
    /* lis r3, 0 */ // 0x8077AA04
    r3 = *(0 + r3); // lwz @ 0x8077AA08
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x8077aa1c;
    /* li r31, 1 */ // 0x8077AA18
    r0 = *(0xb8 + r29); // lwz @ 0x8077AA1C
    if (!=) goto 0x0x8077aa94;
    /* li r27, 0 */ // 0x8077AA28
    /* lis r28, 0 */ // 0x8077AA2C
    /* b 0x8077aa80 */ // 0x8077AA30
    r3 = *(0 + r28); // lwz @ 0x8077AA34
    r4 = r27;
    FUN_8061D97C(r4); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x8077AA40
    /* li r5, 1 */ // 0x8077AA44
    r4 = *(4 + r4); // lwz @ 0x8077AA48
    r4 = *(8 + r4); // lwz @ 0x8077AA4C
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */ // 0x8077AA50
    if (!=) goto 0x0x8077aa64;
    /* rlwinm. r0, r4, 0, 9, 9 */ // 0x8077AA58
    if (!=) goto 0x0x8077aa64;
    /* li r5, 0 */ // 0x8077AA60
    if (==) goto 0x0x8077aa7c;
    FUN_8061DECC(r5); // bl 0x8061DECC
    if (==) goto 0x0x8077aa7c;
    /* li r30, 1 */ // 0x8077AA78
    r27 = r27 + 1; // 0x8077AA7C
    r3 = *(0 + r28); // lwz @ 0x8077AA80
    r0 = *(0x24 + r3); // lbz @ 0x8077AA84
    if (<) goto 0x0x8077aa34;
    /* b 0x8077ab5c */ // 0x8077AA90
    if (!=) goto 0x0x8077ab5c;
    /* lis r3, 0 */ // 0x8077AA9C
    r3 = *(0 + r3); // lwz @ 0x8077AAA0
    r0 = *(0xb68 + r3); // lwz @ 0x8077AAA4
    if (==) goto 0x0x8077aac4;
    if (==) goto 0x0x8077aaf8;
    if (==) goto 0x0x8077ab2c;
    /* b 0x8077ab5c */ // 0x8077AAC0
    /* lis r28, 0 */ // 0x8077AAC4
    /* li r4, 2 */ // 0x8077AAC8
    r3 = *(0 + r28); // lwz @ 0x8077AACC
    FUN_807A50CC(r4); // bl 0x807A50CC
    if (!=) goto 0x0x8077aaf0;
    r3 = *(0 + r28); // lwz @ 0x8077AADC
    /* li r4, 3 */ // 0x8077AAE0
    FUN_807A50CC(r4); // bl 0x807A50CC
    if (==) goto 0x0x8077ab5c;
    /* li r30, 1 */ // 0x8077AAF0
    /* b 0x8077ab5c */ // 0x8077AAF4
    /* lis r28, 0 */ // 0x8077AAF8
    /* li r4, 2 */ // 0x8077AAFC
    r3 = *(0 + r28); // lwz @ 0x8077AB00
    FUN_807A50CC(r4); // bl 0x807A50CC
    if (!=) goto 0x0x8077ab24;
    r3 = *(0 + r28); // lwz @ 0x8077AB10
    /* li r4, 3 */ // 0x8077AB14
    FUN_807A50CC(r4); // bl 0x807A50CC
    if (==) goto 0x0x8077ab5c;
    /* li r30, 1 */ // 0x8077AB24
    /* b 0x8077ab5c */ // 0x8077AB28
    /* lis r28, 0 */ // 0x8077AB2C
    /* li r4, 1 */ // 0x8077AB30
    r3 = *(0 + r28); // lwz @ 0x8077AB34
    FUN_807A50CC(r4); // bl 0x807A50CC
    if (!=) goto 0x0x8077ab58;
    r3 = *(0 + r28); // lwz @ 0x8077AB44
    /* li r4, 2 */ // 0x8077AB48
    FUN_807A50CC(r4); // bl 0x807A50CC
    if (==) goto 0x0x8077ab5c;
    /* li r30, 1 */ // 0x8077AB58
    if (==) goto 0x0x8077aba4;
    if (!=) goto 0x0x8077aba4;
    r3 = *(0xb0 + r29); // lwz @ 0x8077AB6C
    r12 = *(0 + r3); // lwz @ 0x8077AB70
    r12 = *(0xc + r12); // lwz @ 0x8077AB74
    /* mtctr r12 */ // 0x8077AB78
    /* bctrl  */ // 0x8077AB7C
    r3 = r29;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb0 + r29); // lwz @ 0x8077AB88
    r4 = r29 + 0x58; // 0x8077AB8C
    r12 = *(0 + r3); // lwz @ 0x8077AB90
    r12 = *(0x78 + r12); // lwz @ 0x8077AB94
    /* mtctr r12 */ // 0x8077AB98
    /* bctrl  */ // 0x8077AB9C
    /* b 0x8077abb8 */ // 0x8077ABA0
    r3 = *(0xb0 + r29); // lwz @ 0x8077ABA4
    r12 = *(0 + r3); // lwz @ 0x8077ABA8
    r12 = *(0x10 + r12); // lwz @ 0x8077ABAC
    /* mtctr r12 */ // 0x8077ABB0
    /* bctrl  */ // 0x8077ABB4
    r3 = *(0xb0 + r29); // lwz @ 0x8077ABB8
    r3 = r3 + 0x74; // 0x8077ABBC
    FUN_805E3430(r3); // bl 0x805E3430
}