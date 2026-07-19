/* Function at 0x80643A88, size=592 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80643A88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80643A9C
    r31 = r31 + 0; // 0x80643AA0
    *(0x18 + r1) = r30; // stw @ 0x80643AA4
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80643AAC
    r29 = r3;
    if (>) goto 0x0x80643acc;
    r6 = *(0 + r3); // lwz @ 0x80643AB8
    r6 = *(4 + r6); // lwz @ 0x80643ABC
    r0 = *(0x14 + r6); // lwz @ 0x80643AC0
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80643AC4
    if (==) goto 0x0x80643cb8;
    /* extsb. r6, r5 */ // 0x80643ACC
    if (<=) goto 0x0x80643cb8;
    /* xori r0, r4, 0x46 */ // 0x80643AD4
    /* lfs f0, 0x44(r3) */ // 0x80643AD8
    r5 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x80643AE4
    /* stfs f0, 0x74(r3) */ // 0x80643AE8
    /* subf r0, r0, r5 */ // 0x80643AEC
    /* srwi r0, r0, 0x1f */ // 0x80643AF0
    if (!=) goto 0x0x80643b10;
    /* li r0, 0 */ // 0x80643AFC
    if (==) goto 0x0x80643b08;
    /* li r0, 3 */ // 0x80643B04
    *(0x70 + r3) = r0; // stw @ 0x80643B08
    /* b 0x80643b7c */ // 0x80643B0C
    if (!=) goto 0x0x80643b30;
    /* li r0, 1 */ // 0x80643B1C
    if (==) goto 0x0x80643b28;
    /* li r0, 4 */ // 0x80643B24
    *(0x70 + r3) = r0; // stw @ 0x80643B28
    /* b 0x80643b7c */ // 0x80643B2C
    if (!=) goto 0x0x80643b58;
    /* li r0, 2 */ // 0x80643B3C
    if (==) goto 0x0x80643b48;
    /* li r0, 5 */ // 0x80643B44
    /* lfs f0, 4(r31) */ // 0x80643B48
    *(0x70 + r3) = r0; // stw @ 0x80643B4C
    /* stfs f0, 0x74(r3) */ // 0x80643B50
    /* b 0x80643b7c */ // 0x80643B54
    if (!=) goto 0x0x80643b7c;
    /* li r0, 2 */ // 0x80643B64
    if (==) goto 0x0x80643b70;
    /* li r0, 5 */ // 0x80643B6C
    /* lfs f0, 0xc(r31) */ // 0x80643B70
    *(0x70 + r3) = r0; // stw @ 0x80643B74
    /* stfs f0, 0x74(r3) */ // 0x80643B78
    r0 = *(0x70 + r3); // lwz @ 0x80643B7C
    /* lis r4, 0 */ // 0x80643B80
    r5 = *(0x8c + r3); // lwz @ 0x80643B84
    r4 = r4 + 0; // 0x80643B88
    /* mulli r0, r0, 0x18 */ // 0x80643B8C
    /* lfs f1, 0(r31) */ // 0x80643B90
    /* lfs f0, 4(r31) */ // 0x80643B94
    r3 = r29;
    r4 = r4 + r0; // 0x80643B9C
    *(0x14 + r5) = r4; // stw @ 0x80643BA0
    /* lfs f2, 0x14(r4) */ // 0x80643BA4
    /* stfs f2, 0x10(r5) */ // 0x80643BA8
    /* lfs f2, 0(r4) */ // 0x80643BAC
    /* stfs f2, 4(r5) */ // 0x80643BB0
    /* lfs f2, 0xc(r4) */ // 0x80643BB4
    /* stfs f2, 0xc(r5) */ // 0x80643BB8
    /* stfs f1, 0(r5) */ // 0x80643BBC
    /* stfs f0, 8(r5) */ // 0x80643BC0
    FUN_8061E2BC(); // bl 0x8061E2BC
    r12 = *(0x20 + r3); // lwz @ 0x80643BC8
    /* extsb r5, r30 */ // 0x80643BCC
    /* li r4, 2 */ // 0x80643BD0
    r12 = *(0x1c + r12); // lwz @ 0x80643BD4
    /* mtctr r12 */ // 0x80643BD8
    /* bctrl  */ // 0x80643BDC
    r3 = r29;
    /* li r4, 0xb */ // 0x80643BE4
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    /* lis r3, 0 */ // 0x80643BEC
    r3 = *(0 + r3); // lwz @ 0x80643BF0
    r0 = *(0xb68 + r3); // lwz @ 0x80643BF4
    if (==) goto 0x0x80643c0c;
    if (==) goto 0x0x80643c30;
    /* b 0x80643c50 */ // 0x80643C08
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80643C14
    /* li r4, 0x2ba */ // 0x80643C18
    /* lfs f1, 0(r31) */ // 0x80643C1C
    r12 = *(0xe0 + r12); // lwz @ 0x80643C20
    /* mtctr r12 */ // 0x80643C24
    /* bctrl  */ // 0x80643C28
    /* b 0x80643c50 */ // 0x80643C2C
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80643C38
    /* li r4, 0x30e */ // 0x80643C3C
    /* lfs f1, 0(r31) */ // 0x80643C40
    r12 = *(0xe0 + r12); // lwz @ 0x80643C44
    /* mtctr r12 */ // 0x80643C48
    /* bctrl  */ // 0x80643C4C
    r3 = *(0 + r29); // lwz @ 0x80643C50
    r3 = *(4 + r3); // lwz @ 0x80643C54
    r0 = *(8 + r3); // lwz @ 0x80643C58
    r0 = r0 | 0x8000; // 0x80643C5C
    *(8 + r3) = r0; // stw @ 0x80643C60
    r3 = *(0 + r29); // lwz @ 0x80643C64
    r3 = *(0 + r3); // lwz @ 0x80643C68
    r4 = *(0x38 + r3); // lwz @ 0x80643C6C
    if (==) goto 0x0x80643c84;
    r3 = *(0x10 + r4); // lwz @ 0x80643C78
    r0 = r3 + 1; // 0x80643C7C
    *(0x10 + r4) = r0; // stw @ 0x80643C80
    r3 = *(0 + r29); // lwz @ 0x80643C84
    r3 = *(4 + r3); // lwz @ 0x80643C88
    r0 = *(0x14 + r3); // lwz @ 0x80643C8C
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80643C90
    if (==) goto 0x0x80643cc0;
    r30 = *(0x7a + r29); // lbz @ 0x80643C98
    r3 = r29;
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x56 + r3) = r30; // stb @ 0x80643CA4
    r3 = r29;
    /* li r4, 0xa */ // 0x80643CAC
    FUN_8061F070(r3, r3, r4); // bl 0x8061F070
    /* b 0x80643cc0 */ // 0x80643CB4
    /* li r0, -1 */ // 0x80643CB8
    *(0x70 + r3) = r0; // stw @ 0x80643CBC
    /* lfs f2, 0(r31) */ // 0x80643CC0
    r3 = r29 + 0x7c; // 0x80643CC4
    /* lfs f1, 4(r31) */ // 0x80643CC8
    /* fmr f3, f2 */ // 0x80643CCC
    /* fmr f4, f2 */ // 0x80643CD0
    FUN_805E3430(r3); // bl 0x805E3430
}