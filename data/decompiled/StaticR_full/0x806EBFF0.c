/* Function at 0x806EBFF0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806EBFF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806EBFF8
    *(0x14 + r1) = r0; // stw @ 0x806EBFFC
    *(0xc + r1) = r31; // stw @ 0x806EC000
    r31 = r3;
    r0 = *(0 + r4); // lwz @ 0x806EC008
    if (!=) goto 0x0x806ec0b0;
    /* li r3, 0x3f8 */ // 0x806EC014
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806ec0a8;
    *(0 + r3) = r31; // stw @ 0x806EC024
    /* li r0, 0 */ // 0x806EC028
    /* lis r4, 0 */ // 0x806EC02C
}