/* Function at 0x806107D8, size=736 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_806107D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x28 + r1) = r30; // stw @ 0x806107EC
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x806107F4
    r29 = r3;
    if (==) goto 0x0x80610808;
    r31 = r5;
    /* b 0x8061080c */ // 0x80610804
    r31 = *(0xfc + r3); // lha @ 0x80610808
    if (<) goto 0x0x80610a94;
    r3 = r29;
    FUN_8061E0F0(r3); // bl 0x8061E0F0
    r0 = *(0x6c + r3); // lwz @ 0x8061081C
    /* extsh r31, r0 */ // 0x80610824
    if (!=) goto 0x0x80610864;
    /* xoris r3, r31, 0x8000 */ // 0x8061082C
    /* lis r0, 0x4330 */ // 0x80610830
    *(0xc + r1) = r3; // stw @ 0x80610834
    /* lis r4, 0 */ // 0x80610838
    /* lfd f2, 0(r4) */ // 0x8061083C
    /* lis r3, 0 */ // 0x80610840
    *(8 + r1) = r0; // stw @ 0x80610844
    /* lfs f0, 0(r3) */ // 0x80610848
    /* lfd f1, 8(r1) */ // 0x8061084C
    /* fsubs f1, f1, f2 */ // 0x80610850
    /* fmuls f0, f1, f0 */ // 0x80610854
    /* fctiwz f0, f0 */ // 0x80610858
    /* stfd f0, 0x10(r1) */ // 0x8061085C
    r31 = *(0x14 + r1); // lwz @ 0x80610860
    r4 = *(0 + r29); // lwz @ 0x80610864
    /* lis r3, 0x80c */ // 0x80610868
    r0 = r3 + 0x100; // 0x8061086C
    /* li r5, 1 */ // 0x80610870
    r7 = *(4 + r4); // lwz @ 0x80610874
    /* li r4, 1 */ // 0x80610878
    /* li r6, 1 */ // 0x8061087C
    r3 = *(0xc + r7); // lwz @ 0x80610880
    /* and. r0, r3, r0 */ // 0x80610884
    if (!=) goto 0x0x8061089c;
    r0 = *(4 + r7); // lwz @ 0x8061088C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80610890
    if (!=) goto 0x0x8061089c;
    /* li r6, 0 */ // 0x80610898
    if (!=) goto 0x0x806108b4;
    r0 = *(0x14 + r7); // lwz @ 0x806108A4
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x806108A8
    if (!=) goto 0x0x806108b4;
    /* li r4, 0 */ // 0x806108B0
    if (!=) goto 0x0x806108cc;
    r0 = *(8 + r7); // lwz @ 0x806108BC
    /* clrlwi. r0, r0, 0x1f */ // 0x806108C0
    if (!=) goto 0x0x806108cc;
    /* li r5, 0 */ // 0x806108C8
    if (!=) goto 0x0x80610a94;
    r0 = *(4 + r7); // lwz @ 0x806108D4
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x806108D8
    if (==) goto 0x0x806108e8;
    if (==) goto 0x0x80610a94;
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806108F0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x806108F8
    r3 = *(0x68 + r3); // lwz @ 0x806108FC
    /* lwzx r3, r3, r0 */ // 0x80610900
    FUN_80733560(r4); // bl 0x80733560
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r29); // lhz @ 0x80610914
    /* li r4, 0 */ // 0x80610918
    /* clrlwi. r0, r0, 0x1f */ // 0x8061091C
    if (==) goto 0x0x80610934;
    r0 = *(0x10c + r29); // lha @ 0x80610924
    /* extsh r3, r31 */ // 0x80610928
    if (<=) goto 0x0x80610954;
    r0 = *(0x118 + r29); // lhz @ 0x80610934
    /* lis r3, 0 */ // 0x80610938
    *(0x10c + r29) = r31; // sth @ 0x8061093C
    /* li r4, 1 */ // 0x80610940
    r0 = r0 | 1; // 0x80610944
    *(0x118 + r29) = r0; // sth @ 0x80610948
    /* lfs f0, 0(r3) */ // 0x8061094C
    /* stfs f0, 0x124(r29) */ // 0x80610950
    if (==) goto 0x0x806109cc;
    r4 = *(0 + r29); // lwz @ 0x8061095C
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x80610964
    r0 = *(4 + r4); // lwz @ 0x80610968
    r0 = r0 | 0x10; // 0x8061096C
    *(4 + r4) = r0; // stw @ 0x80610970
    /* lfs f1, 0x124(r29) */ // 0x80610974
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r29;
    /* li r4, 6 */ // 0x80610980
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r29;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80610990
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80610998
    /* clrlwi r4, r31, 0x10 */ // 0x8061099C
    r3 = *(0x68 + r3); // lwz @ 0x806109A0
    /* lwzx r3, r3, r0 */ // 0x806109A4
    FUN_807336DC(); // bl 0x807336DC
    r3 = r29;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r29;
    /* li r4, 4 */ // 0x806109BC
    /* li r5, 0 */ // 0x806109C0
    /* li r6, 1 */ // 0x806109C4
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r4 = *(0 + r29); // lwz @ 0x806109CC
    /* lis r3, 0 */ // 0x806109D0
    /* lfs f1, 0(r3) */ // 0x806109D4
    r3 = r29;
    r6 = *(4 + r4); // lwz @ 0x806109DC
    /* li r4, 5 */ // 0x806109E0
    /* li r5, 1 */ // 0x806109E4
    r0 = *(8 + r6); // lwz @ 0x806109E8
    r0 = r0 | 0x10; // 0x806109EC
    *(8 + r6) = r0; // stw @ 0x806109F0
    *(0x102 + r29) = r31; // sth @ 0x806109F4
    FUN_8061DC98(r5); // bl 0x8061DC98
    r3 = r29;
    /* li r4, 6 */ // 0x80610A00
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    /* lis r3, 0 */ // 0x80610A08
    /* lis r4, 0 */ // 0x80610A0C
    r5 = *(0 + r3); // lwz @ 0x80610A10
    r3 = *(0 + r4); // lwz @ 0x80610A14
    r0 = *(0xb70 + r5); // lwz @ 0x80610A18
    if (!=) goto 0x0x80610a40;
    r0 = *(0xb9e + r5); // lhz @ 0x80610A24
    if (!=) goto 0x0x80610a40;
    r4 = *(0x10 + r3); // lwz @ 0x80610A30
    r3 = *(8 + r4); // lwz @ 0x80610A34
    r0 = r3 + 1; // 0x80610A38
    *(8 + r4) = r0; // stw @ 0x80610A3C
    r3 = *(0 + r29); // lwz @ 0x80610A40
    r3 = *(0 + r3); // lwz @ 0x80610A44
    r4 = *(0x34 + r3); // lwz @ 0x80610A48
    if (==) goto 0x0x80610a60;
    r3 = *(4 + r4); // lwz @ 0x80610A54
    r0 = r3 + 1; // 0x80610A58
    *(4 + r4) = r0; // stw @ 0x80610A5C
    r3 = *(0 + r29); // lwz @ 0x80610A60
    r3 = *(4 + r3); // lwz @ 0x80610A64
    r0 = *(0x14 + r3); // lwz @ 0x80610A68
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80610A6C
    if (==) goto 0x0x80610a94;
    r0 = *(0xfc + r29); // lha @ 0x80610A74
    r3 = r29;
    /* extsb r30, r0 */ // 0x80610A7C
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x58 + r3) = r30; // stb @ 0x80610A84
    r3 = r29;
    /* li r4, 0x1d */ // 0x80610A8C
    FUN_8061F03C(r3, r4); // bl 0x8061F03C
    /* li r0, 0 */ // 0x80610A94
    *(0xfc + r29) = r0; // sth @ 0x80610A98
    r31 = *(0x2c + r1); // lwz @ 0x80610A9C
    r30 = *(0x28 + r1); // lwz @ 0x80610AA0
    r29 = *(0x24 + r1); // lwz @ 0x80610AA4
    r0 = *(0x34 + r1); // lwz @ 0x80610AA8
    return;
}