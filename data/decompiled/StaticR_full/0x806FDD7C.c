/* Function at 0x806FDD7C, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_806FDD7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806FDD88
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806FDD90
    if (!=) goto 0x0x806fdde0;
    /* li r0, 0 */ // 0x806FDD9C
    *(0x1c + r3) = r0; // stw @ 0x806FDDA0
    r3 = *(0x758c + r3); // lwz @ 0x806FDDA4
    r12 = *(0x18 + r3); // lwz @ 0x806FDDA8
    r12 = *(0xc + r12); // lwz @ 0x806FDDAC
    /* mtctr r12 */ // 0x806FDDB0
    /* bctrl  */ // 0x806FDDB4
    if (!=) goto 0x0x806fddcc;
    /* li r0, 1 */ // 0x806FDDC0
    *(0x20 + r31) = r0; // stb @ 0x806FDDC4
    /* b 0x806fdde0 */ // 0x806FDDC8
    r3 = *(0x758c + r31); // lwz @ 0x806FDDCC
    r0 = *(4 + r3); // lwz @ 0x806FDDD0
    *(0x1c + r31) = r0; // stw @ 0x806FDDD4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fdde4 */ // 0x806FDDDC
    /* li r3, 0 */ // 0x806FDDE0
    if (==) goto 0x0x806fddfc;
    /* li r0, 6 */ // 0x806FDDEC
    *(0x757c + r31) = r3; // stw @ 0x806FDDF0
    *(0x14 + r31) = r0; // stw @ 0x806FDDF4
    /* b 0x806fde74 */ // 0x806FDDF8
    r0 = *(0x4200 + r31); // lbz @ 0x806FDDFC
    if (==) goto 0x0x806fde3c;
    /* lis r3, 0 */ // 0x806FDE08
    r3 = *(0 + r3); // lwz @ 0x806FDE0C
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0 + r3); // lwz @ 0x806FDE14
    /* li r4, 1 */ // 0x806FDE18
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x806fde6c;
    FUN_805E3430(r4); // bl 0x805E3430
    /* li r0, 6 */ // 0x806FDE2C
    *(0x757c + r31) = r3; // stw @ 0x806FDE30
    *(0x14 + r31) = r0; // stw @ 0x806FDE34
    /* b 0x806fde74 */ // 0x806FDE38
    r3 = r31 + 0x24; // 0x806FDE3C
    /* li r4, 3 */ // 0x806FDE40
    FUN_80705364(r3, r4); // bl 0x80705364
    if (!=) goto 0x0x806fde6c;
    r3 = r31 + 0x24; // 0x806FDE50
    FUN_80704FB4(r4, r3); // bl 0x80704FB4
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 6 */ // 0x806FDE5C
    *(0x757c + r31) = r3; // stw @ 0x806FDE60
    *(0x14 + r31) = r0; // stw @ 0x806FDE64
    /* b 0x806fde74 */ // 0x806FDE68
    /* li r0, 1 */ // 0x806FDE6C
    *(0x14 + r31) = r0; // stw @ 0x806FDE70
    r0 = *(0x20 + r31); // lbz @ 0x806FDE74
    if (==) goto 0x0x806fdeb0;
    r3 = *(0x758c + r31); // lwz @ 0x806FDE80
    r12 = *(0x18 + r3); // lwz @ 0x806FDE84
}