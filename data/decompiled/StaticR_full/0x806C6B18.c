/* Function at 0x806C6B18, size=932 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 15 function(s) */

int FUN_806C6B18(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stmw r26, 0x18(r1) */ // 0x806C6B24
    /* lis r26, 0 */ // 0x806C6B28
    r29 = r3;
    r30 = r4;
    r3 = *(0 + r26); // lwz @ 0x806C6B34
    r3 = *(0x98 + r3); // lwz @ 0x806C6B38
    FUN_8066236C(); // bl 0x8066236C
    r3 = *(0 + r26); // lwz @ 0x806C6B40
    /* lis r28, 1 */ // 0x806C6B44
    r4 = *(0x240 + r30); // lwz @ 0x806C6B48
    r0 = r28 + -0x7340; // 0x806C6B4C
    r3 = *(0x98 + r3); // lwz @ 0x806C6B50
    /* lis r27, 0 */ // 0x806C6B54
    r4 = r4 + -1; // 0x806C6B58
    *(0x4e8 + r3) = r4; // stb @ 0x806C6B5C
    /* clrlwi r31, r4, 0x18 */ // 0x806C6B60
    r0 = r31 * r0; // 0x806C6B64
    r3 = *(0 + r27); // lwz @ 0x806C6B68
    r4 = *(0x14 + r3); // lwz @ 0x806C6B6C
    r4 = r4 + r0; // 0x806C6B70
    r4 = *(8 + r4); // lwz @ 0x806C6B74
    /* addis r0, r4, -0x524b */ // 0x806C6B78
    if (!=) goto 0x0x806c6dd8;
    r4 = r31;
    FUN_805D383C(r4); // bl 0x805D383C
    r7 = *(0 + r27); // lwz @ 0x806C6B8C
    r6 = *(0x36 + r7); // lha @ 0x806C6B90
    if (<) goto 0x0x806c6bb4;
    /* clrlwi r3, r6, 0x18 */ // 0x806C6B9C
    r0 = r28 + -0x6c10; // 0x806C6BA0
    r0 = r0 * r3; // 0x806C6BA4
    r3 = r7 + r0; // 0x806C6BA8
    r4 = r3 + 0x38; // 0x806C6BAC
    /* b 0x806c6bb8 */ // 0x806C6BB0
    /* li r4, 0 */ // 0x806C6BB4
    /* lis r3, 0 */ // 0x806C6BB8
    /* addis r4, r4, 1 */ // 0x806C6BBC
    r5 = *(0 + r3); // lwz @ 0x806C6BC0
    r3 = *(-0x6c1a + r4); // lbz @ 0x806C6BC4
    r0 = *(0xf0 + r5); // lbz @ 0x806C6BC8
    if (!=) goto 0x0x806c6bf4;
    r3 = *(-0x6c19 + r4); // lbz @ 0x806C6BD4
    r0 = *(0xf1 + r5); // lbz @ 0x806C6BD8
    if (!=) goto 0x0x806c6bf4;
    r3 = *(-0x6c18 + r4); // lbz @ 0x806C6BE4
    r0 = *(0xf2 + r5); // lbz @ 0x806C6BE8
    if (==) goto 0x0x806c6c7c;
    if (<) goto 0x0x806c6c1c;
    r4 = *(0x36 + r7); // lha @ 0x806C6BFC
    /* lis r3, 1 */ // 0x806C6C00
    r0 = r3 + -0x6c10; // 0x806C6C04
    /* clrlwi r3, r4, 0x18 */ // 0x806C6C08
    r0 = r0 * r3; // 0x806C6C0C
    r3 = r7 + r0; // 0x806C6C10
    r3 = r3 + 0x38; // 0x806C6C14
    /* b 0x806c6c20 */ // 0x806C6C18
    /* li r3, 0 */ // 0x806C6C1C
    /* addis r4, r3, 1 */ // 0x806C6C20
    r0 = *(0xf0 + r5); // lbz @ 0x806C6C24
    *(-0x6c1a + r4) = r0; // stb @ 0x806C6C28
    /* lis r3, 0 */ // 0x806C6C2C
    r0 = *(0xf1 + r5); // lbz @ 0x806C6C30
    *(-0x6c19 + r4) = r0; // stb @ 0x806C6C34
    r0 = *(0xf2 + r5); // lbz @ 0x806C6C38
    *(-0x6c18 + r4) = r0; // stb @ 0x806C6C3C
    r0 = *(0xf3 + r5); // lbz @ 0x806C6C40
    *(-0x6c17 + r4) = r0; // stb @ 0x806C6C44
    r5 = *(0 + r3); // lwz @ 0x806C6C48
    r0 = *(0x36 + r5); // lha @ 0x806C6C4C
    if (<) goto 0x0x806c6c74;
    /* lis r3, 1 */ // 0x806C6C58
    /* clrlwi r4, r0, 0x18 */ // 0x806C6C5C
    r0 = r3 + -0x6c10; // 0x806C6C60
    r0 = r0 * r4; // 0x806C6C64
    r3 = r5 + r0; // 0x806C6C68
    r3 = r3 + 0x38; // 0x806C6C6C
    /* b 0x806c6c78 */ // 0x806C6C70
    /* li r3, 0 */ // 0x806C6C74
    FUN_805D83DC(r3, r3); // bl 0x805D83DC
    r4 = r31;
    r3 = r29 + 0x1270; // 0x806C6C80
    FUN_8066E0EC(r3, r4, r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x806C6C88
    r0 = r0 | r3; // 0x806C6C8C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806C6C90
    if (==) goto 0x0x806c6d14;
    FUN_808EDB94(); // bl 0x808EDB94
    if (!=) goto 0x0x806c6cb0;
    /* li r0, 0x5a */ // 0x806C6CA4
    *(0x1308 + r29) = r0; // stw @ 0x806C6CA8
    /* b 0x806c6cf0 */ // 0x806C6CAC
    /* lis r28, 0 */ // 0x806C6CB0
    r4 = r3;
    r3 = *(0 + r28); // lwz @ 0x806C6CB8
    /* li r5, 0 */ // 0x806C6CBC
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r26 = *(0 + r28); // lwz @ 0x806C6CC4
    r3 = r30;
    FUN_8064A384(r5, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x806C6CD0
    r3 = r26;
    /* li r5, 0xff */ // 0x806C6CD8
    /* stfd f0, 8(r1) */ // 0x806C6CDC
    r4 = *(0xc + r1); // lwz @ 0x806C6CE0
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    /* li r0, -1 */ // 0x806C6CE8
    *(0x1308 + r29) = r0; // stw @ 0x806C6CEC
    /* lis r3, 0 */ // 0x806C6CF0
    r5 = r31;
    r3 = *(0 + r3); // lwz @ 0x806C6CF8
    r4 = r29 + 0x1270; // 0x806C6CFC
    /* li r6, 0 */ // 0x806C6D00
    r3 = *(0x98 + r3); // lwz @ 0x806C6D04
    r3 = r3 + 0x238; // 0x806C6D08
    FUN_8066E6F0(r4, r6, r3); // bl 0x8066E6F0
    /* b 0x806c6e94 */ // 0x806C6D10
    /* lis r3, 0 */ // 0x806C6D14
    r3 = *(0 + r3); // lwz @ 0x806C6D18
    r3 = *(0 + r3); // lwz @ 0x806C6D1C
    r27 = *(0x150 + r3); // lwz @ 0x806C6D20
    if (!=) goto 0x0x806c6d34;
    /* li r27, 0 */ // 0x806C6D2C
    /* b 0x806c6d88 */ // 0x806C6D30
    /* lis r26, 0 */ // 0x806C6D34
    r26 = r26 + 0; // 0x806C6D38
    if (==) goto 0x0x806c6d84;
    r12 = *(0 + r27); // lwz @ 0x806C6D40
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806C6D48
    /* mtctr r12 */ // 0x806C6D4C
    /* bctrl  */ // 0x806C6D50
    /* b 0x806c6d6c */ // 0x806C6D54
    if (!=) goto 0x0x806c6d68;
    /* li r0, 1 */ // 0x806C6D60
    /* b 0x806c6d78 */ // 0x806C6D64
    r3 = *(0 + r3); // lwz @ 0x806C6D68
    if (!=) goto 0x0x806c6d58;
    /* li r0, 0 */ // 0x806C6D74
    if (==) goto 0x0x806c6d84;
    /* b 0x806c6d88 */ // 0x806C6D80
    /* li r27, 0 */ // 0x806C6D84
    r12 = *(0 + r27); // lwz @ 0x806C6D88
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806C6D90
    /* mtctr r12 */ // 0x806C6D94
    /* bctrl  */ // 0x806C6D98
    r3 = r27;
    /* li r4, 0x898 */ // 0x806C6DA0
    /* li r5, 0 */ // 0x806C6DA4
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    r3 = r27;
    /* li r4, 0x89d */ // 0x806C6DB0
    /* li r5, 0 */ // 0x806C6DB4
    FUN_8064D8BC(r5, r3, r4, r5); // bl 0x8064D8BC
    r0 = r29 + 0xa8; // 0x806C6DBC
    *(0x820 + r27) = r0; // stw @ 0x806C6DC0
    r3 = r29 + 0xbc; // 0x806C6DC4
    *(0x824 + r27) = r3; // stw @ 0x806C6DC8
    /* li r0, 0x52 */ // 0x806C6DCC
    *(0x1308 + r29) = r0; // stw @ 0x806C6DD0
    /* b 0x806c6e94 */ // 0x806C6DD4
    r3 = *(0 + r26); // lwz @ 0x806C6DD8
    r3 = *(0 + r3); // lwz @ 0x806C6DDC
    r27 = *(0x150 + r3); // lwz @ 0x806C6DE0
    if (!=) goto 0x0x806c6df4;
    /* li r27, 0 */ // 0x806C6DEC
    /* b 0x806c6e48 */ // 0x806C6DF0
    /* lis r26, 0 */ // 0x806C6DF4
    r26 = r26 + 0; // 0x806C6DF8
    if (==) goto 0x0x806c6e44;
    r12 = *(0 + r27); // lwz @ 0x806C6E00
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806C6E08
    /* mtctr r12 */ // 0x806C6E0C
    /* bctrl  */ // 0x806C6E10
    /* b 0x806c6e2c */ // 0x806C6E14
    if (!=) goto 0x0x806c6e28;
    /* li r0, 1 */ // 0x806C6E20
    /* b 0x806c6e38 */ // 0x806C6E24
    r3 = *(0 + r3); // lwz @ 0x806C6E28
    if (!=) goto 0x0x806c6e18;
    /* li r0, 0 */ // 0x806C6E34
    if (==) goto 0x0x806c6e44;
    /* b 0x806c6e48 */ // 0x806C6E40
    /* li r27, 0 */ // 0x806C6E44
    r12 = *(0 + r27); // lwz @ 0x806C6E48
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806C6E50
    /* mtctr r12 */ // 0x806C6E54
    /* bctrl  */ // 0x806C6E58
    r3 = r27;
    /* li r4, 0x836 */ // 0x806C6E60
    /* li r5, 0 */ // 0x806C6E64
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    r3 = r27;
    /* li r4, 0x835 */ // 0x806C6E70
    /* li r5, 0 */ // 0x806C6E74
    FUN_8064D8BC(r5, r3, r4, r5); // bl 0x8064D8BC
    r0 = r29 + 0x94; // 0x806C6E7C
    *(0x820 + r27) = r0; // stw @ 0x806C6E80
    r3 = r29 + 0xbc; // 0x806C6E84
    *(0x824 + r27) = r3; // stw @ 0x806C6E88
    /* li r0, 0x52 */ // 0x806C6E8C
    *(0x1308 + r29) = r0; // stw @ 0x806C6E90
    r3 = r30;
    FUN_8064A384(r3, r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 0 */ // 0x806C6EA0
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x34 + r1); // lwz @ 0x806C6EAC
    return;
}