/* Function at 0x80831A8C, size=540 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80831A8C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x80831A98
    *(0x1c + r1) = r31; // stw @ 0x80831A9C
    r31 = r3;
    if (!=) goto 0x0x80831b44;
    r7 = *(0x7c + r3); // lwz @ 0x80831AA8
    /* li r5, 0 */ // 0x80831AAC
    /* li r6, 0 */ // 0x80831AB0
    /* rlwinm. r0, r7, 0, 0x1a, 0x1a */ // 0x80831AB4
    if (==) goto 0x0x80831ae4;
    /* clrlwi. r0, r7, 0x1f */ // 0x80831ABC
    /* li r4, 0 */ // 0x80831AC0
    if (==) goto 0x0x80831ad4;
    r0 = *(0x78 + r3); // lwz @ 0x80831AC8
    /* rlwinm. r0, r0, 0, 2, 4 */ // 0x80831ACC
    if (==) goto 0x0x80831ad8;
    /* li r4, 1 */ // 0x80831AD4
    if (==) goto 0x0x80831ae4;
    /* li r6, 1 */ // 0x80831AE0
    if (==) goto 0x0x80831af8;
    /* andi. r0, r7, 0x12 */ // 0x80831AEC
    if (!=) goto 0x0x80831af8;
    /* li r5, 1 */ // 0x80831AF4
    if (==) goto 0x0x80831b44;
    r0 = *(0x78 + r3); // lwz @ 0x80831B00
    /* rlwinm. r0, r0, 0, 8, 0xa */ // 0x80831B04
    if (==) goto 0x0x80831b14;
    /* li r3, 0 */ // 0x80831B0C
    /* b 0x80831c94 */ // 0x80831B10
    r0 = *(0x78 + r3); // lwz @ 0x80831B14
    /* lis r5, 0 */ // 0x80831B18
    r0 = r0 | 0x40; // 0x80831B1C
    *(0x78 + r3) = r0; // stw @ 0x80831B20
    r4 = *(0 + r5); // lwzu @ 0x80831B24
    r0 = *(4 + r5); // lwz @ 0x80831B28
    *(0x16c + r3) = r0; // stw @ 0x80831B2C
    *(0x168 + r3) = r4; // stw @ 0x80831B30
    r0 = *(8 + r5); // lwz @ 0x80831B34
    *(0x170 + r3) = r0; // stw @ 0x80831B38
    /* li r3, 1 */ // 0x80831B3C
    /* b 0x80831c94 */ // 0x80831B40
    r0 = *(0x78 + r3); // lwz @ 0x80831B44
    r0 = r0 rlwinm 0; // rlwinm
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x80831b5c;
    /* li r3, 0 */ // 0x80831B54
    /* b 0x80831c94 */ // 0x80831B58
    r0 = *(4 + r3); // lwz @ 0x80831B5C
    /* lis r4, 0 */ // 0x80831B60
    r4 = r4 + 0; // 0x80831B64
    /* mulli r0, r0, 0x74 */ // 0x80831B68
    r4 = r4 + r0; // 0x80831B6C
    r0 = *(0x14 + r4); // lbz @ 0x80831B70
    if (!=) goto 0x0x80831ba8;
    /* lis r6, 0 */ // 0x80831B7C
    r5 = *(0 + r6); // lwzu @ 0x80831B80
    *(8 + r1) = r5; // stw @ 0x80831B84
    r4 = *(4 + r6); // lwz @ 0x80831B88
    r0 = *(8 + r6); // lwz @ 0x80831B8C
    *(0xc + r1) = r4; // stw @ 0x80831B90
    *(0x10 + r1) = r0; // stw @ 0x80831B94
    if (!=) goto 0x0x80831ba8;
    *(0x168 + r3) = r5; // stw @ 0x80831B9C
    *(0x16c + r3) = r4; // stw @ 0x80831BA0
    *(0x170 + r3) = r0; // stw @ 0x80831BA4
    r0 = *(0xb0 + r3); // lwz @ 0x80831BA8
    r5 = *(0x74 + r3); // lwz @ 0x80831BAC
    r4 = *(0x78 + r3); // lwz @ 0x80831BB4
    r0 = r5 | 2; // 0x80831BB8
    *(0x74 + r3) = r0; // stw @ 0x80831BBC
    r0 = r4 | 0x80; // 0x80831BC0
    *(0x78 + r3) = r0; // stw @ 0x80831BC4
    if (==) goto 0x0x80831be0;
    r3 = r31;
    FUN_80829F60(r3); // bl 0x80829F60
    r0 = *(0x7c + r31); // lwz @ 0x80831BD4
    r0 = r0 | 0x20; // 0x80831BD8
    *(0x7c + r31) = r0; // stw @ 0x80831BDC
    /* lis r3, 0 */ // 0x80831BE0
    /* lfs f1, 0x48(r31) */ // 0x80831BE4
    /* lfs f0, 0(r3) */ // 0x80831BE8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80831BEC
    /* mfcr r0 */ // 0x80831BF0
    /* srwi r0, r0, 0x1f */ // 0x80831BF4
    *(0x185 + r31) = r0; // stb @ 0x80831BF8
    /* or. r0, r0, r0 */ // 0x80831BFC
    if (==) goto 0x0x80831c10;
    r0 = *(0x78 + r31); // lwz @ 0x80831C04
    r0 = r0 | 0x400; // 0x80831C08
    *(0x78 + r31) = r0; // stw @ 0x80831C0C
    r0 = *(0x185 + r31); // lbz @ 0x80831C10
    /* li r3, 6 */ // 0x80831C14
    if (==) goto 0x0x80831c24;
    /* li r3, 0x1e */ // 0x80831C20
    *(0x188 + r31) = r3; // stw @ 0x80831C24
    /* lis r4, 0x101 */ // 0x80831C28
    r3 = *(0xa4 + r31); // lwz @ 0x80831C2C
    r4 = r4 + 0x101; // 0x80831C30
    r0 = *(0x20 + r3); // lwz @ 0x80831C34
    /* andc. r0, r4, r0 */ // 0x80831C38
    if (==) goto 0x0x80831c74;
    r0 = *(0x185 + r31); // lbz @ 0x80831C40
    if (!=) goto 0x0x80831c74;
    r0 = *(0x7c + r31); // lwz @ 0x80831C4C
    /* lis r3, 0 */ // 0x80831C50
    r3 = *(0 + r3); // lwz @ 0x80831C54
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80831C58
    r3 = *(0x74 + r3); // lwz @ 0x80831C5C
    if (==) goto 0x0x80831c6c;
    r4 = r31 + 0x8c; // 0x80831C64
    /* b 0x80831c70 */ // 0x80831C68
    r4 = *(0x98 + r31); // lwz @ 0x80831C6C
    FUN_8071D200(r4); // bl 0x8071D200
    r0 = *(0x185 + r31); // lbz @ 0x80831C74
    if (!=) goto 0x0x80831c90;
    r3 = r31;
    /* li r4, 0 */ // 0x80831C84
    /* li r5, 1 */ // 0x80831C88
    FUN_808289B4(r3, r4, r5); // bl 0x808289B4
    /* li r3, 1 */ // 0x80831C90
    r0 = *(0x24 + r1); // lwz @ 0x80831C94
    r31 = *(0x1c + r1); // lwz @ 0x80831C98
    return;
}