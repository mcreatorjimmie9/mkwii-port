/* Function at 0x8081BB90, size=800 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 26 function(s) */

int FUN_8081BB90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8081BB98
    r4 = r4 + 0; // 0x8081BBA0
    *(0xc + r1) = r31; // stw @ 0x8081BBA4
    /* lis r31, 0 */ // 0x8081BBA8
    r3 = r31 + 0; // 0x8081BBAC
    *(8 + r1) = r30; // stw @ 0x8081BBB0
    FUN_8081BF10(r4, r3); // bl 0x8081BF10
    r31 = r31 + 0; // 0x8081BBB8
    /* lis r4, 0 */ // 0x8081BBBC
    r3 = r31 + 0x74; // 0x8081BBC0
    r4 = r4 + 0; // 0x8081BBC4
    FUN_8081BF10(r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BBCC
    r3 = r31 + 0xe8; // 0x8081BBD0
    r4 = r4 + 0; // 0x8081BBD4
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BBDC
    r3 = r31 + 0x15c; // 0x8081BBE0
    r4 = r4 + 0; // 0x8081BBE4
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BBEC
    r3 = r31 + 0x1d0; // 0x8081BBF0
    r4 = r4 + 0; // 0x8081BBF4
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BBFC
    r3 = r31 + 0x244; // 0x8081BC00
    r4 = r4 + 0; // 0x8081BC04
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC0C
    r3 = r31 + 0x2b8; // 0x8081BC10
    r4 = r4 + 0; // 0x8081BC14
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC1C
    r3 = r31 + 0x32c; // 0x8081BC20
    r4 = r4 + 0; // 0x8081BC24
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC2C
    r3 = r31 + 0x3a0; // 0x8081BC30
    r4 = r4 + 0; // 0x8081BC34
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC3C
    r3 = r31 + 0x414; // 0x8081BC40
    r4 = r4 + 0; // 0x8081BC44
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC4C
    r3 = r31 + 0x488; // 0x8081BC50
    r4 = r4 + 0; // 0x8081BC54
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC5C
    r3 = r31 + 0x4fc; // 0x8081BC60
    r4 = r4 + 0; // 0x8081BC64
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC6C
    r3 = r31 + 0x570; // 0x8081BC70
    r4 = r4 + 0; // 0x8081BC74
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC7C
    r3 = r31 + 0x5e4; // 0x8081BC80
    r4 = r4 + 0; // 0x8081BC84
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* lis r4, 0 */ // 0x8081BC8C
    r3 = r31 + 0x658; // 0x8081BC90
    r4 = r4 + 0; // 0x8081BC94
    FUN_8081BF10(r4, r4, r3, r4); // bl 0x8081BF10
    /* li r30, 0 */ // 0x8081BC9C
    r12 = *(0x24 + r31); // lwz @ 0x8081BCA0
    if (==) goto 0x0x8081bcc4;
    /* li r3, 0 */ // 0x8081BCAC
    /* li r4, 0 */ // 0x8081BCB0
    /* li r5, 1 */ // 0x8081BCB4
    /* mtctr r12 */ // 0x8081BCB8
    /* bctrl  */ // 0x8081BCBC
    /* b 0x8081bcc8 */ // 0x8081BCC0
    /* li r3, 0 */ // 0x8081BCC4
    r30 = r30 + 1; // 0x8081BCC8
    *(0x28 + r31) = r3; // stw @ 0x8081BCCC
    r31 = r31 + 0x74; // 0x8081BCD4
    if (<) goto 0x0x8081bca0;
    FUN_8081BEB0(); // bl 0x8081BEB0
    if (==) goto 0x0x8081bd30;
    /* lis r3, 0 */ // 0x8081BCE8
    /* li r0, 0 */ // 0x8081BCEC
    r3 = r3 + 0; // 0x8081BCF0
    *(0x58 + r3) = r0; // stb @ 0x8081BCF4
    *(0xcc + r3) = r0; // stb @ 0x8081BCF8
    *(0x140 + r3) = r0; // stb @ 0x8081BCFC
    *(0x1b4 + r3) = r0; // stb @ 0x8081BD00
    *(0x228 + r3) = r0; // stb @ 0x8081BD04
    *(0x29c + r3) = r0; // stb @ 0x8081BD08
    *(0x310 + r3) = r0; // stb @ 0x8081BD0C
    *(0x384 + r3) = r0; // stb @ 0x8081BD10
    *(0x3f8 + r3) = r0; // stb @ 0x8081BD14
    *(0x46c + r3) = r0; // stb @ 0x8081BD18
    *(0x4e0 + r3) = r0; // stb @ 0x8081BD1C
    *(0x554 + r3) = r0; // stb @ 0x8081BD20
    *(0x5c8 + r3) = r0; // stb @ 0x8081BD24
    *(0x63c + r3) = r0; // stb @ 0x8081BD28
    *(0x6b0 + r3) = r0; // stb @ 0x8081BD2C
    FUN_8081BEC4(); // bl 0x8081BEC4
    FUN_8081BEBC(); // bl 0x8081BEBC
    if (==) goto 0x0x8081bd88;
    /* lis r3, 0 */ // 0x8081BD40
    /* li r0, 1 */ // 0x8081BD44
    r3 = r3 + 0; // 0x8081BD48
    *(4 + r3) = r0; // stw @ 0x8081BD4C
    *(0x78 + r3) = r0; // stw @ 0x8081BD50
    *(0xec + r3) = r0; // stw @ 0x8081BD54
    *(0x160 + r3) = r0; // stw @ 0x8081BD58
    *(0x1d4 + r3) = r0; // stw @ 0x8081BD5C
    *(0x248 + r3) = r0; // stw @ 0x8081BD60
    *(0x2bc + r3) = r0; // stw @ 0x8081BD64
    *(0x330 + r3) = r0; // stw @ 0x8081BD68
    *(0x3a4 + r3) = r0; // stw @ 0x8081BD6C
    *(0x418 + r3) = r0; // stw @ 0x8081BD70
    *(0x48c + r3) = r0; // stw @ 0x8081BD74
    *(0x500 + r3) = r0; // stw @ 0x8081BD78
    *(0x574 + r3) = r0; // stw @ 0x8081BD7C
    *(0x5e8 + r3) = r0; // stw @ 0x8081BD80
    *(0x65c + r3) = r0; // stw @ 0x8081BD84
    /* li r30, 0 */ // 0x8081BD88
    FUN_8081BED0(); // bl 0x8081BED0
    /* clrlwi r31, r3, 0x10 */ // 0x8081BD90
    /* b 0x8081be00 */ // 0x8081BD94
    /* clrlwi r3, r30, 0x10 */ // 0x8081BD98
    FUN_8081BF00(); // bl 0x8081BF00
    FUN_8081BEF4(); // bl 0x8081BEF4
    /* clrlwi r0, r3, 0x10 */ // 0x8081BDA4
    if (!=) goto 0x0x8081bdfc;
    FUN_80837F60(); // bl 0x80837F60
    /* lis r31, 0 */ // 0x8081BDB4
    r31 = r31 + 0; // 0x8081BDB8
    /* lfs f0, 0x44(r31) */ // 0x8081BDBC
    /* fmuls f0, f0, f1 */ // 0x8081BDC0
    /* stfs f0, 0x44(r31) */ // 0x8081BDC4
    FUN_80837F6C(); // bl 0x80837F6C
    /* lfs f0, 0x48(r31) */ // 0x8081BDCC
    /* fmuls f0, f0, f1 */ // 0x8081BDD0
    /* stfs f0, 0x48(r31) */ // 0x8081BDD4
    FUN_80837F78(); // bl 0x80837F78
    /* lfs f0, 0x4c(r31) */ // 0x8081BDDC
    /* fmuls f0, f0, f1 */ // 0x8081BDE0
    /* stfs f0, 0x4c(r31) */ // 0x8081BDE4
    FUN_80837F84(); // bl 0x80837F84
    /* lfs f0, 0x50(r31) */ // 0x8081BDEC
    /* fmuls f0, f0, f1 */ // 0x8081BDF0
    /* stfs f0, 0x50(r31) */ // 0x8081BDF4
    /* b 0x8081be0c */ // 0x8081BDF8
    r30 = r30 + 1; // 0x8081BDFC
    /* clrlwi r0, r30, 0x10 */ // 0x8081BE00
    if (<) goto 0x0x8081bd98;
    FUN_80842D24(); // bl 0x80842D24
    if (==) goto 0x0x8081be98;
    /* lis r3, 0 */ // 0x8081BE18
    r3 = r3 + 0; // 0x8081BE1C
    r0 = *(8 + r3); // lwz @ 0x8081BE20
    *(4 + r3) = r0; // stw @ 0x8081BE24
    r0 = *(0x7c + r3); // lwz @ 0x8081BE28
    *(0x78 + r3) = r0; // stw @ 0x8081BE2C
    r0 = *(0xf0 + r3); // lwz @ 0x8081BE30
    *(0xec + r3) = r0; // stw @ 0x8081BE34
    r0 = *(0x164 + r3); // lwz @ 0x8081BE38
    *(0x160 + r3) = r0; // stw @ 0x8081BE3C
    r0 = *(0x1d8 + r3); // lwz @ 0x8081BE40
    *(0x1d4 + r3) = r0; // stw @ 0x8081BE44
    r0 = *(0x24c + r3); // lwz @ 0x8081BE48
    *(0x248 + r3) = r0; // stw @ 0x8081BE4C
    r0 = *(0x2c0 + r3); // lwz @ 0x8081BE50
    *(0x2bc + r3) = r0; // stw @ 0x8081BE54
    r0 = *(0x334 + r3); // lwz @ 0x8081BE58
    *(0x330 + r3) = r0; // stw @ 0x8081BE5C
    r0 = *(0x3a8 + r3); // lwz @ 0x8081BE60
    *(0x3a4 + r3) = r0; // stw @ 0x8081BE64
    r0 = *(0x41c + r3); // lwz @ 0x8081BE68
    *(0x418 + r3) = r0; // stw @ 0x8081BE6C
    r0 = *(0x490 + r3); // lwz @ 0x8081BE70
    *(0x48c + r3) = r0; // stw @ 0x8081BE74
    r0 = *(0x504 + r3); // lwz @ 0x8081BE78
    *(0x500 + r3) = r0; // stw @ 0x8081BE7C
    r0 = *(0x578 + r3); // lwz @ 0x8081BE80
    *(0x574 + r3) = r0; // stw @ 0x8081BE84
    r0 = *(0x5ec + r3); // lwz @ 0x8081BE88
    *(0x5e8 + r3) = r0; // stw @ 0x8081BE8C
    r0 = *(0x660 + r3); // lwz @ 0x8081BE90
    *(0x65c + r3) = r0; // stw @ 0x8081BE94
    r0 = *(0x14 + r1); // lwz @ 0x8081BE98
    r31 = *(0xc + r1); // lwz @ 0x8081BE9C
    r30 = *(8 + r1); // lwz @ 0x8081BEA0
    return;
}