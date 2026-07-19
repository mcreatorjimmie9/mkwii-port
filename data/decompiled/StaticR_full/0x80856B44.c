/* Function at 0x80856B44, size=536 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_80856B44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0x15 */ // 0x80856B4C
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x80856B5C
    *(0x24 + r1) = r29; // stw @ 0x80856B60
    r5 = *(0x6c + r3); // lwz @ 0x80856B64
    r3 = *(0x28 + r5); // lwz @ 0x80856B68
    FUN_805E6F54(); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80856B70
    if (==) goto 0x0x80856c38;
    r3 = *(0x6c + r31); // lwz @ 0x80856B7C
    /* li r4, 0x15 */ // 0x80856B80
    r3 = *(0x28 + r3); // lwz @ 0x80856B84
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80856B8C
    if (==) goto 0x0x80856c1c;
    r3 = *(0x6c + r31); // lwz @ 0x80856B98
    /* li r4, 0x15 */ // 0x80856B9C
    r3 = *(0x28 + r3); // lwz @ 0x80856BA0
    FUN_805E6F54(r4); // bl 0x805E6F54
    r30 = *(0xc + r3); // lwz @ 0x80856BA8
    /* li r29, 0 */ // 0x80856BAC
    if (==) goto 0x0x80856be8;
    /* lis r4, 0 */ // 0x80856BB8
    r3 = r30;
    r4 = r4 + 0; // 0x80856BC0
    *(0x14 + r1) = r4; // stw @ 0x80856BC4
    r12 = *(0 + r30); // lwz @ 0x80856BCC
    r12 = *(8 + r12); // lwz @ 0x80856BD0
    /* mtctr r12 */ // 0x80856BD4
    /* bctrl  */ // 0x80856BD8
    if (==) goto 0x0x80856be8;
    /* li r29, 1 */ // 0x80856BE4
    if (==) goto 0x0x80856bf4;
    /* b 0x80856bf8 */ // 0x80856BF0
    /* li r30, 0 */ // 0x80856BF4
    r0 = *(0x2c + r30); // lwz @ 0x80856BF8
    /* lis r3, 0 */ // 0x80856BFC
    *(0x10 + r1) = r0; // stw @ 0x80856C00
    /* lfs f1, 0(r3) */ // 0x80856C08
    /* li r4, 0 */ // 0x80856C0C
    r3 = *(0x108 + r31); // lwz @ 0x80856C10
    /* li r5, 0 */ // 0x80856C14
    FUN_808504CC(r6, r4, r5); // bl 0x808504CC
    r3 = *(0x104 + r31); // lwz @ 0x80856C1C
    /* lfs f0, 0x534(r3) */ // 0x80856C20
    /* stfs f0, 0x6c0(r31) */ // 0x80856C24
    /* lfs f0, 0x538(r3) */ // 0x80856C28
    /* stfs f0, 0x6c4(r31) */ // 0x80856C2C
    /* lfs f0, 0x53c(r3) */ // 0x80856C30
    /* stfs f0, 0x6c8(r31) */ // 0x80856C34
    r3 = *(0x6c + r31); // lwz @ 0x80856C38
    /* li r4, 0x17 */ // 0x80856C3C
    r3 = *(0x28 + r3); // lwz @ 0x80856C40
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80856C48
    if (==) goto 0x0x80856d10;
    r3 = *(0x6c + r31); // lwz @ 0x80856C54
    /* li r4, 0x17 */ // 0x80856C58
    r3 = *(0x28 + r3); // lwz @ 0x80856C5C
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80856C64
    if (==) goto 0x0x80856cf4;
    r3 = *(0x6c + r31); // lwz @ 0x80856C70
    /* li r4, 0x17 */ // 0x80856C74
    r3 = *(0x28 + r3); // lwz @ 0x80856C78
    FUN_805E6F54(r4); // bl 0x805E6F54
    r30 = *(0xc + r3); // lwz @ 0x80856C80
    /* li r29, 0 */ // 0x80856C84
    if (==) goto 0x0x80856cc0;
    /* lis r4, 0 */ // 0x80856C90
    r3 = r30;
    r4 = r4 + 0; // 0x80856C98
    *(0xc + r1) = r4; // stw @ 0x80856C9C
    r12 = *(0 + r30); // lwz @ 0x80856CA4
    r12 = *(8 + r12); // lwz @ 0x80856CA8
    /* mtctr r12 */ // 0x80856CAC
    /* bctrl  */ // 0x80856CB0
    if (==) goto 0x0x80856cc0;
    /* li r29, 1 */ // 0x80856CBC
    if (==) goto 0x0x80856ccc;
    /* b 0x80856cd0 */ // 0x80856CC8
    /* li r30, 0 */ // 0x80856CCC
    r0 = *(0x2c + r30); // lwz @ 0x80856CD0
    /* lis r3, 0 */ // 0x80856CD4
    *(8 + r1) = r0; // stw @ 0x80856CD8
    /* lfs f1, 0(r3) */ // 0x80856CE0
    /* li r4, 0 */ // 0x80856CE4
    r3 = *(0x108 + r31); // lwz @ 0x80856CE8
    /* li r5, 0 */ // 0x80856CEC
    FUN_808504CC(r6, r4, r5); // bl 0x808504CC
    r3 = *(0x104 + r31); // lwz @ 0x80856CF4
    /* lfs f0, 0x534(r3) */ // 0x80856CF8
    /* stfs f0, 0x6cc(r31) */ // 0x80856CFC
    /* lfs f0, 0x538(r3) */ // 0x80856D00
    /* stfs f0, 0x6d0(r31) */ // 0x80856D04
    /* lfs f0, 0x53c(r3) */ // 0x80856D08
    /* stfs f0, 0x6d4(r31) */ // 0x80856D0C
    /* lis r4, 0 */ // 0x80856D10
    /* lis r3, 0 */ // 0x80856D14
    /* lfs f1, 0(r4) */ // 0x80856D18
    /* lfs f0, 0(r3) */ // 0x80856D1C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80856D20
    if (<=) goto 0x0x80856d40;
    /* lfs f0, 0x6c4(r31) */ // 0x80856D28
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80856D2C
    if (>=) goto 0x0x80856d38;
    /* b 0x80856d3c */ // 0x80856D34
    /* fmr f1, f0 */ // 0x80856D38
    /* stfs f1, 0x6c4(r31) */ // 0x80856D3C
    r0 = *(0x34 + r1); // lwz @ 0x80856D40
    r31 = *(0x2c + r1); // lwz @ 0x80856D44
    r30 = *(0x28 + r1); // lwz @ 0x80856D48
    r29 = *(0x24 + r1); // lwz @ 0x80856D4C
    return;
}