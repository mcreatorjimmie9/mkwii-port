/* Function at 0x80828B30, size=424 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80828B30(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80828B38
    *(0xc + r1) = r31; // stw @ 0x80828B40
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80828B48
    r0 = *(4 + r3); // lwz @ 0x80828B4C
    if (!=) goto 0x0x80828b6c;
    /* lis r4, 0 */ // 0x80828B58
    r0 = *(0 + r4); // lbz @ 0x80828B5C
    if (==) goto 0x0x80828b6c;
    /* li r5, 1 */ // 0x80828B68
    if (==) goto 0x0x80828b98;
    r4 = *(0x9c + r3); // lwz @ 0x80828B74
    /* li r0, 0 */ // 0x80828B78
    *(0xac + r3) = r0; // stw @ 0x80828B7C
    if (==) goto 0x0x80828cc0;
    r3 = r4;
    /* li r4, 6 */ // 0x80828B8C
    FUN_805ED640(r3, r4); // bl 0x805ED640
    /* b 0x80828cc0 */ // 0x80828B94
    r0 = *(4 + r3); // lwz @ 0x80828B98
    /* lis r3, 0 */ // 0x80828B9C
    r3 = r3 + 0; // 0x80828BA0
    /* mulli r0, r0, 0x74 */ // 0x80828BA4
    r3 = r3 + r0; // 0x80828BA8
    r0 = *(0x70 + r3); // lbz @ 0x80828BAC
    if (==) goto 0x0x80828cc0;
    /* lis r3, 0 */ // 0x80828BB8
    r3 = *(0 + r3); // lwz @ 0x80828BBC
    r30 = *(0x34 + r3); // lwz @ 0x80828BC0
    /* addic. r0, r30, 0xc */ // 0x80828BC4
    if (!=) goto 0x0x80828be8;
    /* lis r3, 0 */ // 0x80828BCC
    /* lis r5, 0 */ // 0x80828BD0
    r3 = r3 + 0; // 0x80828BD4
    /* li r4, 0xcf */ // 0x80828BD8
    r5 = r5 + 0; // 0x80828BDC
    /* crclr cr1eq */ // 0x80828BE0
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r0 = *(0x14 + r30); // lhz @ 0x80828BE8
    if (<=) goto 0x0x80828c68;
    FUN_805F5350(); // bl 0x805F5350
    r0 = *(0x9c + r31); // lwz @ 0x80828BF8
    r4 = r3;
    *(0xac + r31) = r3; // stw @ 0x80828C00
    if (==) goto 0x0x80828c14;
    r3 = r0;
    FUN_805EEFD4(r4, r3); // bl 0x805EEFD4
    r0 = *(0x78 + r31); // lwz @ 0x80828C14
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80828C1C
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80828C20
    if (==) goto 0x0x80828c54;
    r0 = *(0x6c + r31); // lbz @ 0x80828C28
    /* lis r3, 0 */ // 0x80828C2C
    r3 = *(0 + r3); // lwz @ 0x80828C30
    /* mulli r0, r0, 0x248 */ // 0x80828C34
    r3 = *(0x14 + r3); // lwz @ 0x80828C38
    r3 = r3 + r0; // 0x80828C3C
    FUN_8061ECB0(r3); // bl 0x8061ECB0
    r4 = r3;
    r3 = *(0xac + r31); // lwz @ 0x80828C48
    FUN_805F051C(r4); // bl 0x805F051C
    /* b 0x80828cc0 */ // 0x80828C50
    r3 = *(0xac + r31); // lwz @ 0x80828C54
    /* li r4, 0 */ // 0x80828C58
    /* li r5, 1 */ // 0x80828C5C
    FUN_805F0368(r4, r5); // bl 0x805F0368
    /* b 0x80828cc0 */ // 0x80828C64
    r0 = *(0x9c + r31); // lwz @ 0x80828C68
    /* li r3, 0 */ // 0x80828C6C
    *(0xac + r31) = r3; // stw @ 0x80828C70
    if (==) goto 0x0x80828cc0;
    r0 = *(0x78 + r31); // lwz @ 0x80828C7C
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80828C84
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80828C88
    if (==) goto 0x0x80828cb4;
    r0 = *(0x6c + r31); // lbz @ 0x80828C90
    /* lis r3, 0 */ // 0x80828C94
    r3 = *(0 + r3); // lwz @ 0x80828C98
    /* mulli r0, r0, 0x248 */ // 0x80828C9C
    r3 = *(0x14 + r3); // lwz @ 0x80828CA0
    r3 = r3 + r0; // 0x80828CA4
    FUN_8061ECB0(r3); // bl 0x8061ECB0
    r4 = *(0x21 + r3); // lbz @ 0x80828CAC
    /* b 0x80828cb8 */ // 0x80828CB0
    /* li r4, 0 */ // 0x80828CB4
    r3 = *(0x9c + r31); // lwz @ 0x80828CB8
    FUN_805ED640(r4); // bl 0x805ED640
    r0 = *(0x14 + r1); // lwz @ 0x80828CC0
    r31 = *(0xc + r1); // lwz @ 0x80828CC4
    r30 = *(8 + r1); // lwz @ 0x80828CC8
    return;
}