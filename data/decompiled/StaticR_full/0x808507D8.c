/* Function at 0x808507D8, size=436 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_808507D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x808507E4
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808507F0
    *(0x14 + r1) = r29; // stw @ 0x808507F4
    /* li r29, 1 */ // 0x808507F8
    r4 = *(0x2c8 + r3); // lwz @ 0x808507FC
    r5 = *(0x2d0 + r3); // lwz @ 0x80850800
    *(0x2cc + r3) = r4; // stw @ 0x80850804
    r4 = *(0 + r3); // lwz @ 0x80850808
    *(0x2d4 + r3) = r5; // stw @ 0x8085080C
    *(0x4e + r3) = r0; // stb @ 0x80850810
    *(0x4d + r3) = r0; // stb @ 0x80850814
    r4 = *(4 + r4); // lwz @ 0x80850818
    r4 = *(4 + r4); // lwz @ 0x8085081C
    r0 = r4 rlwinm 0; // rlwinm
    /* rlwimi. r0, r4, 0, 0x1c, 0x1c */ // 0x80850824
    if (!=) goto 0x0x80850870;
    /* li r30, 0 */ // 0x8085082C
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80850834
    /* cntlzw r0, r0 */ // 0x80850838
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x8085083C
    if (!=) goto 0x0x80850864;
    r3 = r31;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060C834(r3); // bl 0x8060C834
    /* neg r0, r3 */ // 0x80850850
    r0 = r0 | r3; // 0x80850854
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80850858
    if (==) goto 0x0x80850864;
    /* li r30, 1 */ // 0x80850860
    if (!=) goto 0x0x80850870;
    /* li r29, 0 */ // 0x8085086C
    if (!=) goto 0x0x808508ac;
    r3 = *(0 + r31); // lwz @ 0x80850878
    /* li r4, 0 */ // 0x8085087C
    r3 = *(4 + r3); // lwz @ 0x80850880
    r0 = *(8 + r3); // lwz @ 0x80850884
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80850888
    if (==) goto 0x0x808508a4;
    r3 = *(4 + r3); // lwz @ 0x80850890
    r0 = r3 rlwinm 0; // rlwinm
    /* rlwimi. r0, r3, 0, 0x12, 0x12 */ // 0x80850898
    if (==) goto 0x0x808508a4;
    /* li r4, 1 */ // 0x808508A0
    if (==) goto 0x0x80850914;
    r3 = r31;
    FUN_8061DFF8(r4, r3); // bl 0x8061DFF8
    r0 = *(0xcc + r3); // lwz @ 0x808508B4
    if (!=) goto 0x0x808508cc;
    /* li r0, 1 */ // 0x808508C0
    *(0x4d + r31) = r0; // stb @ 0x808508C4
    /* b 0x80850914 */ // 0x808508C8
    r3 = r31;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r0 = *(0xcc + r3); // lwz @ 0x808508D4
    if (!=) goto 0x0x808508ec;
    /* li r0, 1 */ // 0x808508E0
    *(0x4e + r31) = r0; // stb @ 0x808508E4
    /* b 0x80850914 */ // 0x808508E8
    r3 = *(0 + r31); // lwz @ 0x808508EC
    r3 = *(4 + r3); // lwz @ 0x808508F0
    r0 = *(4 + r3); // lwz @ 0x808508F4
    /* rlwinm. r0, r0, 0, 0x12, 0x12 */ // 0x808508F8
    if (==) goto 0x0x8085090c;
    /* li r0, 1 */ // 0x80850900
    *(0x4d + r31) = r0; // stb @ 0x80850904
    /* b 0x80850914 */ // 0x80850908
    /* li r0, 1 */ // 0x8085090C
    *(0x4e + r31) = r0; // stb @ 0x80850910
    r3 = *(0xb8 + r31); // lwz @ 0x80850914
    FUN_80817988(); // bl 0x80817988
    /* lfs f0, 0xac(r31) */ // 0x8085091C
    /* fmuls f0, f0, f0 */ // 0x80850920
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80850924
    /* mfcr r0 */ // 0x80850928
    /* lis r3, 0 */ // 0x8085092C
    r0 = r0 rlwinm 2; // rlwinm
    *(0xb4 + r31) = r0; // stb @ 0x80850934
    /* li r29, 0 */ // 0x80850938
    r3 = *(0 + r3); // lwz @ 0x8085093C
    r0 = *(0x25 + r3); // lbz @ 0x80850940
    if (==) goto 0x0x8085096c;
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* clrlwi r30, r3, 0x18 */ // 0x80850954
    FUN_80818E88(r3); // bl 0x80818E88
    /* clrlwi r0, r3, 0x18 */ // 0x8085095C
    if (==) goto 0x0x8085096c;
    /* li r29, 1 */ // 0x80850968
    *(0xd6 + r31) = r29; // stb @ 0x8085096C
    r31 = *(0x1c + r1); // lwz @ 0x80850970
    r30 = *(0x18 + r1); // lwz @ 0x80850974
    r29 = *(0x14 + r1); // lwz @ 0x80850978
    r0 = *(0x24 + r1); // lwz @ 0x8085097C
    return;
}