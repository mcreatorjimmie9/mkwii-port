/* Function at 0x80649448, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80649448(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80649458
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80649460
    r30 = r3;
    if (==) goto 0x0x806494e8;
    r0 = *(0x340 + r3); // lwz @ 0x8064946C
    /* lis r4, 0 */ // 0x80649470
    r4 = r4 + 0; // 0x80649474
    *(0 + r3) = r4; // stw @ 0x80649478
    if (==) goto 0x0x8064949c;
    r3 = r0;
    /* li r4, 1 */ // 0x80649488
    r12 = *(0 + r3); // lwz @ 0x8064948C
    r12 = *(8 + r12); // lwz @ 0x80649490
    /* mtctr r12 */ // 0x80649494
    /* bctrl  */ // 0x80649498
    r3 = r30 + 0x1cc; // 0x8064949C
    /* li r4, -1 */ // 0x806494A0
    FUN_8066D42C(r3, r4); // bl 0x8066D42C
    /* addic. r3, r30, 0x58 */ // 0x806494A8
    if (==) goto 0x0x806494b8;
    /* li r4, 0 */ // 0x806494B0
    FUN_806A0540(r4, r4); // bl 0x806A0540
    if (==) goto 0x0x806494d8;
    r3 = r30 + 0x44; // 0x806494C0
    /* li r4, -1 */ // 0x806494C4
    FUN_80668158(r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806494D0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806494e8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806494EC
    r30 = *(8 + r1); // lwz @ 0x806494F0
    r0 = *(0x14 + r1); // lwz @ 0x806494F4
    return;
}