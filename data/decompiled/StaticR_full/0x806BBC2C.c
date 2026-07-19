/* Function at 0x806BBC2C, size=328 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806BBC2C(int r3, int r4)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BBC34
    *(0xd8 + r1) = r30; // stw @ 0x806BBC40
    *(0xd4 + r1) = r29; // stw @ 0x806BBC44
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BBC4C
    r3 = *(0 + r3); // lwz @ 0x806BBC50
    r30 = *(0x14c + r3); // lwz @ 0x806BBC54
    if (!=) goto 0x0x806bbc68;
    /* li r30, 0 */ // 0x806BBC60
    /* b 0x806bbcbc */ // 0x806BBC64
    /* lis r31, 0 */ // 0x806BBC68
    r31 = r31 + 0; // 0x806BBC6C
    if (==) goto 0x0x806bbcb8;
    r12 = *(0 + r30); // lwz @ 0x806BBC74
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BBC7C
    /* mtctr r12 */ // 0x806BBC80
    /* bctrl  */ // 0x806BBC84
    /* b 0x806bbca0 */ // 0x806BBC88
    if (!=) goto 0x0x806bbc9c;
    /* li r0, 1 */ // 0x806BBC94
    /* b 0x806bbcac */ // 0x806BBC98
    r3 = *(0 + r3); // lwz @ 0x806BBC9C
    if (!=) goto 0x0x806bbc8c;
    /* li r0, 0 */ // 0x806BBCA8
    if (==) goto 0x0x806bbcb8;
    /* b 0x806bbcbc */ // 0x806BBCB4
    /* li r30, 0 */ // 0x806BBCB8
    r12 = *(0 + r30); // lwz @ 0x806BBCBC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BBCC4
    /* mtctr r12 */ // 0x806BBCC8
    /* bctrl  */ // 0x806BBCCC
    /* lis r3, 0 */ // 0x806BBCD0
    /* li r31, 0 */ // 0x806BBCD4
    r3 = *(0 + r3); // lwz @ 0x806BBCD8
    FUN_806F5918(r3); // bl 0x806F5918
    if (>) goto 0x0x806bbd54;
    /* lis r4, 0 */ // 0x806BBCE8
    /* slwi r0, r3, 2 */ // 0x806BBCEC
    r4 = r4 + 0; // 0x806BBCF0
    /* lwzx r4, r4, r0 */ // 0x806BBCF4
    /* mtctr r4 */ // 0x806BBCF8
    /* bctr  */ // 0x806BBCFC
    /* li r31, 0x18a6 */ // 0x806BBD00
    /* b 0x806bbd54 */ // 0x806BBD04
    /* li r31, 0x18a7 */ // 0x806BBD08
    /* b 0x806bbd54 */ // 0x806BBD0C
    /* li r31, 0x18a8 */ // 0x806BBD10
    /* b 0x806bbd54 */ // 0x806BBD14
    /* li r31, 0x18a9 */ // 0x806BBD18
    /* b 0x806bbd54 */ // 0x806BBD1C
    /* li r31, 0x18aa */ // 0x806BBD20
    /* b 0x806bbd54 */ // 0x806BBD24
    /* li r31, 0x18ab */ // 0x806BBD28
    /* b 0x806bbd54 */ // 0x806BBD2C
    /* li r31, 0x18ad */ // 0x806BBD30
    /* b 0x806bbd54 */ // 0x806BBD34
    /* li r31, 0x815 */ // 0x806BBD38
    /* b 0x806bbd54 */ // 0x806BBD3C
    /* lis r3, 0 */ // 0x806BBD40
    r3 = *(0 + r3); // lwz @ 0x806BBD44
    r3 = *(0x90 + r3); // lwz @ 0x806BBD48
    FUN_806845A4(r3); // bl 0x806845A4
    /* b 0x806bbdac */ // 0x806BBD50
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806BBD5C
    r3 = *(0 + r3); // lwz @ 0x806BBD60
    FUN_806F58F0(r3, r3); // bl 0x806F58F0
    *(8 + r1) = r3; // stw @ 0x806BBD68
    r3 = r30;
    r4 = r31;
}