/* Function at 0x807AE330, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807AE330(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x807AE344
    *(0x14 + r1) = r29; // stw @ 0x807AE348
    r29 = r3;
    r31 = r29;
    /* b 0x807ae37c */ // 0x807AE354
    r3 = *(0x14 + r31); // lwz @ 0x807AE358
    if (==) goto 0x0x807ae374;
    r12 = *(0 + r3); // lwz @ 0x807AE364
    r12 = *(0x10 + r12); // lwz @ 0x807AE368
    /* mtctr r12 */ // 0x807AE36C
    /* bctrl  */ // 0x807AE370
    r31 = r31 + 4; // 0x807AE374
    r30 = r30 + 1; // 0x807AE378
    r0 = *(0x24 + r29); // lwz @ 0x807AE37C
    if (<) goto 0x0x807ae358;
    r0 = *(0x24 + r1); // lwz @ 0x807AE388
    r31 = *(0x1c + r1); // lwz @ 0x807AE38C
    r30 = *(0x18 + r1); // lwz @ 0x807AE390
    r29 = *(0x14 + r1); // lwz @ 0x807AE394
    return;
}