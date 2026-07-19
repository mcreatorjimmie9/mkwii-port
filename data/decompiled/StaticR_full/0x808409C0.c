/* Function at 0x808409C0, size=172 bytes */
/* Stack frame: 0 bytes */

void FUN_808409C0(int r3, int r4, int r5)
{
    /* neg r0, r5 */ // 0x808409C0
    /* cmpwi cr1, r4, 6 */
    r0 = r0 | r5; // 0x808409C8
    r0 = r0 >> 0x1f; // srawi
    /* andi. r0, r0, 0x12c */ // 0x808409D0
    if (==) goto 0x0x808409f4;
    if (==) goto 0x0x80840a10;
    if (==) goto 0x0x80840a2c;
    if (==) goto 0x0x80840a48;
    /* b 0x80840a64 */ // 0x808409F0
    r4 = *(0x34 + r3); // lwz @ 0x808409F4
    r0 = r4 ^ r0; // 0x808409F8
    r3 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x80840A00
    /* subf r0, r0, r3 */ // 0x80840A04
    /* srwi r3, r0, 0x1f */ // 0x80840A08
    return;
    r4 = *(0x38 + r3); // lwz @ 0x80840A10
    r0 = r4 ^ r0; // 0x80840A14
    r3 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x80840A1C
    /* subf r0, r0, r3 */ // 0x80840A20
    /* srwi r3, r0, 0x1f */ // 0x80840A24
    return;
    r4 = *(0x3c + r3); // lwz @ 0x80840A2C
    r0 = r4 ^ r0; // 0x80840A30
    r3 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x80840A38
    /* subf r0, r0, r3 */ // 0x80840A3C
    /* srwi r3, r0, 0x1f */ // 0x80840A40
    return;
    r4 = *(0x40 + r3); // lwz @ 0x80840A48
    r0 = r4 ^ r0; // 0x80840A4C
    r3 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x80840A54
    /* subf r0, r0, r3 */ // 0x80840A58
    /* srwi r3, r0, 0x1f */ // 0x80840A5C
    return;
    /* li r3, 0 */ // 0x80840A64
    return;
}