/* Function at 0x805CACFC, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805CACFC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805CAD04
    *(0xc + r1) = r31; // stw @ 0x805CAD0C
    r31 = r4;
    /* li r4, 4 */ // 0x805CAD14
    *(8 + r1) = r30; // stw @ 0x805CAD18
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x805CAD20
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805cad90;
    r3 = *(4 + r30); // lwz @ 0x805CAD30
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CAD38
    /* lwzx r3, r3, r0 */ // 0x805CAD3C
    r0 = *(0x38 + r3); // lwz @ 0x805CAD40
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CAD44
    if (!=) goto 0x0x805cad90;
    r0 = *(0x106 + r30); // lbz @ 0x805CAD4C
    if (!=) goto 0x0x805cad90;
    /* lis r3, 0 */ // 0x805CAD58
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805CAD60
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805CAD68
    r3 = *(4 + r3); // lwz @ 0x805CAD6C
    r0 = *(0x14 + r3); // lwz @ 0x805CAD70
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805CAD74
    if (!=) goto 0x0x805cad90;
    r3 = r30;
    r5 = r31;
    /* li r4, 5 */ // 0x805CAD84
    /* li r6, 0xc */ // 0x805CAD88
    FUN_805CA924(r3, r5, r4, r6); // bl 0x805CA924
    r0 = *(0x14 + r1); // lwz @ 0x805CAD90
    r31 = *(0xc + r1); // lwz @ 0x805CAD94
    r30 = *(8 + r1); // lwz @ 0x805CAD98
    return;
}