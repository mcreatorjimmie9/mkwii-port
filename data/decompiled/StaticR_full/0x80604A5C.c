/* Function at 0x80604A5C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80604A5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80604A64
    r5 = r5 + 0; // 0x80604A6C
    *(0x1c + r1) = r31; // stw @ 0x80604A70
    r31 = r5 + 0x33; // 0x80604A74
    *(0x18 + r1) = r30; // stw @ 0x80604A78
    /* li r30, 0 */ // 0x80604A7C
    *(0x14 + r1) = r29; // stw @ 0x80604A80
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80604A88
    r28 = r3;
    r4 = r28 + 4; // 0x80604A90
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80604af0;
    r0 = *(0x10 + r28); // lbz @ 0x80604AA4
    if (==) goto 0x0x80604ac4;
    r0 = *(4 + r29); // lwz @ 0x80604AB0
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604AB4
    if (!=) goto 0x0x80604ac4;
    /* li r0, 1 */ // 0x80604ABC
    *(0x24 + r29) = r0; // stw @ 0x80604AC0
    r3 = r29;
    r4 = r31;
    r5 = r28 + 4; // 0x80604ACC
    /* li r6, 0 */ // 0x80604AD0
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x80604AD8
    if (==) goto 0x0x80604aec;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80604AEC
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80604AF4
    r30 = *(0x18 + r1); // lwz @ 0x80604AF8
    r29 = *(0x14 + r1); // lwz @ 0x80604AFC
    r28 = *(0x10 + r1); // lwz @ 0x80604B00
    r0 = *(0x24 + r1); // lwz @ 0x80604B04
    return;
}