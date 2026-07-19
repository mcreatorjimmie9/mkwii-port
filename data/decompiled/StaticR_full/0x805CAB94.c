/* Function at 0x805CAB94, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805CAB94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805CAB9C
    *(0xc + r1) = r31; // stw @ 0x805CABA4
    r31 = r4;
    /* li r4, 4 */ // 0x805CABAC
    *(8 + r1) = r30; // stw @ 0x805CABB0
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x805CABB8
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805cac28;
    r3 = *(4 + r30); // lwz @ 0x805CABC8
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CABD0
    /* lwzx r3, r3, r0 */ // 0x805CABD4
    r0 = *(0x38 + r3); // lwz @ 0x805CABD8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CABDC
    if (!=) goto 0x0x805cac28;
    r0 = *(0x106 + r30); // lbz @ 0x805CABE4
    if (!=) goto 0x0x805cac28;
    /* lis r3, 0 */ // 0x805CABF0
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805CABF8
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805CAC00
    r3 = *(4 + r3); // lwz @ 0x805CAC04
    r0 = *(0x14 + r3); // lwz @ 0x805CAC08
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805CAC0C
    if (!=) goto 0x0x805cac28;
    r3 = r30;
    r5 = r31;
    /* li r4, 2 */ // 0x805CAC1C
    /* li r6, 0xc */ // 0x805CAC20
    FUN_805CA924(r3, r5, r4, r6); // bl 0x805CA924
    r0 = *(0x14 + r1); // lwz @ 0x805CAC28
    r31 = *(0xc + r1); // lwz @ 0x805CAC2C
    r30 = *(8 + r1); // lwz @ 0x805CAC30
    return;
}