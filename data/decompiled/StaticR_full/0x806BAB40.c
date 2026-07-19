/* Function at 0x806BAB40, size=372 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_806BAB40(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806BAB48
    /* li r5, 0 */ // 0x806BAB4C
    *(0x44 + r1) = r0; // stw @ 0x806BAB50
    *(0x3c + r1) = r31; // stw @ 0x806BAB54
    *(0x38 + r1) = r30; // stw @ 0x806BAB58
    r30 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806BAB60
    r12 = *(0x10 + r12); // lwz @ 0x806BAB64
    /* mtctr r12 */ // 0x806BAB68
    r3 = r3 + 0x58; // 0x806BAB6C
    /* bctrl  */ // 0x806BAB70
    r3 = r30;
    r4 = r30 + 0x58; // 0x806BAB78
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x58; // 0x806BAB80
    r5 = r30 + 0x44; // 0x806BAB84
    /* li r4, 0 */ // 0x806BAB88
    /* li r6, 0 */ // 0x806BAB8C
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r30;
    /* li r4, 2 */ // 0x806BAB98
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x19c; // 0x806BABA4
    /* li r4, 0 */ // 0x806BABA8
    /* li r6, 0 */ // 0x806BABAC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x19c; // 0x806BABB8
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r3, 0 */ // 0x806BABC0
    r3 = *(0 + r3); // lwz @ 0x806BABC4
    r3 = *(0 + r3); // lwz @ 0x806BABC8
    r0 = *(0 + r3); // lwz @ 0x806BABCC
    if (==) goto 0x0x806babe4;
    if (==) goto 0x0x806bac08;
    /* b 0x806bac28 */ // 0x806BABE0
    /* lis r6, 0 */ // 0x806BABE4
    r6 = r6 + 0; // 0x806BABEC
    /* li r7, 0 */ // 0x806BABF0
    r4 = r6 + 0x168; // 0x806BABF4
    r5 = r6 + 0x16f; // 0x806BABF8
    r6 = r6 + 0x17d; // 0x806BABFC
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x806bac28 */ // 0x806BAC04
    /* lis r6, 0 */ // 0x806BAC08
    r6 = r6 + 0; // 0x806BAC10
    /* li r7, 0 */ // 0x806BAC14
    r4 = r6 + 0x18c; // 0x806BAC18
    r5 = r6 + 0x193; // 0x806BAC1C
    r6 = r6 + 0x1a1; // 0x806BAC20
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806BAC2C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r30;
    r5 = r30 + 0x32c; // 0x806BAC38
    /* li r4, 1 */ // 0x806BAC3C
    /* li r6, 0 */ // 0x806BAC40
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r3, 0 */ // 0x806BAC48
    r3 = *(0 + r3); // lwz @ 0x806BAC4C
    r3 = *(0 + r3); // lwz @ 0x806BAC50
    r0 = *(0 + r3); // lwz @ 0x806BAC54
    if (!=) goto 0x0x806bac7c;
    /* lis r4, 0 */ // 0x806BAC60
    r3 = r30 + 0x32c; // 0x806BAC64
    r4 = r4 + 0; // 0x806BAC68
    /* li r5, 0 */ // 0x806BAC6C
    r4 = r4 + 0x1ae; // 0x806BAC70
    FUN_806CA498(r4, r3, r4, r5, r4); // bl 0x806CA498
    /* b 0x806bac9c */ // 0x806BAC78
    if (!=) goto 0x0x806bac9c;
    /* lis r4, 0 */ // 0x806BAC84
    r3 = r30 + 0x32c; // 0x806BAC88
    r4 = r4 + 0; // 0x806BAC8C
    /* li r5, 0 */ // 0x806BAC90
    r4 = r4 + 0x1bd; // 0x806BAC94
    FUN_806CA498(r4, r3, r4, r5, r4); // bl 0x806CA498
    FUN_805ABAFC(r3, r4, r5, r4); // bl 0x805ABAFC
    /* lis r5, 0xb */ // 0x806BACA0
    r4 = *(0xc98 + r3); // lwz @ 0x806BACA4
    r3 = r5 + -0x5000; // 0x806BACA8
    /* li r5, 0x20 */ // 0x806BACAC
    FUN_805E3430(r5, r3, r5); // bl 0x805E3430
}