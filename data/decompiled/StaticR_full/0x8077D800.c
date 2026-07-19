/* Function at 0x8077D800, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8077D800(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077D80C
    r31 = r3;
    r0 = *(0x166 + r3); // lbz @ 0x8077D814
    if (!=) goto 0x0x8077d84c;
    /* lis r4, 0 */ // 0x8077D820
    /* lfs f0, 0x158(r3) */ // 0x8077D824
    r4 = *(0 + r4); // lwz @ 0x8077D828
    r4 = *(0xc + r4); // lwz @ 0x8077D82C
    r4 = *(0 + r4); // lwz @ 0x8077D830
    /* lfs f1, 0xc(r4) */ // 0x8077D834
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077D838
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077D83C
    if (!=) goto 0x0x8077d84c;
    /* li r0, 1 */ // 0x8077D844
    *(0x166 + r3) = r0; // stb @ 0x8077D848
    r0 = *(0x166 + r3); // lbz @ 0x8077D84C
    /* li r4, 0 */ // 0x8077D850
    if (==) goto 0x0x8077d86c;
    r0 = *(0x167 + r3); // lbz @ 0x8077D85C
    if (!=) goto 0x0x8077d86c;
    /* li r4, 1 */ // 0x8077D868
    if (==) goto 0x0x8077d888;
    r0 = *(0xbc + r3); // lwz @ 0x8077D874
    if (!=) goto 0x0x8077d888;
    r0 = *(0x15e + r3); // lhz @ 0x8077D880
    *(0x15c + r3) = r0; // sth @ 0x8077D884
    if (==) goto 0x0x8077d8a4;
    r3 = r31;
    FUN_807558E8(r3); // bl 0x807558E8
    r3 = *(0xd8 + r31); // lwz @ 0x8077D898
    /* li r4, 0x272 */ // 0x8077D89C
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r0 = *(0x166 + r31); // lbz @ 0x8077D8A4
    if (==) goto 0x0x8077d8c8;
    r3 = r31;
    FUN_80755938(r3); // bl 0x80755938
    if (!=) goto 0x0x8077d8c8;
    /* li r0, 0 */ // 0x8077D8C0
    *(0x168 + r31) = r0; // sth @ 0x8077D8C4
    r0 = *(0x166 + r31); // lbz @ 0x8077D8C8
    *(0x167 + r31) = r0; // stb @ 0x8077D8CC
    r31 = *(0xc + r1); // lwz @ 0x8077D8D0
    r0 = *(0x14 + r1); // lwz @ 0x8077D8D4
    return;
}