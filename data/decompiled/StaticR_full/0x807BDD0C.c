/* Function at 0x807BDD0C, size=564 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_807BDD0C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807BDD20
    *(0x14 + r1) = r29; // stw @ 0x807BDD24
    r4 = *(0x198 + r3); // lwz @ 0x807BDD28
    r3 = *(0 + r4); // lwz @ 0x807BDD2C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BDD34
    /* clrlwi r0, r3, 0x18 */ // 0x807BDD38
    r4 = *(0 + r4); // lwz @ 0x807BDD3C
    /* mulli r30, r0, 0x248 */ // 0x807BDD40
    /* li r3, 0 */ // 0x807BDD44
    r0 = *(0x14 + r4); // lwz @ 0x807BDD48
    r4 = r0 + r30; // 0x807BDD4C
    r0 = *(0xc8 + r4); // lwz @ 0x807BDD50
    if (==) goto 0x0x807bdd6c;
    r0 = *(0x208 + r4); // lbz @ 0x807BDD5C
    if (!=) goto 0x0x807bdd6c;
    /* li r3, 1 */ // 0x807BDD68
    if (==) goto 0x0x807bdd84;
    r3 = r31;
    r4 = r31 + 0x64; // 0x807BDD78
    FUN_807CF1B4(r3, r3, r4); // bl 0x807CF1B4
    /* b 0x807bdf24 */ // 0x807BDD80
    r3 = *(0x198 + r31); // lwz @ 0x807BDD84
    r3 = *(0 + r3); // lwz @ 0x807BDD88
    FUN_8061E2D8(r4); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BDD90
    /* clrlwi r0, r3, 0x18 */ // 0x807BDD94
    r3 = *(0 + r4); // lwz @ 0x807BDD98
    /* mulli r0, r0, 0x248 */ // 0x807BDD9C
    r3 = *(0x14 + r3); // lwz @ 0x807BDDA0
    r4 = r3 + r0; // 0x807BDDA4
    r0 = *(0x8c + r4); // lwz @ 0x807BDDA8
    if (==) goto 0x0x807bddc0;
    r29 = r0;
    /* li r0, 1 */ // 0x807BDDB8
    /* b 0x807bddc4 */ // 0x807BDDBC
    /* li r0, 0 */ // 0x807BDDC0
    if (==) goto 0x0x807bded8;
    r0 = r29 + -0x10; // 0x807BDDCC
    /* li r3, 0 */ // 0x807BDDD0
    if (>) goto 0x0x807bdde0;
    /* li r3, 1 */ // 0x807BDDDC
    if (==) goto 0x0x807bde3c;
    r3 = *(0x19c + r31); // lwz @ 0x807BDDE8
    if (==) goto 0x0x807bde08;
    if (==) goto 0x0x807bde24;
    if (==) goto 0x0x807bde30;
    /* b 0x807bdf24 */ // 0x807BDE04
    r3 = *(0x198 + r31); // lwz @ 0x807BDE08
    /* li r4, 4 */ // 0x807BDE0C
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = *(0x19c + r31); // lwz @ 0x807BDE14
    r0 = r3 + 1; // 0x807BDE18
    *(0x19c + r31) = r0; // stw @ 0x807BDE1C
    /* b 0x807bdf24 */ // 0x807BDE20
    r0 = r3 + 1; // 0x807BDE24
    *(0x19c + r31) = r0; // stw @ 0x807BDE28
    /* b 0x807bdf24 */ // 0x807BDE2C
    /* li r0, 0 */ // 0x807BDE30
    *(0x19c + r31) = r0; // stw @ 0x807BDE34
    /* b 0x807bdf24 */ // 0x807BDE38
    r0 = r29 + -4; // 0x807BDE3C
    /* li r3, 0 */ // 0x807BDE40
    if (<=) goto 0x0x807bde54;
    if (!=) goto 0x0x807bde58;
    /* li r3, 1 */ // 0x807BDE54
    if (==) goto 0x0x807bde70;
    r3 = r31;
    r4 = r31 + 0xbc; // 0x807BDE64
    FUN_807CF1B4(r3, r3, r4); // bl 0x807CF1B4
    /* b 0x807bdf24 */ // 0x807BDE6C
    /* li r0, 0 */ // 0x807BDE74
    if (==) goto 0x0x807bde84;
    if (!=) goto 0x0x807bde88;
    /* li r0, 1 */ // 0x807BDE84
    if (==) goto 0x0x807bdec8;
    r12 = *(0x34 + r31); // lwz @ 0x807BDE90
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x807BDE98
    /* mtctr r12 */ // 0x807BDE9C
    /* bctrl  */ // 0x807BDEA0
    if (==) goto 0x0x807bdec8;
    r3 = *(0x198 + r31); // lwz @ 0x807BDEAC
    /* li r4, 4 */ // 0x807BDEB0
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = r31;
    r4 = r31 + 0x140; // 0x807BDEBC
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807bdf24 */ // 0x807BDEC4
    r3 = r31;
    r4 = r31 + 0x90; // 0x807BDECC
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807bdf24 */ // 0x807BDED4
    r3 = r3 + r30; // 0x807BDED8
    r0 = *(0x58 + r3); // lwz @ 0x807BDEDC
    if (==) goto 0x0x807bdf24;
    r0 = *(0x19c + r31); // lwz @ 0x807BDEE8
    if (==) goto 0x0x807bdf00;
    if (==) goto 0x0x807bdf1c;
    /* b 0x807bdf24 */ // 0x807BDEFC
    r3 = *(0x198 + r31); // lwz @ 0x807BDF00
    /* li r4, 4 */ // 0x807BDF04
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = *(0x19c + r31); // lwz @ 0x807BDF0C
    r0 = r3 + 1; // 0x807BDF10
    *(0x19c + r31) = r0; // stw @ 0x807BDF14
    /* b 0x807bdf24 */ // 0x807BDF18
    /* li r0, 0 */ // 0x807BDF1C
    *(0x19c + r31) = r0; // stw @ 0x807BDF20
    r0 = *(0x24 + r1); // lwz @ 0x807BDF24
    r31 = *(0x1c + r1); // lwz @ 0x807BDF28
    r30 = *(0x18 + r1); // lwz @ 0x807BDF2C
    r29 = *(0x14 + r1); // lwz @ 0x807BDF30
    return;
}