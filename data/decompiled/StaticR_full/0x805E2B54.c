/* Function at 0x805E2B54, size=572 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 15 function(s) */

void FUN_805E2B54(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805E2B5C
    *(0x14 + r1) = r0; // stw @ 0x805E2B60
    *(0xc + r1) = r31; // stw @ 0x805E2B64
    r0 = *(0 + r3); // lbz @ 0x805E2B68
    if (==) goto 0x0x805e2b7c;
    /* li r0, 0 */ // 0x805E2B74
    *(0 + r3) = r0; // stb @ 0x805E2B78
    /* lis r3, 0 */ // 0x805E2B7C
    r0 = *(0 + r3); // lwz @ 0x805E2B80
    /* clrlwi. r0, r0, 0x1f */ // 0x805E2B84
    if (==) goto 0x0x805e2b98;
    r0 = *(0 + r3); // lwz @ 0x805E2B8C
    r0 = r0 rlwinm 0; // rlwinm
    *(0 + r3) = r0; // stw @ 0x805E2B94
    FUN_80818E48(); // bl 0x80818E48
    if (==) goto 0x0x805e2bb0;
    /* lis r3, 0 */ // 0x805E2BA4
    /* li r0, 0 */ // 0x805E2BA8
    *(0 + r3) = r0; // stb @ 0x805E2BAC
    /* lis r3, 0 */ // 0x805E2BB0
    r0 = *(0 + r3); // lbz @ 0x805E2BB4
    if (==) goto 0x0x805e2bc8;
    /* li r0, 0 */ // 0x805E2BC0
    *(0 + r3) = r0; // stb @ 0x805E2BC4
    /* lis r31, 0 */ // 0x805E2BC8
    r3 = *(0 + r31); // lwz @ 0x805E2BCC
    FUN_805C270C(); // bl 0x805C270C
    /* lis r4, 0 */ // 0x805E2BD4
    r3 = *(0 + r31); // lwz @ 0x805E2BD8
    r5 = *(0 + r4); // lwz @ 0x805E2BDC
    /* li r31, 0 */ // 0x805E2BE0
    /* li r4, 0 */ // 0x805E2BE4
    r0 = *(0xb70 + r5); // lwz @ 0x805E2BE8
    if (<) goto 0x0x805e2c00;
    if (>) goto 0x0x805e2c00;
    /* li r4, 1 */ // 0x805E2BFC
    if (==) goto 0x0x805e2c1c;
    /* li r4, 1 */ // 0x805E2C08
    FUN_805C5788(r4, r4); // bl 0x805C5788
    if (!=) goto 0x0x805e2c1c;
    /* li r31, 1 */ // 0x805E2C18
    if (!=) goto 0x0x805e2c3c;
    /* lis r3, 0 */ // 0x805E2C24
    r3 = *(0 + r3); // lwz @ 0x805E2C28
    FUN_80815620(r3); // bl 0x80815620
    /* lis r3, 0 */ // 0x805E2C30
    r3 = *(0 + r3); // lwz @ 0x805E2C34
    FUN_808AAE80(r3, r3); // bl 0x808AAE80
    /* lis r3, 0 */ // 0x805E2C3C
    r3 = *(0 + r3); // lwz @ 0x805E2C40
    r0 = *(0x2d + r3); // lbz @ 0x805E2C44
    if (!=) goto 0x0x805e2c80;
    /* lis r3, 0 */ // 0x805E2C50
    r3 = *(0 + r3); // lwz @ 0x805E2C54
    FUN_807BFEA4(r3); // bl 0x807BFEA4
    /* lis r3, 0 */ // 0x805E2C5C
    r3 = *(0 + r3); // lwz @ 0x805E2C60
    FUN_808188B8(r3, r3); // bl 0x808188B8
    /* lis r3, 0 */ // 0x805E2C68
    r3 = *(0 + r3); // lwz @ 0x805E2C6C
    FUN_8061D864(r3, r3); // bl 0x8061D864
    /* lis r3, 0 */ // 0x805E2C74
    r3 = *(0 + r3); // lwz @ 0x805E2C78
    FUN_807AE330(r3, r3); // bl 0x807AE330
    /* lis r3, 0 */ // 0x805E2C80
    r3 = *(0 + r3); // lwz @ 0x805E2C84
    r0 = *(0x2d + r3); // lbz @ 0x805E2C88
    if (!=) goto 0x0x805e2cec;
    /* lis r4, 0 */ // 0x805E2C94
    /* li r31, 0 */ // 0x805E2C98
    r5 = *(0 + r4); // lwz @ 0x805E2C9C
    /* li r4, 0 */ // 0x805E2CA0
    r0 = *(0xb70 + r5); // lwz @ 0x805E2CA4
    if (<) goto 0x0x805e2cbc;
    if (>) goto 0x0x805e2cbc;
    /* li r4, 1 */ // 0x805E2CB8
    if (==) goto 0x0x805e2cd8;
    /* li r4, 1 */ // 0x805E2CC4
    FUN_805C5788(r4, r4); // bl 0x805C5788
    if (!=) goto 0x0x805e2cd8;
    /* li r31, 1 */ // 0x805E2CD4
    if (!=) goto 0x0x805e2cec;
    /* lis r3, 0 */ // 0x805E2CE0
    r3 = *(0 + r3); // lwz @ 0x805E2CE4
    FUN_808248E4(r3); // bl 0x808248E4
    /* lis r3, 0 */ // 0x805E2CEC
    /* lis r4, 0 */ // 0x805E2CF0
    r5 = *(0 + r3); // lwz @ 0x805E2CF4
    /* li r31, 0 */ // 0x805E2CF8
    r3 = *(0 + r4); // lwz @ 0x805E2CFC
    /* li r4, 0 */ // 0x805E2D00
    r0 = *(0xb70 + r5); // lwz @ 0x805E2D04
    if (<) goto 0x0x805e2d1c;
    if (>) goto 0x0x805e2d1c;
    /* li r4, 1 */ // 0x805E2D18
    if (==) goto 0x0x805e2d38;
    /* li r4, 1 */ // 0x805E2D24
    FUN_805C5788(r4, r4); // bl 0x805C5788
    if (!=) goto 0x0x805e2d38;
    /* li r31, 1 */ // 0x805E2D34
    if (!=) goto 0x0x805e2d4c;
    /* lis r3, 0 */ // 0x805E2D40
    r3 = *(0 + r3); // lwz @ 0x805E2D44
    FUN_808AB04C(r3); // bl 0x808AB04C
    /* lis r3, 0 */ // 0x805E2D4C
    r3 = *(0 + r3); // lwz @ 0x805E2D50
    r0 = *(0x2d + r3); // lbz @ 0x805E2D54
    if (!=) goto 0x0x805e2d6c;
    /* lis r3, 0 */ // 0x805E2D60
    r3 = *(0 + r3); // lwz @ 0x805E2D64
    FUN_8070C7A0(r3); // bl 0x8070C7A0
    /* lis r3, 0 */ // 0x805E2D6C
    r3 = *(0 + r3); // lwz @ 0x805E2D70
    r3 = *(4 + r3); // lwz @ 0x805E2D74
    FUN_805E35F8(r3); // bl 0x805E35F8
    r0 = *(0x14 + r1); // lwz @ 0x805E2D7C
    r31 = *(0xc + r1); // lwz @ 0x805E2D80
    return;
}