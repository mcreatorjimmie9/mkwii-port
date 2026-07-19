/* Function at 0x807B9B78, size=1304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_807B9B78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807B9B90
    *(0x10 + r1) = r28; // stw @ 0x807B9B94
    r5 = *(4 + r3); // lwz @ 0x807B9B98
    r0 = *(8 + r3); // lwz @ 0x807B9B9C
    r5 = *(0 + r5); // lwz @ 0x807B9BA0
    r5 = *(0x10 + r5); // lwz @ 0x807B9BA8
    r31 = *(0x14c + r5); // lwz @ 0x807B9BAC
    if (==) goto 0x0x807b9bd0;
    if (==) goto 0x0x807b9c88;
    if (==) goto 0x0x807b9d88;
    if (==) goto 0x0x807b9e84;
    /* b 0x807ba070 */ // 0x807B9BCC
    r3 = r31;
    FUN_807BDB48(r3); // bl 0x807BDB48
    r28 = r3;
    if (==) goto 0x0x807ba070;
    r12 = *(0 + r30); // lwz @ 0x807B9BE4
    r3 = r30;
    r4 = r28;
    r12 = *(0x14 + r12); // lwz @ 0x807B9BF0
    /* mtctr r12 */ // 0x807B9BF4
    /* bctrl  */ // 0x807B9BF8
    r4 = *(0xc + r30); // lwz @ 0x807B9BFC
    if (<=) goto 0x0x807b9c7c;
    r12 = *(0 + r30); // lwz @ 0x807B9C08
    r3 = r30;
    r4 = r28;
    r12 = *(0x18 + r12); // lwz @ 0x807B9C14
    /* mtctr r12 */ // 0x807B9C18
    /* bctrl  */ // 0x807B9C1C
    *(0xc + r30) = r3; // stw @ 0x807B9C20
    /* lis r3, 0 */ // 0x807B9C24
    /* li r4, 0x64 */ // 0x807B9C28
    r3 = *(0 + r3); // lwz @ 0x807B9C2C
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    /* lis r4, 0 */ // 0x807B9C34
    r0 = *(0 + r4); // lha @ 0x807B9C38
    if (>=) goto 0x0x807b9c70;
    /* lis r3, 0 */ // 0x807B9C44
    r3 = r3 + 0; // 0x807B9C48
    /* lbzx r0, r3, r28 */ // 0x807B9C4C
    if (==) goto 0x0x807b9c64;
    /* li r0, 1 */ // 0x807B9C58
    *(8 + r30) = r0; // stw @ 0x807B9C5C
    /* b 0x807ba070 */ // 0x807B9C60
    /* li r0, 2 */ // 0x807B9C64
    *(8 + r30) = r0; // stw @ 0x807B9C68
    /* b 0x807ba070 */ // 0x807B9C6C
    /* li r0, 3 */ // 0x807B9C70
    *(8 + r30) = r0; // stw @ 0x807B9C74
    /* b 0x807ba070 */ // 0x807B9C78
    r0 = r4 + 1; // 0x807B9C7C
    *(0xc + r30) = r0; // stw @ 0x807B9C80
    /* b 0x807ba070 */ // 0x807B9C84
    r29 = *(0xc + r4); // lwz @ 0x807B9C88
    if (==) goto 0x0x807b9ca4;
    r0 = *(0x24 + r4); // lwz @ 0x807B9C94
    if (!=) goto 0x0x807b9ca4;
    /* b 0x807b9d38 */ // 0x807B9CA0
    r29 = *(0x10 + r4); // lwz @ 0x807B9CA4
    if (==) goto 0x0x807b9cc0;
    r0 = *(0x28 + r4); // lwz @ 0x807B9CB0
    if (!=) goto 0x0x807b9cc0;
    /* b 0x807b9d38 */ // 0x807B9CBC
    r4 = r4 + 8; // 0x807B9CC0
    r29 = *(0xc + r4); // lwz @ 0x807B9CC4
    if (==) goto 0x0x807b9ce0;
    r0 = *(0x24 + r4); // lwz @ 0x807B9CD0
    if (!=) goto 0x0x807b9ce0;
    /* b 0x807b9d38 */ // 0x807B9CDC
    r29 = *(0x10 + r4); // lwz @ 0x807B9CE0
    if (==) goto 0x0x807b9cfc;
    r0 = *(0x28 + r4); // lwz @ 0x807B9CEC
    if (!=) goto 0x0x807b9cfc;
    /* b 0x807b9d38 */ // 0x807B9CF8
    r29 = *(0x14 + r4); // lwz @ 0x807B9CFC
    if (==) goto 0x0x807b9d18;
    r0 = *(0x2c + r4); // lwz @ 0x807B9D08
    if (!=) goto 0x0x807b9d18;
    /* b 0x807b9d38 */ // 0x807B9D14
    r29 = *(0x18 + r4); // lwz @ 0x807B9D18
    if (==) goto 0x0x807b9d34;
    r0 = *(0x30 + r4); // lwz @ 0x807B9D24
    if (!=) goto 0x0x807b9d34;
    /* b 0x807b9d38 */ // 0x807B9D30
    /* li r29, 0 */ // 0x807B9D34
    r4 = *(0xc + r3); // lwz @ 0x807B9D38
    r0 = r4 + -1; // 0x807B9D3C
    *(0xc + r3) = r0; // stw @ 0x807B9D40
    r3 = r31;
    FUN_807BDBCC(r3); // bl 0x807BDBCC
    if (==) goto 0x0x807ba070;
    if (!=) goto 0x0x807b9d68;
    r0 = *(0xc + r30); // lwz @ 0x807B9D5C
    if (>=) goto 0x0x807ba070;
    /* li r0, 1 */ // 0x807B9D68
    *(0x1a0 + r31) = r0; // stb @ 0x807B9D6C
    /* li r3, 2 */ // 0x807B9D70
    *(0x1a4 + r31) = r3; // stw @ 0x807B9D74
    /* li r0, 0 */ // 0x807B9D78
    *(0xc + r30) = r0; // stw @ 0x807B9D7C
    *(8 + r30) = r0; // stw @ 0x807B9D80
    /* b 0x807ba070 */ // 0x807B9D84
    r29 = *(0xc + r4); // lwz @ 0x807B9D88
    if (==) goto 0x0x807b9da4;
    r0 = *(0x24 + r4); // lwz @ 0x807B9D94
    if (!=) goto 0x0x807b9da4;
    /* b 0x807b9e38 */ // 0x807B9DA0
    r29 = *(0x10 + r4); // lwz @ 0x807B9DA4
    if (==) goto 0x0x807b9dc0;
    r0 = *(0x28 + r4); // lwz @ 0x807B9DB0
    if (!=) goto 0x0x807b9dc0;
    /* b 0x807b9e38 */ // 0x807B9DBC
    r4 = r4 + 8; // 0x807B9DC0
    r29 = *(0xc + r4); // lwz @ 0x807B9DC4
    if (==) goto 0x0x807b9de0;
    r0 = *(0x24 + r4); // lwz @ 0x807B9DD0
    if (!=) goto 0x0x807b9de0;
    /* b 0x807b9e38 */ // 0x807B9DDC
    r29 = *(0x10 + r4); // lwz @ 0x807B9DE0
    if (==) goto 0x0x807b9dfc;
    r0 = *(0x28 + r4); // lwz @ 0x807B9DEC
    if (!=) goto 0x0x807b9dfc;
    /* b 0x807b9e38 */ // 0x807B9DF8
    r29 = *(0x14 + r4); // lwz @ 0x807B9DFC
    if (==) goto 0x0x807b9e18;
    r0 = *(0x2c + r4); // lwz @ 0x807B9E08
    if (!=) goto 0x0x807b9e18;
    /* b 0x807b9e38 */ // 0x807B9E14
    r29 = *(0x18 + r4); // lwz @ 0x807B9E18
    if (==) goto 0x0x807b9e34;
    r0 = *(0x30 + r4); // lwz @ 0x807B9E24
    if (!=) goto 0x0x807b9e34;
    /* b 0x807b9e38 */ // 0x807B9E30
    /* li r29, 0 */ // 0x807B9E34
    r4 = *(0xc + r3); // lwz @ 0x807B9E38
    r0 = r4 + -1; // 0x807B9E3C
    *(0xc + r3) = r0; // stw @ 0x807B9E40
    r3 = r31;
    FUN_807BDBCC(r3); // bl 0x807BDBCC
    if (==) goto 0x0x807ba070;
    if (!=) goto 0x0x807b9e68;
    r0 = *(0xc + r30); // lwz @ 0x807B9E5C
    if (>=) goto 0x0x807ba070;
    /* li r3, 1 */ // 0x807B9E68
    *(0x1a0 + r31) = r3; // stb @ 0x807B9E6C
    /* li r0, 0 */ // 0x807B9E70
    *(0x1a4 + r31) = r3; // stw @ 0x807B9E74
    *(0xc + r30) = r0; // stw @ 0x807B9E78
    *(8 + r30) = r0; // stw @ 0x807B9E7C
    /* b 0x807ba070 */ // 0x807B9E80
    r29 = *(0xc + r4); // lwz @ 0x807B9E84
    if (==) goto 0x0x807b9ea0;
    r0 = *(0x24 + r4); // lwz @ 0x807B9E90
    if (!=) goto 0x0x807b9ea0;
    /* b 0x807b9f34 */ // 0x807B9E9C
    r29 = *(0x10 + r4); // lwz @ 0x807B9EA0
    if (==) goto 0x0x807b9ebc;
    r0 = *(0x28 + r4); // lwz @ 0x807B9EAC
    if (!=) goto 0x0x807b9ebc;
    /* b 0x807b9f34 */ // 0x807B9EB8
    r29 = *(0x14 + r4); // lwz @ 0x807B9EBC
    r5 = r4 + 8; // 0x807B9EC0
    if (==) goto 0x0x807b9edc;
    r0 = *(0x24 + r5); // lwz @ 0x807B9ECC
    if (!=) goto 0x0x807b9edc;
    /* b 0x807b9f34 */ // 0x807B9ED8
    r29 = *(0x10 + r5); // lwz @ 0x807B9EDC
    if (==) goto 0x0x807b9ef8;
    r0 = *(0x28 + r5); // lwz @ 0x807B9EE8
    if (!=) goto 0x0x807b9ef8;
    /* b 0x807b9f34 */ // 0x807B9EF4
    r29 = *(0x14 + r5); // lwz @ 0x807B9EF8
    if (==) goto 0x0x807b9f14;
    r0 = *(0x2c + r5); // lwz @ 0x807B9F04
    if (!=) goto 0x0x807b9f14;
    /* b 0x807b9f34 */ // 0x807B9F10
    r29 = *(0x18 + r5); // lwz @ 0x807B9F14
    if (==) goto 0x0x807b9f30;
    r0 = *(0x30 + r5); // lwz @ 0x807B9F20
    if (!=) goto 0x0x807b9f30;
    /* b 0x807b9f34 */ // 0x807B9F2C
    /* li r29, 0 */ // 0x807B9F30
    r28 = *(0xc + r4); // lwz @ 0x807B9F34
    if (==) goto 0x0x807b9f50;
    r0 = *(0x24 + r4); // lwz @ 0x807B9F40
    if (!=) goto 0x0x807b9f50;
    /* b 0x807b9fe4 */ // 0x807B9F4C
    r28 = *(0x10 + r4); // lwz @ 0x807B9F50
    if (==) goto 0x0x807b9f6c;
    r0 = *(0x28 + r4); // lwz @ 0x807B9F5C
    if (!=) goto 0x0x807b9f6c;
    /* b 0x807b9fe4 */ // 0x807B9F68
    r4 = r4 + 8; // 0x807B9F6C
    r28 = *(0xc + r4); // lwz @ 0x807B9F70
    if (==) goto 0x0x807b9f8c;
    r0 = *(0x24 + r4); // lwz @ 0x807B9F7C
    if (!=) goto 0x0x807b9f8c;
    /* b 0x807b9fe4 */ // 0x807B9F88
    r28 = *(0x10 + r4); // lwz @ 0x807B9F8C
    if (==) goto 0x0x807b9fa8;
    r0 = *(0x28 + r4); // lwz @ 0x807B9F98
    if (!=) goto 0x0x807b9fa8;
    /* b 0x807b9fe4 */ // 0x807B9FA4
    r28 = *(0x14 + r4); // lwz @ 0x807B9FA8
    if (==) goto 0x0x807b9fc4;
    r0 = *(0x2c + r4); // lwz @ 0x807B9FB4
    if (!=) goto 0x0x807b9fc4;
    /* b 0x807b9fe4 */ // 0x807B9FC0
    r28 = *(0x18 + r4); // lwz @ 0x807B9FC4
    if (==) goto 0x0x807b9fe0;
    r0 = *(0x30 + r4); // lwz @ 0x807B9FD0
    if (!=) goto 0x0x807b9fe0;
    /* b 0x807b9fe4 */ // 0x807B9FDC
    /* li r28, 0 */ // 0x807B9FE0
    r4 = *(0xc + r3); // lwz @ 0x807B9FE4
    r0 = r4 + -1; // 0x807B9FE8
    *(0xc + r3) = r0; // stw @ 0x807B9FEC
    r3 = r31;
    FUN_807BDBCC(r3); // bl 0x807BDBCC
    if (==) goto 0x0x807ba070;
    if (==) goto 0x0x807ba024;
    /* li r3, 1 */ // 0x807BA008
    *(0x1a0 + r31) = r3; // stb @ 0x807BA00C
    /* li r0, 0 */ // 0x807BA010
    *(0x1a4 + r31) = r3; // stw @ 0x807BA014
    *(0xc + r30) = r0; // stw @ 0x807BA018
    *(8 + r30) = r0; // stw @ 0x807BA01C
    /* b 0x807ba070 */ // 0x807BA020
    if (==) goto 0x0x807ba04c;
    /* li r0, 1 */ // 0x807BA02C
    *(0x1a0 + r31) = r0; // stb @ 0x807BA030
    /* li r3, 2 */ // 0x807BA034
    *(0x1a4 + r31) = r3; // stw @ 0x807BA038
    /* li r0, 0 */ // 0x807BA03C
    *(0xc + r30) = r0; // stw @ 0x807BA040
    *(8 + r30) = r0; // stw @ 0x807BA044
    /* b 0x807ba070 */ // 0x807BA048
    r0 = *(0xc + r30); // lwz @ 0x807BA04C
    if (>=) goto 0x0x807ba070;
    /* li r3, 1 */ // 0x807BA058
    *(0x1a0 + r31) = r3; // stb @ 0x807BA05C
    /* li r0, 0 */ // 0x807BA060
    *(0x1a4 + r31) = r3; // stw @ 0x807BA064
    *(0xc + r30) = r0; // stw @ 0x807BA068
    *(8 + r30) = r0; // stw @ 0x807BA06C
    r0 = *(0x24 + r1); // lwz @ 0x807BA070
    r31 = *(0x1c + r1); // lwz @ 0x807BA074
    r30 = *(0x18 + r1); // lwz @ 0x807BA078
    r29 = *(0x14 + r1); // lwz @ 0x807BA07C
    r28 = *(0x10 + r1); // lwz @ 0x807BA080
    return;
}