/* Function at 0x805CAC50, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805CAC50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805CAC58
    *(0xc + r1) = r31; // stw @ 0x805CAC60
    r31 = r4;
    /* li r4, 4 */ // 0x805CAC68
    *(8 + r1) = r30; // stw @ 0x805CAC6C
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x805CAC74
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805cace4;
    r3 = *(4 + r30); // lwz @ 0x805CAC84
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CAC8C
    /* lwzx r3, r3, r0 */ // 0x805CAC90
    r0 = *(0x38 + r3); // lwz @ 0x805CAC94
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CAC98
    if (!=) goto 0x0x805cace4;
    r0 = *(0x106 + r30); // lbz @ 0x805CACA0
    if (!=) goto 0x0x805cace4;
    /* lis r3, 0 */ // 0x805CACAC
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805CACB4
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805CACBC
    r3 = *(4 + r3); // lwz @ 0x805CACC0
    r0 = *(0x14 + r3); // lwz @ 0x805CACC4
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805CACC8
    if (!=) goto 0x0x805cace4;
    r3 = r30;
    r5 = r31;
    /* li r4, 4 */ // 0x805CACD8
    /* li r6, 0xc */ // 0x805CACDC
    FUN_805CA924(r3, r5, r4, r6); // bl 0x805CA924
    r0 = *(0x14 + r1); // lwz @ 0x805CACE4
    r31 = *(0xc + r1); // lwz @ 0x805CACE8
    r30 = *(8 + r1); // lwz @ 0x805CACEC
    return;
}