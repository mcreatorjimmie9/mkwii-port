/* Function at 0x805BA274, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805BA274(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x805BA27C
    /* li r31, 0 */ // 0x805BA288
    *(0x18 + r1) = r30; // stw @ 0x805BA28C
    r30 = *(0 + r4); // lwz @ 0x805BA290
    *(0x14 + r1) = r29; // stw @ 0x805BA294
    /* li r29, 0 */ // 0x805BA298
    *(0x10 + r1) = r28; // stw @ 0x805BA29C
    r28 = r3;
    /* b 0x805ba2d8 */ // 0x805BA2A4
    /* clrlwi r0, r29, 0x10 */ // 0x805BA2A8
    if (>=) goto 0x0x805ba2d4;
    r3 = *(0x18 + r28); // lwz @ 0x805BA2B4
    r0 = r29 rlwinm 2; // rlwinm
    r4 = r30;
    /* li r5, 0x80 */ // 0x805BA2C0
    /* stwx r31, r3, r0 */ // 0x805BA2C4
    r3 = *(0x10 + r28); // lwz @ 0x805BA2C8
    /* lwzx r3, r3, r0 */ // 0x805BA2CC
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r29 = r29 + 1; // 0x805BA2D4
    r3 = *(8 + r28); // lhz @ 0x805BA2D8
    /* clrlwi r0, r29, 0x10 */ // 0x805BA2DC
    if (<) goto 0x0x805ba2a8;
    r0 = *(0x24 + r1); // lwz @ 0x805BA2E8
    r31 = *(0x1c + r1); // lwz @ 0x805BA2EC
    r30 = *(0x18 + r1); // lwz @ 0x805BA2F0
    r29 = *(0x14 + r1); // lwz @ 0x805BA2F4
    r28 = *(0x10 + r1); // lwz @ 0x805BA2F8
    return;
}