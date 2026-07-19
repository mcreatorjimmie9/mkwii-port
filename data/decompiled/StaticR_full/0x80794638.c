/* Function at 0x80794638, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80794638(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80794648
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80794650
    r30 = r3;
    if (==) goto 0x0x807946a8;
    if (==) goto 0x0x80794698;
    /* li r4, 0 */ // 0x80794660
    r3 = r3 + 0x8c; // 0x80794664
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x80794698;
    /* lis r4, 0 */ // 0x80794674
    r3 = r30 + 0x80; // 0x80794678
    r4 = r4 + 0; // 0x8079467C
    /* li r5, 4 */ // 0x80794680
    /* li r6, 2 */ // 0x80794684
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80794690
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807946a8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807946AC
    r30 = *(8 + r1); // lwz @ 0x807946B0
    r0 = *(0x14 + r1); // lwz @ 0x807946B4
}