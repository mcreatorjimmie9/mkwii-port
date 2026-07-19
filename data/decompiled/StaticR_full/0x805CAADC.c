/* Function at 0x805CAADC, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805CAADC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x805CAAE4
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805CAAF4
    r30 = r4;
    /* li r4, 4 */ // 0x805CAAFC
    *(0x14 + r1) = r29; // stw @ 0x805CAB00
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805CAB08
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805cab78;
    r3 = *(4 + r29); // lwz @ 0x805CAB18
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CAB20
    /* lwzx r3, r3, r0 */ // 0x805CAB24
    r0 = *(0x38 + r3); // lwz @ 0x805CAB28
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CAB2C
    if (!=) goto 0x0x805cab78;
    r0 = *(0x106 + r29); // lbz @ 0x805CAB34
    if (!=) goto 0x0x805cab78;
    /* lis r3, 0 */ // 0x805CAB40
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x805CAB48
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805CAB50
    r3 = *(4 + r3); // lwz @ 0x805CAB54
    r0 = *(0x14 + r3); // lwz @ 0x805CAB58
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805CAB5C
    if (!=) goto 0x0x805cab78;
    r3 = r29;
    r5 = r30;
    r6 = r31;
    /* li r4, 1 */ // 0x805CAB70
    FUN_805CA924(r3, r5, r6, r4); // bl 0x805CA924
    r0 = *(0x24 + r1); // lwz @ 0x805CAB78
    r31 = *(0x1c + r1); // lwz @ 0x805CAB7C
    r30 = *(0x18 + r1); // lwz @ 0x805CAB80
    r29 = *(0x14 + r1); // lwz @ 0x805CAB84
    return;
}