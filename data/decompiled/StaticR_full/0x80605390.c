/* Function at 0x80605390, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80605390(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80605398
    r5 = r5 + 0; // 0x806053A0
    *(0x1c + r1) = r31; // stw @ 0x806053A4
    r31 = r5 + 0x85; // 0x806053A8
    *(0x18 + r1) = r30; // stw @ 0x806053AC
    /* li r30, 0 */ // 0x806053B0
    *(0x14 + r1) = r29; // stw @ 0x806053B4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806053BC
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80605424;
    r0 = *(0x10 + r28); // lbz @ 0x806053D8
    if (==) goto 0x0x806053f8;
    r0 = *(4 + r29); // lwz @ 0x806053E4
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x806053E8
    if (!=) goto 0x0x806053f8;
    /* li r0, 1 */ // 0x806053F0
    *(0x24 + r29) = r0; // stw @ 0x806053F4
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80605404
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x8060540C
    if (==) goto 0x0x80605420;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80605420
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80605428
    r30 = *(0x18 + r1); // lwz @ 0x8060542C
    r29 = *(0x14 + r1); // lwz @ 0x80605430
    r28 = *(0x10 + r1); // lwz @ 0x80605434
    r0 = *(0x24 + r1); // lwz @ 0x80605438
    return;
}