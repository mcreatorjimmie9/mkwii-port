/* Function at 0x805CD720, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805CD720(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805CD730
    *(0x18 + r1) = r30; // stw @ 0x805CD734
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805CD73C
    r29 = r3;
    r3 = r29 + r31; // 0x805CD744
    r0 = *(0x108 + r3); // lbz @ 0x805CD748
    if (==) goto 0x0x805cd77c;
    r3 = *(4 + r29); // lwz @ 0x805CD754
    r0 = r0 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CD75C
    /* lwzx r3, r3, r0 */ // 0x805CD760
    r0 = *(0x38 + r3); // lwz @ 0x805CD764
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CD768
    if (!=) goto 0x0x805cd77c;
    r4 = r30;
    /* li r5, 1 */ // 0x805CD774
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r31 = r31 + 1; // 0x805CD77C
    if (<) goto 0x0x805cd744;
    r0 = *(0x24 + r1); // lwz @ 0x805CD788
    r31 = *(0x1c + r1); // lwz @ 0x805CD78C
    r30 = *(0x18 + r1); // lwz @ 0x805CD790
    r29 = *(0x14 + r1); // lwz @ 0x805CD794
    return;
}