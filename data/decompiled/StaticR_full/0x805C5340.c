/* Function at 0x805C5340, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805C5340(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x805C5350
    /* lis r30, 0 */ // 0x805C5358
    *(0x14 + r1) = r29; // stw @ 0x805C535C
    /* li r29, 0 */ // 0x805C5360
    *(0x10 + r1) = r28; // stw @ 0x805C5364
    r28 = r3;
    /* b 0x805c53a8 */ // 0x805C536C
    r3 = *(0 + r30); // lwz @ 0x805C5370
    r6 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805C5378
    /* lwzx r3, r3, r6 */ // 0x805C537C
    r0 = *(0x38 + r3); // lwz @ 0x805C5380
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805C5384
    if (!=) goto 0x0x805c53a4;
    r3 = *(4 + r28); // lwz @ 0x805C538C
    /* li r4, 2 */ // 0x805C5390
    /* li r5, 1 */ // 0x805C5394
    r3 = *(0xc + r3); // lwz @ 0x805C5398
    /* lwzx r3, r3, r6 */ // 0x805C539C
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r29 = r29 + 1; // 0x805C53A4
    r3 = *(0 + r31); // lwz @ 0x805C53A8
    /* clrlwi r4, r29, 0x18 */ // 0x805C53AC
    r0 = *(0x24 + r3); // lbz @ 0x805C53B0
    if (<) goto 0x0x805c5370;
    r0 = *(0x24 + r1); // lwz @ 0x805C53BC
    r31 = *(0x1c + r1); // lwz @ 0x805C53C0
    r30 = *(0x18 + r1); // lwz @ 0x805C53C4
    r29 = *(0x14 + r1); // lwz @ 0x805C53C8
    r28 = *(0x10 + r1); // lwz @ 0x805C53CC
    return;
}