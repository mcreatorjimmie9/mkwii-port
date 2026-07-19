/* Function at 0x80771AA4, size=112 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80771AA4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x80771AB0
    r31 = r3;
    r7 = *(0 + r3); // lwz @ 0x80771AB8
    if (==) goto 0x0x80771bf0;
    r0 = *(4 + r3); // lwz @ 0x80771AC4
    if (==) goto 0x0x80771bf0;
    r6 = *(0x10 + r7); // lwz @ 0x80771AD0
    r0 = *(0x14 + r7); // lwz @ 0x80771AD8
    *(0x30 + r1) = r0; // stw @ 0x80771AE0
    r5 = r31 + 0x10; // 0x80771AE4
    *(0x2c + r1) = r6; // stw @ 0x80771AE8
    r0 = *(0x18 + r7); // lwz @ 0x80771AEC
    *(0x34 + r1) = r0; // stw @ 0x80771AF0
    FUN_805A4498(r5); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0 + r31); // lwz @ 0x80771B00
    /* lfs f0, 8(r3) */ // 0x80771B04
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80771B08
    if (<=) goto 0x0x80771b60;
    r0 = *(0x60 + r31); // lbz @ 0x80771B10
}