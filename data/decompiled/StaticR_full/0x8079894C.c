/* Function at 0x8079894C, size=576 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8079894C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80798960
    r29 = r3;
    r3 = *(0xdc + r3); // lwz @ 0x80798968
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r30, 0 */ // 0x80798970
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x80798978
    r3 = *(0xdc + r29); // lwz @ 0x8079897C
    r4 = *(0xc + r4); // lwz @ 0x80798980
    /* lwzx r4, r4, r0 */ // 0x80798984
    r31 = *(0x26 + r4); // lbz @ 0x80798988
    FUN_8061E2D8(); // bl 0x8061E2D8
    r5 = *(0 + r30); // lwz @ 0x80798990
    r3 = r3 rlwinm 2; // rlwinm
    r0 = *(0xe0 + r29); // lbz @ 0x80798998
    r4 = *(0xc + r5); // lwz @ 0x8079899C
    /* lwzx r3, r4, r3 */ // 0x807989A4
    r0 = *(0x38 + r3); // lwz @ 0x807989A8
    r30 = r0 rlwinm 0x1f; // rlwinm
    if (==) goto 0x0x80798af4;
    r0 = *(0xdb + r29); // lbz @ 0x807989B4
    if (==) goto 0x0x80798a20;
    r3 = r5;
    FUN_805C2BFC(r3); // bl 0x805C2BFC
    /* clrlwi r0, r3, 0x18 */ // 0x807989C8
    if (==) goto 0x0x807989fc;
    /* lis r3, 0 */ // 0x807989D4
    r5 = *(0xb3 + r29); // lbz @ 0x807989D8
    r3 = *(0 + r3); // lwz @ 0x807989DC
    /* li r4, 0xda */ // 0x807989E0
    /* extsb r5, r5 */ // 0x807989E4
    r12 = *(0 + r3); // lwz @ 0x807989E8
    r12 = *(0x20 + r12); // lwz @ 0x807989EC
    /* mtctr r12 */ // 0x807989F0
    /* bctrl  */ // 0x807989F4
    /* b 0x80798a20 */ // 0x807989F8
    /* lis r3, 0 */ // 0x807989FC
    r3 = *(0 + r3); // lwz @ 0x80798A00
    r0 = *(0x40 + r3); // lwz @ 0x80798A04
    if (==) goto 0x0x80798a18;
    if (!=) goto 0x0x80798a20;
    /* li r4, 5 */ // 0x80798A18
    FUN_8079E0C0(r4); // bl 0x8079E0C0
    r0 = *(0xda + r29); // lbz @ 0x80798A20
    if (!=) goto 0x0x80798b68;
    if (!=) goto 0x0x80798b68;
    /* lis r3, 0 */ // 0x80798A34
    r3 = *(0 + r3); // lwz @ 0x80798A38
    r0 = *(0xb70 + r3); // lwz @ 0x80798A3C
    if (<) goto 0x0x80798a50;
    if (<=) goto 0x0x80798a58;
    if (!=) goto 0x0x80798a7c;
    r12 = *(0 + r29); // lwz @ 0x80798A58
    /* lis r5, 0 */ // 0x80798A5C
    r3 = r29;
    /* li r4, 0xed */ // 0x80798A64
    r12 = *(0xe0 + r12); // lwz @ 0x80798A68
    /* lfs f1, 0(r5) */ // 0x80798A6C
    /* mtctr r12 */ // 0x80798A70
    /* bctrl  */ // 0x80798A74
    /* b 0x80798aac */ // 0x80798A78
    r12 = *(0 + r29); // lwz @ 0x80798A7C
    /* lis r5, 0 */ // 0x80798A80
    r3 = r29;
    /* li r4, 0xdb */ // 0x80798A88
    r12 = *(0xe0 + r12); // lwz @ 0x80798A8C
    /* lfs f1, 0(r5) */ // 0x80798A90
    /* mtctr r12 */ // 0x80798A94
    /* bctrl  */ // 0x80798A98
    /* lis r3, 0 */ // 0x80798A9C
    /* li r0, 0 */ // 0x80798AA0
    r3 = *(0 + r3); // lwz @ 0x80798AA4
    *(0x14 + r3) = r0; // stb @ 0x80798AA8
    /* lis r3, 0 */ // 0x80798AAC
    /* lis r6, 0 */ // 0x80798AB0
    r3 = *(0 + r3); // lwz @ 0x80798AB4
    /* li r5, 0xb4 */ // 0x80798AB8
    r4 = *(0xb3 + r29); // lbz @ 0x80798ABC
    /* lfs f1, 0(r6) */ // 0x80798AC0
    FUN_807AB4AC(r6, r5); // bl 0x807AB4AC
    /* lis r3, 0 */ // 0x80798AC8
    r4 = *(0xb3 + r29); // lbz @ 0x80798ACC
    r3 = *(0 + r3); // lwz @ 0x80798AD0
    /* li r5, 0x12c */ // 0x80798AD4
    FUN_8078C0D8(r3, r5); // bl 0x8078C0D8
    /* lis r3, 0 */ // 0x80798ADC
    r4 = *(0 + r3); // lwz @ 0x80798AE0
    r3 = *(0x29 + r4); // lbz @ 0x80798AE4
    r0 = r3 + -1; // 0x80798AE8
    *(0x29 + r4) = r0; // stb @ 0x80798AEC
    /* b 0x80798b68 */ // 0x80798AF0
    /* lis r3, 0 */ // 0x80798AF4
    r3 = *(0 + r3); // lwz @ 0x80798AF8
    r0 = r3 + -0x32; // 0x80798AFC
    if (>) goto 0x0x80798b68;
    r0 = *(0xdb + r29); // lbz @ 0x80798B08
    if (==) goto 0x0x80798b34;
    /* lis r3, 0 */ // 0x80798B14
    /* li r4, 0xda */ // 0x80798B18
    r3 = *(0 + r3); // lwz @ 0x80798B1C
    /* li r5, -1 */ // 0x80798B20
    r12 = *(0 + r3); // lwz @ 0x80798B24
    r12 = *(0x20 + r12); // lwz @ 0x80798B28
    /* mtctr r12 */ // 0x80798B2C
    /* bctrl  */ // 0x80798B30
    r0 = *(0xda + r29); // lbz @ 0x80798B34
    if (!=) goto 0x0x80798b68;
    if (!=) goto 0x0x80798b68;
    /* lis r3, 0 */ // 0x80798B48
    /* li r4, 0xdb */ // 0x80798B4C
    r3 = *(0 + r3); // lwz @ 0x80798B50
    /* li r5, -1 */ // 0x80798B54
    r12 = *(0 + r3); // lwz @ 0x80798B58
    r12 = *(0x20 + r12); // lwz @ 0x80798B5C
    /* mtctr r12 */ // 0x80798B60
    /* bctrl  */ // 0x80798B64
    *(0xda + r29) = r30; // stb @ 0x80798B68
    *(0xdb + r29) = r31; // stb @ 0x80798B6C
    r31 = *(0x1c + r1); // lwz @ 0x80798B70
    r30 = *(0x18 + r1); // lwz @ 0x80798B74
    r29 = *(0x14 + r1); // lwz @ 0x80798B78
    r0 = *(0x24 + r1); // lwz @ 0x80798B7C
    return;
}