/* Function at 0x8072D7BC, size=992 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8072D7BC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8072D7C8
    r28 = r3;
    r0 = *(0x96 + r3); // lbz @ 0x8072D7D0
    if (==) goto 0x0x8072d7e8;
    /* li r0, 0x2b2 */ // 0x8072D7DC
    *(0x4c + r3) = r0; // stw @ 0x8072D7E0
    *(0x50 + r3) = r0; // stw @ 0x8072D7E4
    r5 = *(0x118 + r3); // lwz @ 0x8072D7E8
    /* li r4, 0x46 */ // 0x8072D7EC
    r0 = *(0x4c + r3); // lwz @ 0x8072D7F0
    r5 = *(0 + r5); // lwz @ 0x8072D7F4
    /* xori r0, r0, 0x46 */ // 0x8072D7F8
    /* cntlzw r0, r0 */ // 0x8072D7FC
    r5 = *(4 + r5); // lwz @ 0x8072D800
    r0 = r4 << r0; // slw
    /* rlwinm. r30, r0, 1, 0x1f, 0x1f */ // 0x8072D808
    r0 = *(0xc + r5); // lwz @ 0x8072D80C
    r31 = r0 rlwinm 0x19; // rlwinm
    if (==) goto 0x0x8072d820;
    /* li r0, 0x21c */ // 0x8072D818
    *(0x50 + r3) = r0; // stw @ 0x8072D81C
    /* lis r4, 0x2aab */ // 0x8072D820
    r5 = *(0x12e + r3); // lbz @ 0x8072D824
    r0 = r4 + -0x5555; // 0x8072D828
    r7 = *(0x4c + r3); // lwz @ 0x8072D82C
    /* mulhw r4, r0, r5 */ // 0x8072D830
    /* li r6, 0 */ // 0x8072D834
    /* srwi r0, r4, 0x1f */ // 0x8072D838
    r0 = r4 + r0; // 0x8072D83C
    /* mulli r0, r0, 6 */ // 0x8072D840
    /* subf r4, r0, r5 */ // 0x8072D844
    r0 = r4 + 1; // 0x8072D848
    if (<) goto 0x0x8072d860;
    if (>=) goto 0x0x8072d860;
    /* li r6, 1 */ // 0x8072D85C
    if (==) goto 0x0x8072d8cc;
    r0 = *(4 + r3); // lbz @ 0x8072D868
    if (!=) goto 0x0x8072d8cc;
    r29 = *(0x210 + r3); // lwz @ 0x8072D874
    if (==) goto 0x0x8072d8c0;
    r12 = *(0 + r29); // lwz @ 0x8072D880
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x8072D888
    /* mtctr r12 */ // 0x8072D88C
    /* bctrl  */ // 0x8072D890
    r12 = *(0 + r29); // lwz @ 0x8072D894
    r3 = r29;
    r4 = r28 + 0x6d0; // 0x8072D89C
    r12 = *(0x74 + r12); // lwz @ 0x8072D8A0
    /* mtctr r12 */ // 0x8072D8A4
    /* bctrl  */ // 0x8072D8A8
    r12 = *(0 + r29); // lwz @ 0x8072D8AC
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x8072D8B4
    /* mtctr r12 */ // 0x8072D8B8
    /* bctrl  */ // 0x8072D8BC
    /* li r0, 1 */ // 0x8072D8C0
    *(9 + r28) = r0; // stb @ 0x8072D8C4
    /* b 0x8072d928 */ // 0x8072D8C8
    r29 = *(0x210 + r3); // lwz @ 0x8072D8CC
    if (==) goto 0x0x8072d928;
    r3 = r29 + 0x74; // 0x8072D8D8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072d8f0;
    /* li r3, 0 */ // 0x8072D8E8
    /* b 0x8072d8f4 */ // 0x8072D8EC
    r3 = *(0xc + r3); // lwz @ 0x8072D8F0
    /* li r0, 0 */ // 0x8072D8F8
    if (==) goto 0x0x8072d908;
    if (!=) goto 0x0x8072d90c;
    /* li r0, 1 */ // 0x8072D908
    if (==) goto 0x0x8072d928;
    r12 = *(0 + r29); // lwz @ 0x8072D914
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x8072D91C
    /* mtctr r12 */ // 0x8072D920
    /* bctrl  */ // 0x8072D924
    r0 = *(0x50 + r28); // lwz @ 0x8072D928
    /* li r3, 0x46 */ // 0x8072D92C
    /* xori r0, r0, 0x46 */ // 0x8072D930
    /* cntlzw r0, r0 */ // 0x8072D934
    r0 = r3 << r0; // slw
    /* rlwinm. r29, r0, 1, 0x1f, 0x1f */ // 0x8072D93C
    if (==) goto 0x0x8072d94c;
    /* li r0, 0x2b2 */ // 0x8072D944
    *(0x4c + r28) = r0; // stw @ 0x8072D948
    /* lis r3, 0x2aab */ // 0x8072D94C
    r4 = *(0x12e + r28); // lbz @ 0x8072D950
    r0 = r3 + -0x5555; // 0x8072D954
    r6 = *(0x50 + r28); // lwz @ 0x8072D958
    /* mulhw r3, r0, r4 */ // 0x8072D95C
    /* li r5, 0 */ // 0x8072D960
    /* srwi r0, r3, 0x1f */ // 0x8072D964
    r0 = r3 + r0; // 0x8072D968
    /* mulli r0, r0, 6 */ // 0x8072D96C
    /* subf r3, r0, r4 */ // 0x8072D970
    r0 = r3 + 1; // 0x8072D974
    if (<) goto 0x0x8072d98c;
    if (>=) goto 0x0x8072d98c;
    /* li r5, 1 */ // 0x8072D988
    if (==) goto 0x0x8072d9f8;
    r0 = *(4 + r28); // lbz @ 0x8072D994
    if (!=) goto 0x0x8072d9f8;
    r27 = *(0x214 + r28); // lwz @ 0x8072D9A0
    if (==) goto 0x0x8072d9ec;
    r12 = *(0 + r27); // lwz @ 0x8072D9AC
    r3 = r27;
    r12 = *(0xc + r12); // lwz @ 0x8072D9B4
    /* mtctr r12 */ // 0x8072D9B8
    /* bctrl  */ // 0x8072D9BC
    r12 = *(0 + r27); // lwz @ 0x8072D9C0
    r3 = r27;
    r4 = r28 + 0x6d0; // 0x8072D9C8
    r12 = *(0x74 + r12); // lwz @ 0x8072D9CC
    /* mtctr r12 */ // 0x8072D9D0
    /* bctrl  */ // 0x8072D9D4
    r12 = *(0 + r27); // lwz @ 0x8072D9D8
    r3 = r27;
    r12 = *(0x80 + r12); // lwz @ 0x8072D9E0
    /* mtctr r12 */ // 0x8072D9E4
    /* bctrl  */ // 0x8072D9E8
    /* li r0, 1 */ // 0x8072D9EC
    *(9 + r28) = r0; // stb @ 0x8072D9F0
    /* b 0x8072daec */ // 0x8072D9F4
    r0 = *(0x129 + r28); // lbz @ 0x8072D9F8
    if (==) goto 0x0x8072da90;
    r27 = *(0x214 + r28); // lwz @ 0x8072DA04
    if (==) goto 0x0x8072daec;
    r3 = r27 + 0x74; // 0x8072DA10
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072da28;
    /* li r3, 0 */ // 0x8072DA20
    /* b 0x8072da2c */ // 0x8072DA24
    r3 = *(0xc + r3); // lwz @ 0x8072DA28
    /* li r0, 0 */ // 0x8072DA30
    if (==) goto 0x0x8072da40;
    if (!=) goto 0x0x8072da44;
    /* li r0, 1 */ // 0x8072DA40
    if (==) goto 0x0x8072daec;
    r12 = *(0 + r27); // lwz @ 0x8072DA4C
    r3 = r27;
    r12 = *(0x14 + r12); // lwz @ 0x8072DA54
    /* mtctr r12 */ // 0x8072DA58
    /* bctrl  */ // 0x8072DA5C
    r12 = *(0 + r27); // lwz @ 0x8072DA60
    r3 = r27;
    r4 = r28 + 0x6d0; // 0x8072DA68
    r12 = *(0x74 + r12); // lwz @ 0x8072DA6C
    /* mtctr r12 */ // 0x8072DA70
    /* bctrl  */ // 0x8072DA74
    r12 = *(0 + r27); // lwz @ 0x8072DA78
    r3 = r27;
    r12 = *(0x80 + r12); // lwz @ 0x8072DA80
    /* mtctr r12 */ // 0x8072DA84
    /* bctrl  */ // 0x8072DA88
    /* b 0x8072daec */ // 0x8072DA8C
    r27 = *(0x214 + r28); // lwz @ 0x8072DA90
    if (==) goto 0x0x8072daec;
    r3 = r27 + 0x74; // 0x8072DA9C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072dab4;
    /* li r3, 0 */ // 0x8072DAAC
    /* b 0x8072dab8 */ // 0x8072DAB0
    r3 = *(0xc + r3); // lwz @ 0x8072DAB4
    /* li r0, 0 */ // 0x8072DABC
    if (==) goto 0x0x8072dacc;
    if (!=) goto 0x0x8072dad0;
    /* li r0, 1 */ // 0x8072DACC
    if (==) goto 0x0x8072daec;
    r12 = *(0 + r27); // lwz @ 0x8072DAD8
    r3 = r27;
    r12 = *(0x18 + r12); // lwz @ 0x8072DAE0
    /* mtctr r12 */ // 0x8072DAE4
    /* bctrl  */ // 0x8072DAE8
    /* li r4, 0 */ // 0x8072DAF0
    /* li r0, 0 */ // 0x8072DAF4
    if (==) goto 0x0x8072db08;
    if (!=) goto 0x0x8072db08;
    /* li r0, 1 */ // 0x8072DB04
    if (==) goto 0x0x8072db20;
    r0 = *(0x50 + r28); // lwz @ 0x8072DB10
    if (!=) goto 0x0x8072db20;
    /* li r4, 1 */ // 0x8072DB1C
    r3 = *(0x12e + r28); // lbz @ 0x8072DB20
    /* li r5, 0 */ // 0x8072DB24
    r6 = *(0x4c + r28); // lwz @ 0x8072DB28
    r0 = r3 + 0x47; // 0x8072DB2C
    if (<) goto 0x0x8072db44;
    if (>=) goto 0x0x8072db44;
    /* li r5, 1 */ // 0x8072DB40
    if (==) goto 0x0x8072db6c;
    if (==) goto 0x0x8072db6c;
    r0 = *(4 + r28); // lbz @ 0x8072DB54
    if (!=) goto 0x0x8072db6c;
    r3 = r28;
    FUN_807392E4(r3); // bl 0x807392E4
    /* b 0x8072db74 */ // 0x8072DB68
    r3 = r28;
    FUN_807394E4(r3, r3); // bl 0x807394E4
    r3 = *(0x4c + r28); // lwz @ 0x8072DB74
    r0 = r3 + 1; // 0x8072DB78
    *(0x4c + r28) = r0; // stw @ 0x8072DB7C
    if (<=) goto 0x0x8072db90;
    /* li r0, 0x2b2 */ // 0x8072DB88
    *(0x4c + r28) = r0; // stw @ 0x8072DB8C
    /* li r4, 0 */ // 0x8072DB94
    /* li r0, 0 */ // 0x8072DB98
}