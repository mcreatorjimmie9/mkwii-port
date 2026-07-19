/* Function at 0x808C583C, size=856 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808C583C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0x7e2 */ // 0x808C5848
    *(0x1c + r1) = r31; // stw @ 0x808C584C
    /* lis r31, 0 */ // 0x808C5850
    *(0x18 + r1) = r30; // stw @ 0x808C5854
    r30 = r3;
    *(0x3e4 + r3) = r0; // stw @ 0x808C585C
    r3 = *(0 + r31); // lwz @ 0x808C5860
    FUN_805BD9AC(); // bl 0x805BD9AC
    r6 = *(0 + r31); // lwz @ 0x808C5868
    /* lis r4, 0 */ // 0x808C586C
    /* li r0, 1 */ // 0x808C5870
    r3 = r30;
    r5 = *(0x1780 + r6); // lwz @ 0x808C5878
    r5 = r5 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r5; // stw @ 0x808C5880
    r4 = *(0 + r4); // lwz @ 0x808C5884
    r4 = *(0x98 + r4); // lwz @ 0x808C5888
    *(0x124 + r4) = r0; // stw @ 0x808C588C
    FUN_808B3318(); // bl 0x808B3318
    r4 = *(0x48 + r30); // lwz @ 0x808C5894
    /* li r0, 7 */ // 0x808C5898
    /* lis r6, 0 */ // 0x808C589C
    r3 = r30;
    r7 = *(0 + r4); // lwz @ 0x808C58A4
    /* li r5, 1 */ // 0x808C58AC
    *(0x240 + r7) = r0; // stw @ 0x808C58B0
    r0 = *(0 + r6); // lwz @ 0x808C58B4
    *(8 + r1) = r0; // stw @ 0x808C58B8
    FUN_808B4A2C(r4, r5); // bl 0x808B4A2C
    r7 = *(0 + r31); // lwz @ 0x808C58C0
    /* li r0, 2 */ // 0x808C58C4
    /* li r6, 0 */ // 0x808C58C8
    /* li r4, 5 */ // 0x808C58CC
    r5 = *(0x1780 + r7); // lwz @ 0x808C58D0
    /* li r3, -1 */ // 0x808C58D4
    r5 = r5 rlwinm 0; // rlwinm
    *(0x1780 + r7) = r5; // stw @ 0x808C58DC
    /* mtctr r0 */ // 0x808C58E0
    /* clrlwi r5, r6, 0x18 */ // 0x808C58E4
    r7 = *(0 + r31); // lwz @ 0x808C58E8
    /* mulli r5, r5, 0xf0 */ // 0x808C58EC
    r6 = r6 + 6; // 0x808C58F0
    r7 = r7 + r5; // 0x808C58F4
    *(0xc28 + r7) = r4; // stw @ 0x808C58F8
    r7 = *(0 + r31); // lwz @ 0x808C58FC
    r7 = r7 + r5; // 0x808C5900
    *(0xc24 + r7) = r3; // stw @ 0x808C5904
    r7 = *(0 + r31); // lwz @ 0x808C5908
    r7 = r7 + r5; // 0x808C590C
    *(0xc20 + r7) = r3; // stw @ 0x808C5910
    r7 = *(0 + r31); // lwz @ 0x808C5914
    r7 = r7 + r5; // 0x808C5918
    *(0xce4 + r7) = r0; // stw @ 0x808C591C
    r7 = *(0 + r31); // lwz @ 0x808C5920
    r7 = r7 + r5; // 0x808C5924
    *(0xd18 + r7) = r4; // stw @ 0x808C5928
    r7 = *(0 + r31); // lwz @ 0x808C592C
    r7 = r7 + r5; // 0x808C5930
    *(0xd14 + r7) = r3; // stw @ 0x808C5934
    r7 = *(0 + r31); // lwz @ 0x808C5938
    r7 = r7 + r5; // 0x808C593C
    *(0xd10 + r7) = r3; // stw @ 0x808C5940
    r7 = *(0 + r31); // lwz @ 0x808C5944
    r7 = r7 + r5; // 0x808C5948
    *(0xdd4 + r7) = r0; // stw @ 0x808C594C
    r7 = *(0 + r31); // lwz @ 0x808C5950
    r7 = r7 + r5; // 0x808C5954
    *(0xe08 + r7) = r4; // stw @ 0x808C5958
    r7 = *(0 + r31); // lwz @ 0x808C595C
    r7 = r7 + r5; // 0x808C5960
    *(0xe04 + r7) = r3; // stw @ 0x808C5964
    r7 = *(0 + r31); // lwz @ 0x808C5968
    r7 = r7 + r5; // 0x808C596C
    *(0xe00 + r7) = r3; // stw @ 0x808C5970
    r7 = *(0 + r31); // lwz @ 0x808C5974
    r7 = r7 + r5; // 0x808C5978
    *(0xec4 + r7) = r0; // stw @ 0x808C597C
    r7 = *(0 + r31); // lwz @ 0x808C5980
    r7 = r7 + r5; // 0x808C5984
    *(0xef8 + r7) = r4; // stw @ 0x808C5988
    r7 = *(0 + r31); // lwz @ 0x808C598C
    r7 = r7 + r5; // 0x808C5990
    *(0xef4 + r7) = r3; // stw @ 0x808C5994
    r7 = *(0 + r31); // lwz @ 0x808C5998
    r7 = r7 + r5; // 0x808C599C
    *(0xef0 + r7) = r3; // stw @ 0x808C59A0
    r7 = *(0 + r31); // lwz @ 0x808C59A4
    r7 = r7 + r5; // 0x808C59A8
    *(0xfb4 + r7) = r0; // stw @ 0x808C59AC
    r7 = *(0 + r31); // lwz @ 0x808C59B0
    r7 = r7 + r5; // 0x808C59B4
    *(0xfe8 + r7) = r4; // stw @ 0x808C59B8
    r7 = *(0 + r31); // lwz @ 0x808C59BC
    r7 = r7 + r5; // 0x808C59C0
    *(0xfe4 + r7) = r3; // stw @ 0x808C59C4
    r7 = *(0 + r31); // lwz @ 0x808C59C8
    r7 = r7 + r5; // 0x808C59CC
    *(0xfe0 + r7) = r3; // stw @ 0x808C59D0
    r7 = *(0 + r31); // lwz @ 0x808C59D4
    r7 = r7 + r5; // 0x808C59D8
    *(0x10a4 + r7) = r0; // stw @ 0x808C59DC
    r7 = *(0 + r31); // lwz @ 0x808C59E0
    r7 = r7 + r5; // 0x808C59E4
    *(0x10d8 + r7) = r4; // stw @ 0x808C59E8
    r7 = *(0 + r31); // lwz @ 0x808C59EC
    r7 = r7 + r5; // 0x808C59F0
    *(0x10d4 + r7) = r3; // stw @ 0x808C59F4
    r7 = *(0 + r31); // lwz @ 0x808C59F8
    r7 = r7 + r5; // 0x808C59FC
    *(0x10d0 + r7) = r3; // stw @ 0x808C5A00
    r7 = *(0 + r31); // lwz @ 0x808C5A04
    r5 = r7 + r5; // 0x808C5A08
    *(0x1194 + r5) = r0; // stw @ 0x808C5A0C
    if (counter-- != 0) goto 0x0x808c58e4;
    /* lis r31, 0 */ // 0x808C5A14
    /* lis r4, 0 */ // 0x808C5A18
    r5 = *(0 + r31); // lwz @ 0x808C5A1C
    r4 = r4 + 0; // 0x808C5A20
    r3 = *(0xcb4 + r30); // lwz @ 0x808C5A24
    r4 = r4 + 0x8c; // 0x808C5A28
    r6 = *(0x98 + r5); // lwz @ 0x808C5A2C
    /* li r7, 2 */ // 0x808C5A30
    r5 = *(0x44 + r30); // lwz @ 0x808C5A34
    r6 = *(0x4e8 + r6); // lbz @ 0x808C5A38
    FUN_806A105C(r4, r7); // bl 0x806A105C
    r3 = *(0 + r31); // lwz @ 0x808C5A40
    /* li r0, 0 */ // 0x808C5A44
    r3 = *(0x98 + r3); // lwz @ 0x808C5A48
    *(0x60 + r3) = r0; // stw @ 0x808C5A4C
    r3 = *(0 + r31); // lwz @ 0x808C5A50
    r3 = *(0x98 + r3); // lwz @ 0x808C5A54
    FUN_80661570(); // bl 0x80661570
    r3 = *(0 + r31); // lwz @ 0x808C5A5C
    /* li r0, 2 */ // 0x808C5A60
    r3 = *(0x98 + r3); // lwz @ 0x808C5A64
    *(0x74 + r3) = r0; // stw @ 0x808C5A68
    r0 = *(0x10 + r30); // lwz @ 0x808C5A6C
    if (!=) goto 0x0x808c5a94;
    r12 = *(0 + r30); // lwz @ 0x808C5A78
    r3 = r30;
    /* li r4, 0x55 */ // 0x808C5A80
    /* li r5, 0 */ // 0x808C5A84
    r12 = *(0x24 + r12); // lwz @ 0x808C5A88
    /* mtctr r12 */ // 0x808C5A8C
    /* bctrl  */ // 0x808C5A90
    /* lis r3, 0 */ // 0x808C5A94
    r4 = *(0 + r3); // lwz @ 0x808C5A98
    r3 = *(0x98 + r4); // lwz @ 0x808C5A9C
    r0 = *(0x128 + r3); // lwz @ 0x808C5AA0
    if (<) goto 0x0x808c5ad8;
    if (>=) goto 0x0x808c5ad8;
    r12 = *(0 + r30); // lwz @ 0x808C5AB4
    /* slwi r0, r0, 2 */ // 0x808C5AB8
    r4 = r30 + r0; // 0x808C5ABC
    r3 = r30;
    r12 = *(0x78 + r12); // lwz @ 0x808C5AC4
    r4 = *(0xc94 + r4); // lwz @ 0x808C5AC8
    /* mtctr r12 */ // 0x808C5ACC
    /* bctrl  */ // 0x808C5AD0
    /* b 0x808c5b7c */ // 0x808C5AD4
    r0 = *(0x10 + r4); // lwz @ 0x808C5AD8
    if (<) goto 0x0x808c5aec;
    if (<=) goto 0x0x808c5b10;
    if (<) goto 0x0x808c5afc;
    if (<=) goto 0x0x808c5b2c;
    if (<) goto 0x0x808c5b64;
    if (<=) goto 0x0x808c5b48;
    /* b 0x808c5b64 */ // 0x808C5B0C
    r12 = *(0 + r30); // lwz @ 0x808C5B10
    r3 = r30;
    r4 = *(0xca4 + r30); // lwz @ 0x808C5B18
    r12 = *(0x78 + r12); // lwz @ 0x808C5B1C
    /* mtctr r12 */ // 0x808C5B20
    /* bctrl  */ // 0x808C5B24
    /* b 0x808c5b7c */ // 0x808C5B28
    r12 = *(0 + r30); // lwz @ 0x808C5B2C
    r3 = r30;
    r4 = *(0xca8 + r30); // lwz @ 0x808C5B34
    r12 = *(0x78 + r12); // lwz @ 0x808C5B38
    /* mtctr r12 */ // 0x808C5B3C
    /* bctrl  */ // 0x808C5B40
    /* b 0x808c5b7c */ // 0x808C5B44
    r12 = *(0 + r30); // lwz @ 0x808C5B48
    r3 = r30;
    r4 = *(0xcac + r30); // lwz @ 0x808C5B50
    r12 = *(0x78 + r12); // lwz @ 0x808C5B54
    /* mtctr r12 */ // 0x808C5B58
    /* bctrl  */ // 0x808C5B5C
    /* b 0x808c5b7c */ // 0x808C5B60
    r12 = *(0 + r30); // lwz @ 0x808C5B64
    r3 = r30;
    r4 = *(0xc94 + r30); // lwz @ 0x808C5B6C
    r12 = *(0x78 + r12); // lwz @ 0x808C5B70
    /* mtctr r12 */ // 0x808C5B74
    /* bctrl  */ // 0x808C5B78
    r0 = *(0x24 + r1); // lwz @ 0x808C5B7C
    r31 = *(0x1c + r1); // lwz @ 0x808C5B80
    r30 = *(0x18 + r1); // lwz @ 0x808C5B84
    return;
}