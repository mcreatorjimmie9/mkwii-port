/* Function at 0x807821F8, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807821F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80782208
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80782210
    r30 = r3;
    if (==) goto 0x0x80782278;
    /* lis r5, 0 */ // 0x8078221C
    /* lis r4, 0 */ // 0x80782220
    r5 = r5 + 0; // 0x80782224
    *(0 + r3) = r5; // stw @ 0x80782228
    r3 = *(0 + r4); // lwz @ 0x8078222C
    if (==) goto 0x0x8078225c;
    if (==) goto 0x0x80782250;
    r12 = *(0 + r3); // lwz @ 0x8078223C
    /* li r4, 1 */ // 0x80782240
    r12 = *(8 + r12); // lwz @ 0x80782244
    /* mtctr r12 */ // 0x80782248
    /* bctrl  */ // 0x8078224C
    /* lis r3, 0 */ // 0x80782250
    /* li r0, 0 */ // 0x80782254
    *(0 + r3) = r0; // stw @ 0x80782258
    /* lis r3, 0 */ // 0x80782260
    /* li r0, 0 */ // 0x80782264
    *(0 + r3) = r0; // stb @ 0x80782268
    if (<=) goto 0x0x80782278;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8078227C
    r30 = *(8 + r1); // lwz @ 0x80782280
    r0 = *(0x14 + r1); // lwz @ 0x80782284
    return;
}