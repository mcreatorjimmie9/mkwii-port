/* Function at 0x8082E404, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8082E404(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8082E418
    r30 = r4;
    FUN_80826540(); // bl 0x80826540
    if (==) goto 0x0x8082e45c;
    if (==) goto 0x0x8082e45c;
    r0 = *(0x78 + r30); // lwz @ 0x8082E434
    /* lis r12, 0 */ // 0x8082E438
    r3 = *(4 + r30); // lwz @ 0x8082E43C
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8082E444
    if (==) goto 0x0x8082e454;
    /* lis r12, 0 */ // 0x8082E44C
    /* mtctr r12 */ // 0x8082E454
    /* bctrl  */ // 0x8082E458
    r0 = *(0x14 + r1); // lwz @ 0x8082E45C
    r31 = *(0xc + r1); // lwz @ 0x8082E460
    r30 = *(8 + r1); // lwz @ 0x8082E464
    return;
}