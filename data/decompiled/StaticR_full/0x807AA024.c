/* Function at 0x807AA024, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807AA024(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807AA034
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807AA03C
    r30 = r3;
    if (==) goto 0x0x807aa094;
    if (==) goto 0x0x807aa084;
    /* li r4, 0 */ // 0x807AA04C
    r3 = r3 + 0x88; // 0x807AA050
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x807aa084;
    /* lis r4, 0 */ // 0x807AA060
    r3 = r30 + 0x80; // 0x807AA064
    r4 = r4 + 0; // 0x807AA068
    /* li r5, 4 */ // 0x807AA06C
    /* li r6, 1 */ // 0x807AA070
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807AA07C
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807aa094;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807AA098
    r30 = *(8 + r1); // lwz @ 0x807AA09C
    r0 = *(0x14 + r1); // lwz @ 0x807AA0A0
}