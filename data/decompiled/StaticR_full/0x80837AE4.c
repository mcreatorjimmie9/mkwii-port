/* Function at 0x80837AE4, size=444 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80837AE4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80837AEC
    *(0xc + r1) = r31; // stw @ 0x80837AF4
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80837AFC
    r0 = *(0 + r4); // lbz @ 0x80837B00
    /* cntlzw r0, r0 */ // 0x80837B04
    /* srwi r0, r0, 5 */ // 0x80837B08
    *(0x2a9 + r3) = r0; // stb @ 0x80837B0C
    FUN_80828F78(); // bl 0x80828F78
    r0 = *(0x2a9 + r31); // lbz @ 0x80837B14
    if (==) goto 0x0x80837b5c;
    r7 = *(0x335 + r31); // lbz @ 0x80837B20
    r3 = r31;
    r8 = *(0x2ec + r31); // lbz @ 0x80837B28
    /* li r4, 0x14 */ // 0x80837B2C
    /* li r5, 1 */ // 0x80837B30
    /* li r6, 0 */ // 0x80837B34
    /* li r9, 1 */ // 0x80837B38
    FUN_8083A734(r4, r5, r6, r9); // bl 0x8083A734
    /* li r4, 1 */ // 0x80837B40
    /* li r3, -1 */ // 0x80837B44
    /* li r0, 0 */ // 0x80837B48
    *(0x2c0 + r31) = r4; // sth @ 0x80837B4C
    *(0x2c4 + r31) = r3; // stw @ 0x80837B50
    *(0x2c8 + r31) = r0; // stw @ 0x80837B54
    /* b 0x80837b70 */ // 0x80837B58
    r5 = *(0x335 + r31); // lbz @ 0x80837B5C
    r3 = r31;
    /* li r4, -1 */ // 0x80837B64
    /* li r6, 1 */ // 0x80837B68
    FUN_8083BD30(r3, r4, r6); // bl 0x8083BD30
    r3 = r31;
    FUN_80835894(r3, r4, r6, r3); // bl 0x80835894
    r0 = *(0x7c + r31); // lwz @ 0x80837B78
    /* clrlwi. r0, r0, 0x1f */ // 0x80837B7C
    if (==) goto 0x0x80837c0c;
    r0 = *(0x6c + r31); // lbz @ 0x80837B84
    /* lis r3, 0 */ // 0x80837B88
    r3 = *(0 + r3); // lwz @ 0x80837B8C
    /* mulli r0, r0, 0x248 */ // 0x80837B90
    r3 = *(0x14 + r3); // lwz @ 0x80837B94
    r3 = r3 + r0; // 0x80837B98
    FUN_8061DAE0(r3); // bl 0x8061DAE0
    /* lfs f0, 0x20(r3) */ // 0x80837BA0
    r4 = r31 + 0x20; // 0x80837BA4
    /* lfs f1, 0x10(r3) */ // 0x80837BA8
    /* lfs f2, 0(r3) */ // 0x80837BAC
    /* stfs f2, 0x20(r31) */ // 0x80837BB0
    /* stfs f1, 0x24(r31) */ // 0x80837BB4
    /* stfs f0, 0x28(r31) */ // 0x80837BB8
    /* lfs f0, 0x24(r3) */ // 0x80837BBC
    /* lfs f1, 0x14(r3) */ // 0x80837BC0
    /* lfs f2, 4(r3) */ // 0x80837BC4
    /* stfs f2, 0x2c(r31) */ // 0x80837BC8
    /* stfs f1, 0x30(r31) */ // 0x80837BCC
    /* stfs f0, 0x34(r31) */ // 0x80837BD0
    /* lfs f0, 0x28(r3) */ // 0x80837BD4
    /* lfs f1, 0x18(r3) */ // 0x80837BD8
    /* lfs f2, 8(r3) */ // 0x80837BDC
    r3 = r31 + 0x10; // 0x80837BE0
    /* stfs f2, 0x38(r31) */ // 0x80837BE4
    /* stfs f1, 0x3c(r31) */ // 0x80837BE8
    /* stfs f0, 0x40(r31) */ // 0x80837BEC
    FUN_8083F414(r3); // bl 0x8083F414
    /* lfs f2, 0x50(r31) */ // 0x80837BF4
    /* lfs f1, 0x54(r31) */ // 0x80837BF8
    /* lfs f0, 0x58(r31) */ // 0x80837BFC
    /* stfs f2, 0x300(r31) */ // 0x80837C00
    /* stfs f1, 0x304(r31) */ // 0x80837C04
    /* stfs f0, 0x308(r31) */ // 0x80837C08
    r0 = *(0x2a9 + r31); // lbz @ 0x80837C0C
    if (!=) goto 0x0x80837c44;
    r3 = r31;
    FUN_808355A0(r3); // bl 0x808355A0
    r0 = *(0x280 + r31); // lwz @ 0x80837C20
    /* clrlwi r4, r3, 0x18 */ // 0x80837C24
    *(0x2ec + r31) = r3; // stb @ 0x80837C28
    if (!=) goto 0x0x80837c44;
    r3 = r31;
    FUN_80839E50(r3); // bl 0x80839E50
    /* li r0, 2 */ // 0x80837C3C
    *(0x2c4 + r31) = r0; // stw @ 0x80837C40
    r4 = *(0x9c + r31); // lwz @ 0x80837C44
    /* lis r3, 0 */ // 0x80837C48
    /* lis r30, 0 */ // 0x80837C4C
    /* lfs f1, 0(r3) */ // 0x80837C50
    r3 = *(0x28 + r4); // lwz @ 0x80837C54
    /* li r4, 0 */ // 0x80837C58
    /* lfs f2, 0(r30) */ // 0x80837C5C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x9c + r31); // lwz @ 0x80837C64
    /* li r4, 0 */ // 0x80837C68
    r3 = *(0x28 + r3); // lwz @ 0x80837C6C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80837C74
    /* lfs f1, 0(r30) */ // 0x80837C78
    r12 = *(0x1c + r12); // lwz @ 0x80837C7C
    /* mtctr r12 */ // 0x80837C80
    /* bctrl  */ // 0x80837C84
    r0 = *(0x14 + r1); // lwz @ 0x80837C88
    r31 = *(0xc + r1); // lwz @ 0x80837C8C
    r30 = *(8 + r1); // lwz @ 0x80837C90
    return;
}