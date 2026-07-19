/* Function at 0x805B3200, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B3200(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* mulli r31, r4, 0xec */ // 0x805B3210
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x805B321C
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805B3224
    r28 = r3;
    r3 = r3 + r31; // 0x805B322C
    r3 = *(8 + r3); // lwz @ 0x805B3230
    if (==) goto 0x0x805b3250;
    r12 = *(0 + r3); // lwz @ 0x805B323C
    r12 = *(0x10 + r12); // lwz @ 0x805B3240
    /* mtctr r12 */ // 0x805B3244
    /* bctrl  */ // 0x805B3248
    /* b 0x805b3254 */ // 0x805B324C
    /* li r3, -1 */ // 0x805B3250
    if (<) goto 0x0x805b3264;
    if (<=) goto 0x0x805b3298;
    if (==) goto 0x0x805b3298;
    r3 = r28 + r31; // 0x805B326C
    r0 = *(0xc6 + r3); // lhz @ 0x805B3270
    if (<=) goto 0x0x805b3284;
    /* li r3, 1 */ // 0x805B327C
    /* b 0x805b329c */ // 0x805B3280
    r0 = *(0xc8 + r3); // lhz @ 0x805B3284
    if (<=) goto 0x0x805b3298;
    /* li r3, 1 */ // 0x805B3290
    /* b 0x805b329c */ // 0x805B3294
    /* li r3, 0 */ // 0x805B3298
    r0 = *(0x24 + r1); // lwz @ 0x805B329C
    r31 = *(0x1c + r1); // lwz @ 0x805B32A0
    r30 = *(0x18 + r1); // lwz @ 0x805B32A4
    r29 = *(0x14 + r1); // lwz @ 0x805B32A8
    r28 = *(0x10 + r1); // lwz @ 0x805B32AC
    return;
}