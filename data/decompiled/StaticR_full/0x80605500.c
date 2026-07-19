/* Function at 0x80605500, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80605500(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80605508
    r5 = r5 + 0; // 0x80605510
    *(0x1c + r1) = r31; // stw @ 0x80605514
    r31 = r5 + 0x92; // 0x80605518
    *(0x18 + r1) = r30; // stw @ 0x8060551C
    /* li r30, 0 */ // 0x80605520
    *(0x14 + r1) = r29; // stw @ 0x80605524
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8060552C
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80605594;
    r0 = *(0x10 + r28); // lbz @ 0x80605548
    if (==) goto 0x0x80605568;
    r0 = *(4 + r29); // lwz @ 0x80605554
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80605558
    if (!=) goto 0x0x80605568;
    /* li r0, 1 */ // 0x80605560
    *(0x24 + r29) = r0; // stw @ 0x80605564
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80605574
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x8060557C
    if (==) goto 0x0x80605590;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80605590
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80605598
    r30 = *(0x18 + r1); // lwz @ 0x8060559C
    r29 = *(0x14 + r1); // lwz @ 0x806055A0
    r28 = *(0x10 + r1); // lwz @ 0x806055A4
    r0 = *(0x24 + r1); // lwz @ 0x806055A8
    return;
}