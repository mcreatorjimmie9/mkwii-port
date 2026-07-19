/* Function at 0x80794C30, size=276 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80794C30(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    r3 = r3 + 0x94; // 0x80794C44
    *(8 + r1) = r30; // stw @ 0x80794C48
    FUN_8078FE10(r3); // bl 0x8078FE10
    r3 = *(0x98 + r31); // lwz @ 0x80794C50
    *(0xdc + r31) = r3; // stw @ 0x80794C54
    FUN_8061E2F8(r3); // bl 0x8061E2F8
    *(0x9c + r31) = r3; // sth @ 0x80794C5C
    r3 = *(0xdc + r31); // lwz @ 0x80794C60
    r4 = *(0 + r3); // lwz @ 0x80794C64
    r4 = *(4 + r4); // lwz @ 0x80794C68
    r0 = *(0x14 + r4); // lwz @ 0x80794C6C
    r0 = r0 rlwinm 0x1a; // rlwinm
    *(0xe1 + r31) = r0; // stb @ 0x80794C74
    FUN_8061DB68(); // bl 0x8061DB68
    *(0xe2 + r31) = r3; // stb @ 0x80794C7C
    r3 = *(0xdc + r31); // lwz @ 0x80794C80
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r30, 0 */ // 0x80794C88
    r0 = r3;
    r3 = *(0 + r30); // lwz @ 0x80794C90
    /* clrlwi r4, r0, 0x18 */ // 0x80794C94
    FUN_805C1470(); // bl 0x805C1470
    *(0xb3 + r31) = r3; // stb @ 0x80794C9C
    r3 = *(0xdc + r31); // lwz @ 0x80794CA0
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r3, r3, 0x18 */ // 0x80794CA8
    r0 = *(0xb3 + r31); // lbz @ 0x80794CAC
    /* mulli r3, r3, 0xf0 */ // 0x80794CB0
    r4 = *(0 + r30); // lwz @ 0x80794CB4
    /* extsb. r0, r0 */ // 0x80794CB8
    r3 = r4 + r3; // 0x80794CBC
    r0 = *(0xf4 + r3); // lwz @ 0x80794CC0
    *(0xe4 + r31) = r0; // stw @ 0x80794CC4
    if (<) goto 0x0x80794cf4;
    r3 = *(0xdc + r31); // lwz @ 0x80794CCC
    FUN_8061DECC(); // bl 0x8061DECC
    /* clrlwi. r0, r3, 0x18 */ // 0x80794CD4
    *(0xe0 + r31) = r3; // stb @ 0x80794CD8
    if (==) goto 0x0x80794cfc;
    /* lis r3, 0 */ // 0x80794CE0
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x80794CE8
    FUN_8079FD50(r3, r4); // bl 0x8079FD50
    /* b 0x80794cfc */ // 0x80794CF0
    /* li r0, 0 */ // 0x80794CF4
    *(0xe0 + r31) = r0; // stb @ 0x80794CF8
    r0 = *(0xe0 + r31); // lbz @ 0x80794CFC
    if (==) goto 0x0x80794d14;
    r0 = *(0x60 + r31); // lwz @ 0x80794D08
    r0 = r0 | 0x300; // 0x80794D0C
    *(0x60 + r31) = r0; // stw @ 0x80794D10
    r3 = *(0xb8 + r31); // lwz @ 0x80794D14
    r4 = r31;
    FUN_80789F98(r4); // bl 0x80789F98
    /* li r0, 0 */ // 0x80794D20
    *(0xcc + r31) = r0; // sth @ 0x80794D24
    *(0xce + r31) = r0; // sth @ 0x80794D28
    r31 = *(0xc + r1); // lwz @ 0x80794D2C
    r30 = *(8 + r1); // lwz @ 0x80794D30
    r0 = *(0x14 + r1); // lwz @ 0x80794D34
    return;
}