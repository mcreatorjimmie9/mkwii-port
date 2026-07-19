/* Function at 0x8060D8F8, size=428 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8060D8F8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x80c */ // 0x8060D900
    /* li r6, 1 */ // 0x8060D904
    *(0x14 + r1) = r0; // stw @ 0x8060D908
    r0 = r4 + 0x100; // 0x8060D90C
    /* li r4, 1 */ // 0x8060D910
    *(0xc + r1) = r31; // stw @ 0x8060D914
    *(8 + r1) = r30; // stw @ 0x8060D918
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060D920
    r7 = *(4 + r5); // lwz @ 0x8060D924
    /* li r5, 1 */ // 0x8060D928
    r3 = *(0xc + r7); // lwz @ 0x8060D92C
    /* and. r0, r3, r0 */ // 0x8060D930
    if (!=) goto 0x0x8060d948;
    r0 = *(4 + r7); // lwz @ 0x8060D938
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D93C
    if (!=) goto 0x0x8060d948;
    /* li r6, 0 */ // 0x8060D944
    if (!=) goto 0x0x8060d960;
    r0 = *(0x14 + r7); // lwz @ 0x8060D950
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060D954
    if (!=) goto 0x0x8060d960;
    /* li r5, 0 */ // 0x8060D95C
    if (!=) goto 0x0x8060d978;
    r0 = *(8 + r7); // lwz @ 0x8060D968
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D96C
    if (!=) goto 0x0x8060d978;
    /* li r4, 0 */ // 0x8060D974
    if (!=) goto 0x0x8060da8c;
    /* lis r4, 0 */ // 0x8060D980
    r3 = r30;
    r31 = *(0 + r4); // lha @ 0x8060D988
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D990
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D998
    r3 = *(0x68 + r3); // lwz @ 0x8060D99C
    /* lwzx r3, r3, r0 */ // 0x8060D9A0
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x8060D9B4
    /* li r4, 0 */ // 0x8060D9B8
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D9BC
    if (==) goto 0x0x8060d9d0;
    r0 = *(0x10c + r30); // lha @ 0x8060D9C4
    if (<=) goto 0x0x8060d9f0;
    r0 = *(0x118 + r30); // lhz @ 0x8060D9D0
    /* lis r3, 0 */ // 0x8060D9D4
    *(0x10c + r30) = r31; // sth @ 0x8060D9D8
    /* li r4, 1 */ // 0x8060D9DC
    r0 = r0 | 1; // 0x8060D9E0
    *(0x118 + r30) = r0; // sth @ 0x8060D9E4
    /* lfs f0, 0(r3) */ // 0x8060D9E8
    /* stfs f0, 0x124(r30) */ // 0x8060D9EC
    if (==) goto 0x0x8060da68;
    r4 = *(0 + r30); // lwz @ 0x8060D9F8
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060DA00
    r0 = *(4 + r4); // lwz @ 0x8060DA04
    r0 = r0 | 0x10; // 0x8060DA08
    *(4 + r4) = r0; // stw @ 0x8060DA0C
    /* lfs f1, 0x124(r30) */ // 0x8060DA10
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x8060DA1C
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060DA2C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060DA34
    /* clrlwi r4, r31, 0x10 */ // 0x8060DA38
    r3 = *(0x68 + r3); // lwz @ 0x8060DA3C
    /* lwzx r3, r3, r0 */ // 0x8060DA40
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x8060DA58
    /* li r5, 0 */ // 0x8060DA5C
    /* li r6, 1 */ // 0x8060DA60
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* lis r3, 0 */ // 0x8060DA68
    /* lis r5, 0 */ // 0x8060DA6C
    r0 = *(0 + r3); // lha @ 0x8060DA70
    r3 = r30;
    /* lfs f1, 0(r5) */ // 0x8060DA78
    /* li r4, 3 */ // 0x8060DA7C
    *(0x23a + r30) = r0; // sth @ 0x8060DA80
    /* li r5, 1 */ // 0x8060DA84
    FUN_8061DC98(r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x8060DA8C
    r31 = *(0xc + r1); // lwz @ 0x8060DA90
    r30 = *(8 + r1); // lwz @ 0x8060DA94
    return;
}