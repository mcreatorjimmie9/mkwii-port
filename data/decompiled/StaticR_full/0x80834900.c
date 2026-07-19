/* Function at 0x80834900, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80834900(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083490C
    r31 = r3;
    FUN_80828F78(); // bl 0x80828F78
    r3 = *(0x78 + r31); // lwz @ 0x80834918
    /* li r5, 0 */ // 0x8083491C
    /* li r4, -1 */ // 0x80834920
    *(0x2b4 + r31) = r5; // sth @ 0x80834924
    /* rlwinm. r0, r3, 0, 6, 6 */ // 0x80834928
    *(0x2b8 + r31) = r4; // stw @ 0x8083492C
    *(0x2bc + r31) = r5; // stw @ 0x80834930
    if (==) goto 0x0x80834a14;
    r0 = *(0x268 + r31); // lbz @ 0x80834938
    if (==) goto 0x0x808349e8;
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x80834944
    /* li r0, 3 */ // 0x80834948
    *(0x2b8 + r31) = r0; // stw @ 0x8083494C
    if (!=) goto 0x0x8083495c;
    r0 = *(0x6c + r31); // lbz @ 0x80834954
    /* b 0x80834960 */ // 0x80834958
    /* li r0, 0xc */ // 0x8083495C
    if (<) goto 0x0x80834970;
    /* li r0, 0xc */ // 0x80834968
    /* b 0x808349c4 */ // 0x8083496C
    /* lis r3, 0 */ // 0x80834970
    r0 = r0 rlwinm 2; // rlwinm
    r5 = *(0 + r3); // lwz @ 0x80834978
    r3 = *(0xc + r5); // lwz @ 0x8083497C
    /* lwzx r3, r3, r0 */ // 0x80834980
    r3 = *(0x20 + r3); // lbz @ 0x80834984
    r0 = r3 + -1; // 0x80834988
    /* clrlwi r4, r0, 0x18 */ // 0x8083498C
    if (>=) goto 0x0x808349a0;
    /* lis r3, 0 */ // 0x80834998
    r4 = *(0 + r3); // lbz @ 0x8083499C
    /* lis r3, 0 */ // 0x808349A0
    r0 = *(0 + r3); // lbz @ 0x808349A4
    if (<=) goto 0x0x808349c0;
    r0 = *(0x18 + r5); // lwz @ 0x808349B0
    r3 = r4 + r0; // 0x808349B4
    r0 = *(-1 + r3); // lbz @ 0x808349B8
    /* b 0x808349c4 */ // 0x808349BC
    /* li r0, 0xc */ // 0x808349C0
    r7 = *(0x2d0 + r31); // lbz @ 0x808349C4
    r3 = r31;
    /* clrlwi r8, r0, 0x18 */ // 0x808349CC
    /* li r4, 0x2d */ // 0x808349D0
    /* li r5, 0 */ // 0x808349D4
    /* li r6, 1 */ // 0x808349D8
    /* li r9, 0 */ // 0x808349DC
    FUN_8083A734(r4, r5, r6, r9); // bl 0x8083A734
    /* b 0x80834a04 */ // 0x808349E4
    /* li r0, 2 */ // 0x808349E8
    *(0x2b8 + r31) = r0; // stw @ 0x808349EC
    r5 = *(0x2d0 + r31); // lbz @ 0x808349F0
    r3 = r31;
    /* li r4, 0 */ // 0x808349F8
    /* li r6, 0 */ // 0x808349FC
    FUN_8083BD30(r3, r4, r6); // bl 0x8083BD30
    r0 = *(0x78 + r31); // lwz @ 0x80834A04
    r0 = r0 | 0x100; // 0x80834A08
    *(0x78 + r31) = r0; // stw @ 0x80834A0C
    /* b 0x80834a30 */ // 0x80834A10
    /* li r0, 1 */ // 0x80834A14
    *(0x2b8 + r31) = r0; // stw @ 0x80834A18
    r5 = *(0x2d0 + r31); // lbz @ 0x80834A1C
    r3 = r31;
    /* li r4, 0 */ // 0x80834A24
    /* li r6, 0 */ // 0x80834A28
    FUN_8083BD30(r3, r4, r6); // bl 0x8083BD30
    r3 = r31;
    FUN_80838538(r3, r4, r6, r3); // bl 0x80838538
    r0 = *(0x14 + r1); // lwz @ 0x80834A38
    r31 = *(0xc + r1); // lwz @ 0x80834A3C
    return;
}