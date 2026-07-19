/* Function at 0x805CAA24, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805CAA24(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x805CAA2C
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805CAA3C
    r30 = r4;
    /* li r4, 4 */ // 0x805CAA44
    *(0x14 + r1) = r29; // stw @ 0x805CAA48
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805CAA50
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805caac0;
    r3 = *(4 + r29); // lwz @ 0x805CAA60
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CAA68
    /* lwzx r3, r3, r0 */ // 0x805CAA6C
    r0 = *(0x38 + r3); // lwz @ 0x805CAA70
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CAA74
    if (!=) goto 0x0x805caac0;
    r0 = *(0x106 + r29); // lbz @ 0x805CAA7C
    if (!=) goto 0x0x805caac0;
    /* lis r3, 0 */ // 0x805CAA88
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805CAA90
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805CAA98
    r3 = *(4 + r3); // lwz @ 0x805CAA9C
    r0 = *(0x14 + r3); // lwz @ 0x805CAAA0
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805CAAA4
    if (!=) goto 0x0x805caac0;
    r3 = r29;
    r5 = r30;
    r6 = r31;
    /* li r4, 3 */ // 0x805CAAB8
    FUN_805CA924(r3, r5, r6, r4); // bl 0x805CA924
    r0 = *(0x24 + r1); // lwz @ 0x805CAAC0
    r31 = *(0x1c + r1); // lwz @ 0x805CAAC4
    r30 = *(0x18 + r1); // lwz @ 0x805CAAC8
    r29 = *(0x14 + r1); // lwz @ 0x805CAACC
    return;
}