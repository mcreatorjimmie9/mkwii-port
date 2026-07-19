/* Function at 0x806052D8, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806052D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806052E0
    r5 = r5 + 0; // 0x806052E8
    *(0x1c + r1) = r31; // stw @ 0x806052EC
    r31 = r5 + 0x7e; // 0x806052F0
    *(0x18 + r1) = r30; // stw @ 0x806052F4
    /* li r30, 0 */ // 0x806052F8
    *(0x14 + r1) = r29; // stw @ 0x806052FC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80605304
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x8060536c;
    r0 = *(0x10 + r28); // lbz @ 0x80605320
    if (==) goto 0x0x80605340;
    r0 = *(4 + r29); // lwz @ 0x8060532C
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80605330
    if (!=) goto 0x0x80605340;
    /* li r0, 1 */ // 0x80605338
    *(0x24 + r29) = r0; // stw @ 0x8060533C
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x8060534C
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x80605354
    if (==) goto 0x0x80605368;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80605368
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80605370
    r30 = *(0x18 + r1); // lwz @ 0x80605374
    r29 = *(0x14 + r1); // lwz @ 0x80605378
    r28 = *(0x10 + r1); // lwz @ 0x8060537C
    r0 = *(0x24 + r1); // lwz @ 0x80605380
    return;
}