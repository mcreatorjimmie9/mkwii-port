/* Function at 0x806BAD2C, size=380 bytes */
/* Stack frame: 16 bytes */
/* Calls: 6 function(s) */

int FUN_806BAD2C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x806BAD34
    *(0x14 + r1) = r0; // stw @ 0x806BAD38
    *(0x314 + r3) = r4; // stb @ 0x806BAD3C
    /* lis r3, 0 */ // 0x806BAD40
    r3 = *(0 + r3); // lwz @ 0x806BAD44
    r3 = *(0 + r3); // lwz @ 0x806BAD48
    r0 = *(0 + r3); // lwz @ 0x806BAD4C
    if (==) goto 0x0x806bad64;
    if (==) goto 0x0x806bae00;
    /* b 0x806bae98 */ // 0x806BAD60
    /* lis r3, 0 */ // 0x806BAD64
    r5 = *(0 + r3); // lwz @ 0x806BAD68
    r0 = *(0x36 + r5); // lha @ 0x806BAD6C
    if (<) goto 0x0x806bad90;
    /* lis r3, 1 */ // 0x806BAD78
    /* clrlwi r4, r0, 0x18 */ // 0x806BAD7C
    r0 = r3 + -0x6c10; // 0x806BAD80
    r0 = r0 * r4; // 0x806BAD84
    r3 = r5 + r0; // 0x806BAD88
    r4 = r3 + 0x38; // 0x806BAD8C
    /* addis r3, r4, 1 */ // 0x806BAD90
    /* li r4, 0x39 */ // 0x806BAD94
    r3 = r3 + -0x7008; // 0x806BAD98
    FUN_805D84B0(r4, r4, r3); // bl 0x805D84B0
    if (!=) goto 0x0x806bae98;
    /* lis r3, 0 */ // 0x806BADA8
    r5 = *(0 + r3); // lwz @ 0x806BADAC
    r0 = *(0x36 + r5); // lha @ 0x806BADB0
    if (<) goto 0x0x806badd8;
    /* lis r3, 1 */ // 0x806BADBC
    /* clrlwi r4, r0, 0x18 */ // 0x806BADC0
    r0 = r3 + -0x6c10; // 0x806BADC4
    r0 = r0 * r4; // 0x806BADC8
    r3 = r5 + r0; // 0x806BADCC
    r3 = r3 + 0x38; // 0x806BADD0
    /* b 0x806baddc */ // 0x806BADD4
    /* li r3, 0 */ // 0x806BADD8
    /* addis r3, r3, 1 */ // 0x806BADDC
    /* li r4, 0x39 */ // 0x806BADE0
    r3 = r3 + -0x7008; // 0x806BADE4
    FUN_805D8460(r3, r4, r3); // bl 0x805D8460
    /* lis r3, 0 */ // 0x806BADEC
    r3 = *(0 + r3); // lwz @ 0x806BADF0
    r3 = *(0x90 + r3); // lwz @ 0x806BADF4
    FUN_806845FC(r3, r3); // bl 0x806845FC
    /* b 0x806bae98 */ // 0x806BADFC
    /* lis r3, 0 */ // 0x806BAE00
    r5 = *(0 + r3); // lwz @ 0x806BAE04
    r0 = *(0x36 + r5); // lha @ 0x806BAE08
    if (<) goto 0x0x806bae2c;
    /* lis r3, 1 */ // 0x806BAE14
    /* clrlwi r4, r0, 0x18 */ // 0x806BAE18
    r0 = r3 + -0x6c10; // 0x806BAE1C
    r0 = r0 * r4; // 0x806BAE20
    r3 = r5 + r0; // 0x806BAE24
    r4 = r3 + 0x38; // 0x806BAE28
    /* addis r3, r4, 1 */ // 0x806BAE2C
    /* li r4, 0x38 */ // 0x806BAE30
    r3 = r3 + -0x7008; // 0x806BAE34
    FUN_805D84B0(r4, r4, r3); // bl 0x805D84B0
    if (!=) goto 0x0x806bae98;
    /* lis r3, 0 */ // 0x806BAE44
    r5 = *(0 + r3); // lwz @ 0x806BAE48
    r0 = *(0x36 + r5); // lha @ 0x806BAE4C
    if (<) goto 0x0x806bae74;
    /* lis r3, 1 */ // 0x806BAE58
    /* clrlwi r4, r0, 0x18 */ // 0x806BAE5C
    r0 = r3 + -0x6c10; // 0x806BAE60
    r0 = r0 * r4; // 0x806BAE64
    r3 = r5 + r0; // 0x806BAE68
    r3 = r3 + 0x38; // 0x806BAE6C
    /* b 0x806bae78 */ // 0x806BAE70
    /* li r3, 0 */ // 0x806BAE74
    /* addis r3, r3, 1 */ // 0x806BAE78
    /* li r4, 0x38 */ // 0x806BAE7C
    r3 = r3 + -0x7008; // 0x806BAE80
    FUN_805D8460(r3, r4, r3); // bl 0x805D8460
    /* lis r3, 0 */ // 0x806BAE88
    r3 = *(0 + r3); // lwz @ 0x806BAE8C
    r3 = *(0x90 + r3); // lwz @ 0x806BAE90
    FUN_806845FC(r3, r3); // bl 0x806845FC
    r0 = *(0x14 + r1); // lwz @ 0x806BAE98
    return;
}