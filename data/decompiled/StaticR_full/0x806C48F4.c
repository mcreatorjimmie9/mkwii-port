/* Function at 0x806C48F4, size=484 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r27 */
/* Calls: 9 function(s) */

int FUN_806C48F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -256(r1) */
    /* saved r27 */
    /* stmw r27, 0xec(r1) */ // 0x806C4900
    r27 = r3;
    /* li r3, 0x6b */ // 0x806C4908
    FUN_808B6A8C(r3); // bl 0x808B6A8C
    /* li r28, 0 */ // 0x806C4910
    *(0x90c + r3) = r28; // stw @ 0x806C4914
    *(0x848 + r3) = r28; // stw @ 0x806C4918
    /* li r3, 0x6c */ // 0x806C491C
    FUN_808BB994(r3); // bl 0x808BB994
    *(0x6f0 + r3) = r28; // stw @ 0x806C4924
    /* li r3, 0x6d */ // 0x806C4928
    FUN_808C2778(r3, r3); // bl 0x808C2778
    *(0x6c4 + r3) = r28; // stw @ 0x806C4930
    /* lis r4, 0 */ // 0x806C4934
    r4 = *(0 + r4); // lwz @ 0x806C4938
    r4 = *(0 + r4); // lwz @ 0x806C493C
    r0 = *(0 + r4); // lwz @ 0x806C4940
    if (<) goto 0x0x806c4954;
    if (<=) goto 0x0x806c4960;
    if (==) goto 0x0x806c496c;
    /* b 0x806c4974 */ // 0x806C495C
    /* li r0, 0x31 */ // 0x806C4960
    *(0x6c8 + r3) = r0; // stw @ 0x806C4964
    /* b 0x806c4974 */ // 0x806C4968
    /* li r0, 0x30 */ // 0x806C496C
    *(0x6c8 + r3) = r0; // stw @ 0x806C4970
    r4 = r27 + 0x70; // 0x806C4978
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    /* lis r28, 0 */ // 0x806C4980
    r3 = *(0 + r28); // lwz @ 0x806C4984
    FUN_805BD9AC(r3, r4); // bl 0x805BD9AC
    r3 = *(0 + r28); // lwz @ 0x806C498C
    /* li r31, 2 */ // 0x806C4990
    /* li r29, 5 */ // 0x806C4994
    /* li r5, 0 */ // 0x806C4998
    *(0x175c + r3) = r31; // stw @ 0x806C499C
    /* li r0, 3 */ // 0x806C49A0
    r4 = r27 + 0x70; // 0x806C49A4
    r6 = *(0 + r28); // lwz @ 0x806C49A8
    r3 = *(0x1780 + r6); // lwz @ 0x806C49AC
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r3; // stw @ 0x806C49B4
    r6 = *(0 + r28); // lwz @ 0x806C49B8
    r3 = *(0x1780 + r6); // lwz @ 0x806C49BC
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r3; // stw @ 0x806C49C4
    r3 = *(0 + r28); // lwz @ 0x806C49C8
    *(0x1760 + r3) = r29; // stw @ 0x806C49CC
    r3 = *(0 + r28); // lwz @ 0x806C49D0
    *(0x1764 + r3) = r5; // stw @ 0x806C49D4
    r3 = *(0 + r28); // lwz @ 0x806C49D8
    *(0xd18 + r3) = r0; // stw @ 0x806C49DC
    r3 = *(0 + r28); // lwz @ 0x806C49E0
    FUN_805C1484(); // bl 0x805C1484
    /* lis r30, 0 */ // 0x806C49E8
    r3 = *(0 + r30); // lwz @ 0x806C49F0
    /* li r4, 1 */ // 0x806C49F4
    r3 = *(0x98 + r3); // lwz @ 0x806C49F8
    r3 = r3 + 0x188; // 0x806C49FC
    FUN_8066DDCC(r5, r4, r3); // bl 0x8066DDCC
    /* mulli r4, r31, 0xf0 */ // 0x806C4A04
    r0 = *(0 + r28); // lwz @ 0x806C4A08
    /* li r31, 7 */ // 0x806C4A0C
    r3 = r0 + r4; // 0x806C4A10
    *(0xc28 + r3) = r29; // stw @ 0x806C4A14
    r0 = *(0 + r28); // lwz @ 0x806C4A18
    r3 = r0 + r4; // 0x806C4A1C
    *(0xd18 + r3) = r29; // stw @ 0x806C4A20
    r0 = *(0 + r28); // lwz @ 0x806C4A24
    r3 = r0 + r4; // 0x806C4A28
    *(0xe08 + r3) = r29; // stw @ 0x806C4A2C
    r0 = *(0 + r28); // lwz @ 0x806C4A30
    r3 = r0 + r4; // 0x806C4A34
    *(0xef8 + r3) = r29; // stw @ 0x806C4A38
    r0 = *(0 + r28); // lwz @ 0x806C4A3C
    r3 = r0 + r4; // 0x806C4A40
    *(0xfe8 + r3) = r29; // stw @ 0x806C4A44
    /* mulli r4, r31, 0xf0 */ // 0x806C4A48
    r0 = *(0 + r28); // lwz @ 0x806C4A4C
    r3 = r0 + r4; // 0x806C4A50
    *(0xc28 + r3) = r29; // stw @ 0x806C4A54
    r0 = *(0 + r28); // lwz @ 0x806C4A58
    r3 = r0 + r4; // 0x806C4A5C
    *(0xd18 + r3) = r29; // stw @ 0x806C4A60
    r0 = *(0 + r28); // lwz @ 0x806C4A64
    r3 = r0 + r4; // 0x806C4A68
    *(0xe08 + r3) = r29; // stw @ 0x806C4A6C
    r0 = *(0 + r28); // lwz @ 0x806C4A70
    r3 = r0 + r4; // 0x806C4A74
    *(0xef8 + r3) = r29; // stw @ 0x806C4A78
    r0 = *(0 + r28); // lwz @ 0x806C4A7C
    r3 = r0 + r4; // 0x806C4A80
    *(0xfe8 + r3) = r29; // stw @ 0x806C4A84
    r3 = *(0 + r28); // lwz @ 0x806C4A88
    r0 = *(0xc0 + r1); // lwz @ 0x806C4A8C
    *(0x1758 + r3) = r0; // stw @ 0x806C4A90
    r3 = *(0 + r30); // lwz @ 0x806C4A94
    r3 = *(0x98 + r3); // lwz @ 0x806C4A98
    FUN_80661C9C(); // bl 0x80661C9C
    r12 = *(0 + r27); // lwz @ 0x806C4AA0
    r3 = r27;
    /* li r4, 0x6b */ // 0x806C4AA8
    /* li r5, 0 */ // 0x806C4AAC
    r12 = *(0x24 + r12); // lwz @ 0x806C4AB0
    /* mtctr r12 */ // 0x806C4AB4
    /* bctrl  */ // 0x806C4AB8
    /* lis r4, 0 */ // 0x806C4ABC
    *(0x68 + r27) = r31; // stw @ 0x806C4AC0
    /* li r5, 0xc */ // 0x806C4AC8
    r4 = r4 + 0; // 0x806C4ACC
    /* li r6, 5 */ // 0x806C4AD0
    FUN_805E3430(r3, r5, r4, r6); // bl 0x805E3430
}