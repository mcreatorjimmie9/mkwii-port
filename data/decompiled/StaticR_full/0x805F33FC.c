/* Function at 0x805F33FC, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805F33FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x805F3404
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805F3414
    *(0x14 + r1) = r29; // stw @ 0x805F3418
    r29 = r4;
    r0 = *(0 + r5); // lwz @ 0x805F3420
    /* cmpwi cr1, r0, 0 */
    if (!=) goto 0x0x805f34f8;
    r0 = *(0xc + r4); // lwz @ 0x805F342C
    if (==) goto 0x0x805f34f8;
    if (!=) goto 0x0x805f34f8;
    /* li r4, 0 */ // 0x805F343C
    /* li r30, 0 */ // 0x805F3440
    /* b 0x805f348c */ // 0x805F3444
    r5 = *(0xc + r29); // lwz @ 0x805F3448
    /* li r6, 0 */ // 0x805F344C
    r0 = *(4 + r3); // lwz @ 0x805F3450
    if (!=) goto 0x0x805f3470;
    r5 = *(8 + r3); // lwz @ 0x805F345C
    r0 = *(0x24 + r29); // lwz @ 0x805F3460
    if (!=) goto 0x0x805f3470;
}