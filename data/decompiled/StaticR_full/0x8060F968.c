/* Function at 0x8060F968, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 14 function(s) */

int FUN_8060F968(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8060F97C
    r30 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F988
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F990
    r3 = *(0x68 + r3); // lwz @ 0x8060F994
    /* lwzx r3, r3, r0 */ // 0x8060F998
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x8060F9AC
    /* li r4, 0 */ // 0x8060F9B0
    /* clrlwi. r0, r0, 0x1f */ // 0x8060F9B4
    if (==) goto 0x0x8060f9c8;
    r0 = *(0x10c + r30); // lha @ 0x8060F9BC
    if (<=) goto 0x0x8060f9e8;
    r0 = *(0x118 + r30); // lhz @ 0x8060F9C8
    /* lis r3, 0 */ // 0x8060F9CC
    *(0x10c + r30) = r31; // sth @ 0x8060F9D0
    /* li r4, 1 */ // 0x8060F9D4
    r0 = r0 | 1; // 0x8060F9D8
    *(0x118 + r30) = r0; // sth @ 0x8060F9DC
    /* lfs f0, 0(r3) */ // 0x8060F9E0
    /* stfs f0, 0x124(r30) */ // 0x8060F9E4
    if (==) goto 0x0x8060fa60;
    r4 = *(0 + r30); // lwz @ 0x8060F9F0
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060F9F8
    r0 = *(4 + r4); // lwz @ 0x8060F9FC
    r0 = r0 | 0x10; // 0x8060FA00
    *(4 + r4) = r0; // stw @ 0x8060FA04
    /* lfs f1, 0x124(r30) */ // 0x8060FA08
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x8060FA14
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060FA24
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060FA2C
    /* clrlwi r4, r31, 0x10 */ // 0x8060FA30
    r3 = *(0x68 + r3); // lwz @ 0x8060FA34
    /* lwzx r3, r3, r0 */ // 0x8060FA38
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x8060FA50
    /* li r5, 0 */ // 0x8060FA54
    /* li r6, 1 */ // 0x8060FA58
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r3 = r30;
    FUN_8061E2D8(r4, r5, r6, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060FA68
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060FA70
    r4 = r31;
    r3 = *(0x68 + r3); // lwz @ 0x8060FA78
    /* lwzx r3, r3, r0 */ // 0x8060FA7C
    FUN_80731420(r4); // bl 0x80731420
    /* lis r4, 0 */ // 0x8060FA84
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8060FA8C
    /* li r4, 3 */ // 0x8060FA90
    /* li r5, 1 */ // 0x8060FA94
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x8060FA9C
    r31 = *(0xc + r1); // lwz @ 0x8060FAA0
    r30 = *(8 + r1); // lwz @ 0x8060FAA4
    return;
}