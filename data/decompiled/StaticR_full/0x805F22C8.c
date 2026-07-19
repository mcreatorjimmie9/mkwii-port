/* Function at 0x805F22C8, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805F22C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805F22E0
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805F22E8
    *(0x10 + r1) = r28; // stw @ 0x805F22EC
    if (==) goto 0x0x805f22fc;
    r28 = r31;
    /* b 0x805f2328 */ // 0x805F22F8
    r0 = *(0x40 + r3); // lhz @ 0x805F22FC
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805F2300
    if (==) goto 0x0x805f231c;
    /* lis r3, 0 */ // 0x805F2308
    r3 = r3 + 0; // 0x805F230C
    r3 = *(4 + r3); // lwz @ 0x805F2310
    r28 = *(0x10 + r3); // lwz @ 0x805F2314
    /* b 0x805f2328 */ // 0x805F2318
    /* lis r3, 0 */ // 0x805F231C
    r3 = *(0 + r3); // lwz @ 0x805F2320
    r28 = *(0x10 + r3); // lwz @ 0x805F2324
    r5 = *(0x68 + r28); // lwz @ 0x805F2328
    /* lis r3, 0 */ // 0x805F232C
    r4 = *(0 + r3); // lwz @ 0x805F2330
    /* lis r3, 0 */ // 0x805F2334
    r5 = r5 + 1; // 0x805F2338
    r0 = *(0 + r3); // lwz @ 0x805F233C
    r5 = r0 rlwinm 0; // rlwinm
    if (!=) goto 0x0x805f2350;
    r5 = r0 | 4; // 0x805F234C
    /* lis r4, 0 */ // 0x805F2350
    r3 = r30;
    *(0 + r4) = r5; // stw @ 0x805F2358
    r4 = r28;
    r12 = *(0 + r30); // lwz @ 0x805F2360
    r12 = *(0x3c + r12); // lwz @ 0x805F2364
    /* mtctr r12 */ // 0x805F2368
    /* bctrl  */ // 0x805F236C
    /* li r29, 0 */ // 0x805F2370
    /* b 0x805f2390 */ // 0x805F2374
    r12 = *(0 + r29); // lwz @ 0x805F2378
    r3 = r29;
    r4 = *(0x68 + r28); // lwz @ 0x805F2380
}