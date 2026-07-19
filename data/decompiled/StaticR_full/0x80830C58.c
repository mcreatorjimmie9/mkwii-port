/* Function at 0x80830C58, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80830C58(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80830C68
    r31 = r31 + 0; // 0x80830C6C
    *(0x18 + r1) = r30; // stw @ 0x80830C70
    r30 = r3;
    FUN_80828A90(); // bl 0x80828A90
    /* lfs f0, 0x170(r31) */ // 0x80830C7C
    /* li r7, 0 */ // 0x80830C80
    /* li r6, -1 */ // 0x80830C84
    /* li r5, 0x12c */ // 0x80830C88
    /* li r0, 0xc */ // 0x80830C8C
    *(0x1a8 + r30) = r7; // sth @ 0x80830C90
    /* lis r3, 0 */ // 0x80830C94
    r4 = *(0x6c + r30); // lbz @ 0x80830C98
    *(0x1ac + r30) = r6; // stw @ 0x80830C9C
    *(0x1b0 + r30) = r7; // stw @ 0x80830CA0
    *(0x1dc + r30) = r5; // stw @ 0x80830CA4
    *(0x1e0 + r30) = r7; // stw @ 0x80830CA8
    *(0x1e4 + r30) = r0; // stb @ 0x80830CAC
    /* stfs f0, 0x1e8(r30) */ // 0x80830CB0
    *(0x1ec + r30) = r7; // stw @ 0x80830CB4
    *(0x1d8 + r30) = r7; // stb @ 0x80830CB8
    *(0x1c4 + r30) = r7; // stw @ 0x80830CBC
    r0 = *(0 + r3); // lbz @ 0x80830CC0
    if (==) goto 0x0x80830d00;
    /* lis r3, 0 */ // 0x80830CCC
    /* mulli r0, r4, 0xf0 */ // 0x80830CD0
    r3 = *(0 + r3); // lwz @ 0x80830CD4
    r3 = r3 + r0; // 0x80830CD8
    r3 = *(0xf4 + r3); // lwz @ 0x80830CDC
    if (!=) goto 0x0x80830cf0;
    /* li r0, 2 */ // 0x80830CE8
    *(0x1c4 + r30) = r0; // stw @ 0x80830CEC
    if (!=) goto 0x0x80830d00;
    /* li r0, 1 */ // 0x80830CF8
    *(0x1c4 + r30) = r0; // stw @ 0x80830CFC
    /* lfs f1, 0(r31) */ // 0x80830D00
    r3 = *(0x1c4 + r30); // lwz @ 0x80830D04
    /* stfs f1, 0x1c8(r30) */ // 0x80830D08
    /* neg r0, r3 */ // 0x80830D0C
    r4 = *(0x9c + r30); // lwz @ 0x80830D10
    r0 = r0 | r3; // 0x80830D14
    /* lfs f2, 4(r31) */ // 0x80830D18
    r3 = *(0x28 + r4); // lwz @ 0x80830D1C
    /* srwi r4, r0, 0x1f */ // 0x80830D20
    FUN_805E70EC(); // bl 0x805E70EC
    r5 = *(0x1c4 + r30); // lwz @ 0x80830D28
    /* lis r0, 0x4330 */ // 0x80830D2C
    r3 = *(0x9c + r30); // lwz @ 0x80830D30
    /* li r4, 2 */ // 0x80830D34
    /* slwi r5, r5, 1 */ // 0x80830D38
    *(8 + r1) = r0; // stw @ 0x80830D3C
    /* xoris r0, r5, 0x8000 */ // 0x80830D40
    /* lfd f1, 0x168(r31) */ // 0x80830D44
    *(0xc + r1) = r0; // stw @ 0x80830D48
    r3 = *(0x28 + r3); // lwz @ 0x80830D4C
    /* lfd f0, 8(r1) */ // 0x80830D50
    /* lfs f2, 0(r31) */ // 0x80830D54
    /* fsubs f1, f0, f1 */ // 0x80830D58
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(0x9c + r30); // lwz @ 0x80830D60
    /* li r4, 3 */ // 0x80830D64
    /* lfs f1, 0(r31) */ // 0x80830D68
    r3 = *(0x28 + r3); // lwz @ 0x80830D6C
    /* lfs f2, 4(r31) */ // 0x80830D70
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x80830D78
    r31 = *(0x1c + r1); // lwz @ 0x80830D7C
    r30 = *(0x18 + r1); // lwz @ 0x80830D80
    return;
}