/* Function at 0x80604B2C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80604B2C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80604B34
    r5 = r5 + 0; // 0x80604B3C
    *(0x1c + r1) = r31; // stw @ 0x80604B40
    r31 = r5 + 0x47; // 0x80604B44
    *(0x18 + r1) = r30; // stw @ 0x80604B48
    /* li r30, 0 */ // 0x80604B4C
    *(0x14 + r1) = r29; // stw @ 0x80604B50
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80604B58
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80604bc0;
    r0 = *(0x10 + r28); // lbz @ 0x80604B74
    if (==) goto 0x0x80604b94;
    r0 = *(4 + r29); // lwz @ 0x80604B80
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604B84
    if (!=) goto 0x0x80604b94;
    /* li r0, 1 */ // 0x80604B8C
    *(0x24 + r29) = r0; // stw @ 0x80604B90
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80604BA0
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x80604BA8
    if (==) goto 0x0x80604bbc;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80604BBC
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80604BC4
    r30 = *(0x18 + r1); // lwz @ 0x80604BC8
    r29 = *(0x14 + r1); // lwz @ 0x80604BCC
    r28 = *(0x10 + r1); // lwz @ 0x80604BD0
    r0 = *(0x24 + r1); // lwz @ 0x80604BD4
    return;
}