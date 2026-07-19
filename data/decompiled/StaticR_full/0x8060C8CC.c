/* Function at 0x8060C8CC, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_8060C8CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8060C8E0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8060C8E8
    r29 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060C8F4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060C8FC
    r3 = *(0x68 + r3); // lwz @ 0x8060C900
    /* lwzx r3, r3, r0 */ // 0x8060C904
    FUN_80733560(r4); // bl 0x80733560
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    /* clrlwi r0, r30, 0x18 */ // 0x8060C918
    /* li r3, 1 */ // 0x8060C91C
    r5 = r3 << r0; // slw
    r3 = *(0x118 + r29); // lhz @ 0x8060C924
    /* clrlwi r0, r5, 0x10 */ // 0x8060C928
    /* slwi r4, r30, 1 */ // 0x8060C92C
    /* and. r0, r3, r0 */ // 0x8060C930
    /* li r6, 0 */ // 0x8060C934
    r3 = r29 + r4; // 0x8060C938
    if (==) goto 0x0x8060c94c;
    r0 = *(0x10c + r3); // lha @ 0x8060C940
    if (<=) goto 0x0x8060c978;
    *(0x10c + r3) = r31; // sth @ 0x8060C94C
    /* clrlwi r4, r5, 0x10 */ // 0x8060C950
    /* lis r3, 0 */ // 0x8060C954
    /* slwi r0, r30, 2 */ // 0x8060C958
    r5 = *(0x118 + r29); // lhz @ 0x8060C95C
    r3 = r3 + 0; // 0x8060C960
    /* li r6, 1 */ // 0x8060C964
    r4 = r5 | r4; // 0x8060C968
    *(0x118 + r29) = r4; // sth @ 0x8060C96C
    /* lfsx f0, r3, r0 */ // 0x8060C970
    /* stfs f0, 0x124(r29) */ // 0x8060C974
    if (==) goto 0x0x8060c9f0;
    r4 = *(0 + r29); // lwz @ 0x8060C980
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x8060C988
    r0 = *(4 + r4); // lwz @ 0x8060C98C
    r0 = r0 | 0x10; // 0x8060C990
    *(4 + r4) = r0; // stw @ 0x8060C994
    /* lfs f1, 0x124(r29) */ // 0x8060C998
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r29;
    /* li r4, 6 */ // 0x8060C9A4
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r29;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060C9B4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060C9BC
    /* clrlwi r4, r31, 0x10 */ // 0x8060C9C0
    r3 = *(0x68 + r3); // lwz @ 0x8060C9C4
    /* lwzx r3, r3, r0 */ // 0x8060C9C8
    FUN_807336DC(); // bl 0x807336DC
    r3 = r29;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r29;
    /* li r4, 4 */ // 0x8060C9E0
    /* li r5, 0 */ // 0x8060C9E4
    /* li r6, 1 */ // 0x8060C9E8
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r0 = *(0x24 + r1); // lwz @ 0x8060C9F0
    r31 = *(0x1c + r1); // lwz @ 0x8060C9F4
    r30 = *(0x18 + r1); // lwz @ 0x8060C9F8
    r29 = *(0x14 + r1); // lwz @ 0x8060C9FC
    return;
}