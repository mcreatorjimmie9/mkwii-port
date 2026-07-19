/* Function at 0x805A326C, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A326C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A3274
    /* li r31, 0 */ // 0x805A3280
    *(0x18 + r1) = r30; // stw @ 0x805A3284
    *(0x14 + r1) = r29; // stw @ 0x805A3288
    *(0x10 + r1) = r28; // stw @ 0x805A328C
    r5 = *(4 + r3); // lwz @ 0x805A3290
    r7 = *(0 + r5); // lwz @ 0x805A3294
    r0 = *(8 + r7); // lhz @ 0x805A3298
    /* mtctr r0 */ // 0x805A329C
    if (<=) goto 0x0x805a32d4;
    r0 = *(0xa + r7); // lhz @ 0x805A32A8
    r3 = *(4 + r5); // lwz @ 0x805A32AC
    r0 = r7 + r0; // 0x805A32B0
    /* lwzx r3, r3, r6 */ // 0x805A32B4
    /* lwzux r0, r3, r0 */ // 0x805A32B8
    if (!=) goto 0x0x805a32cc;
    r31 = r3;
    /* b 0x805a32d4 */ // 0x805A32C8
    r6 = r6 + 4; // 0x805A32CC
    if (counter-- != 0) goto 0x0x805a32a8;
    /* li r28, 0 */ // 0x805A32D8
    if (==) goto 0x0x805a3384;
    /* li r3, 0x14 */ // 0x805A32E0
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a3384;
    /* li r4, 0 */ // 0x805A32F4
    *(0 + r3) = r4; // stw @ 0x805A32F8
    /* li r0, -1 */ // 0x805A32FC
    r29 = r31 + 8; // 0x805A3300
    *(4 + r3) = r4; // sth @ 0x805A3304
    *(8 + r3) = r31; // stw @ 0x805A3308
}