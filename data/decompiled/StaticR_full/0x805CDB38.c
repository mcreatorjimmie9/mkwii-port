/* Function at 0x805CDB38, size=432 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805CDB38(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805CDB48
    *(0x18 + r1) = r30; // stw @ 0x805CDB4C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805CDB54
    /* lis r29, 0 */ // 0x805CDB58
    r4 = *(0 + r29); // lwz @ 0x805CDB5C
    r0 = *(0xb74 + r4); // lwz @ 0x805CDB60
    if (!=) goto 0x0x805cdb74;
    /* li r3, 0 */ // 0x805CDB6C
    /* b 0x805cdccc */ // 0x805CDB70
    r3 = *(4 + r3); // lwz @ 0x805CDB74
    /* li r4, 2 */ // 0x805CDB78
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cdb90;
    /* li r3, 0 */ // 0x805CDB88
    /* b 0x805cdccc */ // 0x805CDB8C
    r3 = *(4 + r30); // lwz @ 0x805CDB90
    /* li r4, 4 */ // 0x805CDB94
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x805cdbac;
    /* li r3, 0 */ // 0x805CDBA4
    /* b 0x805cdccc */ // 0x805CDBA8
    r3 = *(0 + r29); // lwz @ 0x805CDBAC
    r0 = *(0xb70 + r3); // lwz @ 0x805CDBB0
    if (==) goto 0x0x805cdbc4;
    if (!=) goto 0x0x805cdbcc;
    /* li r3, 0 */ // 0x805CDBC4
    /* b 0x805cdccc */ // 0x805CDBC8
    r0 = *(0x114 + r30); // lbz @ 0x805CDBCC
    if (==) goto 0x0x805cdbe0;
    /* li r3, 0 */ // 0x805CDBD8
    /* b 0x805cdccc */ // 0x805CDBDC
    r0 = *(0x108 + r30); // lbz @ 0x805CDBE0
    /* li r4, 0 */ // 0x805CDBE4
    /* li r5, 1 */ // 0x805CDBE8
    if (==) goto 0x0x805cdc58;
    r3 = *(4 + r30); // lwz @ 0x805CDBF4
    r0 = r0 rlwinm 2; // rlwinm
    /* lfs f0, 0x120(r30) */ // 0x805CDBFC
    r3 = *(0xc + r3); // lwz @ 0x805CDC00
    /* lwzx r3, r3, r0 */ // 0x805CDC04
    /* lfs f1, 0xc(r3) */ // 0x805CDC08
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805CDC0C
    if (>=) goto 0x0x805cdc38;
    r3 = *(0x128 + r30); // lhz @ 0x805CDC14
    r0 = r3 + 1; // 0x805CDC18
    *(0x128 + r30) = r0; // sth @ 0x805CDC1C
    /* clrlwi r0, r0, 0x10 */ // 0x805CDC20
    if (<=) goto 0x0x805cdc3c;
    *(0x114 + r30) = r5; // stb @ 0x805CDC2C
    /* li r31, 1 */ // 0x805CDC30
    /* b 0x805cdc3c */ // 0x805CDC34
    *(0x128 + r30) = r4; // sth @ 0x805CDC38
    r3 = *(4 + r30); // lwz @ 0x805CDC3C
    r0 = *(0x108 + r30); // lbz @ 0x805CDC40
    r3 = *(0xc + r3); // lwz @ 0x805CDC44
    /* slwi r0, r0, 2 */ // 0x805CDC48
    /* lwzx r3, r3, r0 */ // 0x805CDC4C
    /* lfs f0, 0x10(r3) */ // 0x805CDC50
    /* stfs f0, 0x120(r30) */ // 0x805CDC54
    r0 = *(0x109 + r30); // lbz @ 0x805CDC58
    if (==) goto 0x0x805cdcc8;
    r3 = *(4 + r30); // lwz @ 0x805CDC64
    r0 = r0 rlwinm 2; // rlwinm
    /* lfs f0, 0x124(r30) */ // 0x805CDC6C
    r3 = *(0xc + r3); // lwz @ 0x805CDC70
    /* lwzx r3, r3, r0 */ // 0x805CDC74
    /* lfs f1, 0xc(r3) */ // 0x805CDC78
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805CDC7C
    if (>=) goto 0x0x805cdca8;
    r3 = *(0x12a + r30); // lhz @ 0x805CDC84
    r0 = r3 + 1; // 0x805CDC88
    *(0x12a + r30) = r0; // sth @ 0x805CDC8C
    /* clrlwi r0, r0, 0x10 */ // 0x805CDC90
    if (<=) goto 0x0x805cdcac;
    *(0x114 + r30) = r5; // stb @ 0x805CDC9C
    /* li r31, 1 */ // 0x805CDCA0
    /* b 0x805cdcac */ // 0x805CDCA4
    *(0x12a + r30) = r4; // sth @ 0x805CDCA8
    r3 = *(4 + r30); // lwz @ 0x805CDCAC
    r0 = *(0x109 + r30); // lbz @ 0x805CDCB0
    r3 = *(0xc + r3); // lwz @ 0x805CDCB4
    /* slwi r0, r0, 2 */ // 0x805CDCB8
    /* lwzx r3, r3, r0 */ // 0x805CDCBC
    /* lfs f0, 0x10(r3) */ // 0x805CDCC0
    /* stfs f0, 0x124(r30) */ // 0x805CDCC4
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x805CDCCC
    r31 = *(0x1c + r1); // lwz @ 0x805CDCD0
    r30 = *(0x18 + r1); // lwz @ 0x805CDCD4
    r29 = *(0x14 + r1); // lwz @ 0x805CDCD8
    return;
}