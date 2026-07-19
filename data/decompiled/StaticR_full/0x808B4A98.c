/* Function at 0x808B4A98, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808B4A98(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808B4AB0
    FUN_808CFA50(); // bl 0x808CFA50
    r12 = *(0 + r30); // lwz @ 0x808B4AB8
    /* clrlwi r29, r3, 0x18 */ // 0x808B4ABC
    r3 = r30;
    r12 = *(0x70 + r12); // lwz @ 0x808B4AC4
    /* mtctr r12 */ // 0x808B4AC8
    /* bctrl  */ // 0x808B4ACC
    r30 = r3;
    if (!=) goto 0x0x808b4ae4;
    /* li r30, 0 */ // 0x808B4ADC
    /* b 0x808b4b34 */ // 0x808B4AE0
    /* lis r31, 0 */ // 0x808B4AE4
    r31 = r31 + 0; // 0x808B4AE8
    if (==) goto 0x0x808b4b30;
    r12 = *(0 + r3); // lwz @ 0x808B4AF0
    r12 = *(8 + r12); // lwz @ 0x808B4AF4
    /* mtctr r12 */ // 0x808B4AF8
    /* bctrl  */ // 0x808B4AFC
    /* b 0x808b4b18 */ // 0x808B4B00
    if (!=) goto 0x0x808b4b14;
    /* li r0, 1 */ // 0x808B4B0C
    /* b 0x808b4b24 */ // 0x808B4B10
    r3 = *(0 + r3); // lwz @ 0x808B4B14
    if (!=) goto 0x0x808b4b04;
    /* li r0, 0 */ // 0x808B4B20
    if (==) goto 0x0x808b4b30;
    /* b 0x808b4b34 */ // 0x808B4B2C
    /* li r30, 0 */ // 0x808B4B30
    /* mtctr r29 */ // 0x808B4B34
    if (<=) goto 0x0x808b4b5c;
    r0 = *(0xa4 + r30); // lbz @ 0x808B4B40
    if (==) goto 0x0x808b4b54;
    /* li r3, 0 */ // 0x808B4B4C
    /* b 0x808b4b60 */ // 0x808B4B50
    r30 = r30 + 0x5c; // 0x808B4B54
    if (counter-- != 0) goto 0x0x808b4b40;
    /* li r3, 1 */ // 0x808B4B5C
    r0 = *(0x24 + r1); // lwz @ 0x808B4B60
    r31 = *(0x1c + r1); // lwz @ 0x808B4B64
    r30 = *(0x18 + r1); // lwz @ 0x808B4B68
    r29 = *(0x14 + r1); // lwz @ 0x808B4B6C
    return;
}