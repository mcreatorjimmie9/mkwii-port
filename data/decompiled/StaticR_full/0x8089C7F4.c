/* Function at 0x8089C7F4, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8089C7F4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x8089C808
    *(0x14 + r1) = r29; // stw @ 0x8089C80C
    r29 = r3;
    /* b 0x8089c870 */ // 0x8089C814
    r3 = *(8 + r29); // lwz @ 0x8089C818
    r31 = r30 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r31 */ // 0x8089C820
    if (==) goto 0x0x8089c86c;
    r12 = *(0 + r3); // lwz @ 0x8089C82C
    r12 = *(0x64 + r12); // lwz @ 0x8089C830
    /* mtctr r12 */ // 0x8089C834
    /* bctrl  */ // 0x8089C838
    r3 = *(8 + r29); // lwz @ 0x8089C83C
    /* lwzx r3, r3, r31 */ // 0x8089C840
    r12 = *(0 + r3); // lwz @ 0x8089C844
    r12 = *(0xc + r12); // lwz @ 0x8089C848
    /* mtctr r12 */ // 0x8089C84C
    /* bctrl  */ // 0x8089C850
    r3 = *(8 + r29); // lwz @ 0x8089C854
    /* lwzx r3, r3, r31 */ // 0x8089C858
    r12 = *(0 + r3); // lwz @ 0x8089C85C
    r12 = *(0x1c + r12); // lwz @ 0x8089C860
    /* mtctr r12 */ // 0x8089C864
    /* bctrl  */ // 0x8089C868
    r30 = r30 + 1; // 0x8089C86C
    r0 = *(4 + r29); // lhz @ 0x8089C870
    /* clrlwi r3, r30, 0x10 */ // 0x8089C874
    if (<) goto 0x0x8089c818;
    r0 = *(0x24 + r1); // lwz @ 0x8089C880
    r31 = *(0x1c + r1); // lwz @ 0x8089C884
    r30 = *(0x18 + r1); // lwz @ 0x8089C888
    r29 = *(0x14 + r1); // lwz @ 0x8089C88C
    return;
}