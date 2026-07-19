/* Function at 0x805CE6FC, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805CE6FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x805CE70C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805CE718
    /* lis r29, 0 */ // 0x805CE71C
    *(0x10 + r1) = r28; // stw @ 0x805CE720
    /* lis r28, 0 */ // 0x805CE724
    /* b 0x805ce77c */ // 0x805CE728
    r3 = *(0 + r28); // lwz @ 0x805CE72C
    r6 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CE734
    /* lwzx r3, r3, r6 */ // 0x805CE738
    r0 = *(0x38 + r3); // lwz @ 0x805CE73C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CE740
    if (!=) goto 0x0x805ce778;
    /* clrlwi r0, r31, 0x18 */ // 0x805CE748
    /* mulli r0, r0, 0xf0 */ // 0x805CE74C
    r3 = r4 + r0; // 0x805CE750
    r0 = *(0x38 + r3); // lwz @ 0x805CE754
    if (!=) goto 0x0x805ce778;
    r3 = *(4 + r30); // lwz @ 0x805CE760
    /* li r4, 2 */ // 0x805CE764
    /* li r5, 1 */ // 0x805CE768
    r3 = *(0xc + r3); // lwz @ 0x805CE76C
    /* lwzx r3, r3, r6 */ // 0x805CE770
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r31 = r31 + 1; // 0x805CE778
    r4 = *(0 + r29); // lwz @ 0x805CE77C
    /* clrlwi r3, r31, 0x18 */ // 0x805CE780
    r0 = *(0x24 + r4); // lbz @ 0x805CE784
    if (<) goto 0x0x805ce72c;
    r0 = *(0x24 + r1); // lwz @ 0x805CE790
    r31 = *(0x1c + r1); // lwz @ 0x805CE794
    r30 = *(0x18 + r1); // lwz @ 0x805CE798
    r29 = *(0x14 + r1); // lwz @ 0x805CE79C
    r28 = *(0x10 + r1); // lwz @ 0x805CE7A0
    return;
}