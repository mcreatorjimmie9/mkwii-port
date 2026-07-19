/* Function at 0x805DC258, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805DC258(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x805DC270
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805DC278
    r28 = r3;
    if (==) goto 0x0x805dc2ec;
    /* lis r4, 0 */ // 0x805DC284
    /* li r30, 0 */ // 0x805DC288
    r4 = r4 + 0; // 0x805DC28C
    *(0 + r3) = r4; // stw @ 0x805DC290
    /* li r31, 0 */ // 0x805DC294
    /* b 0x805dc2c8 */ // 0x805DC298
    r3 = *(4 + r28); // lwz @ 0x805DC29C
    /* lwzx r3, r3, r31 */ // 0x805DC2A0
    if (==) goto 0x0x805dc2c0;
    r12 = *(0 + r3); // lwz @ 0x805DC2AC
    /* li r4, 1 */ // 0x805DC2B0
    r12 = *(8 + r12); // lwz @ 0x805DC2B4
    /* mtctr r12 */ // 0x805DC2B8
    /* bctrl  */ // 0x805DC2BC
    r31 = r31 + 4; // 0x805DC2C0
    r30 = r30 + 1; // 0x805DC2C4
    r0 = *(8 + r28); // lwz @ 0x805DC2C8
    if (<) goto 0x0x805dc29c;
    r3 = *(4 + r28); // lwz @ 0x805DC2D4
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x805dc2ec;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x805DC2EC
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x805DC2F4
    r29 = *(0x14 + r1); // lwz @ 0x805DC2F8
    r28 = *(0x10 + r1); // lwz @ 0x805DC2FC
}