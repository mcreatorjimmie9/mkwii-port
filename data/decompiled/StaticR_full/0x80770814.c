/* Function at 0x80770814, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80770814(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8077081C
    *(0x14 + r1) = r0; // stw @ 0x80770820
    r0 = *(0 + r3); // lwz @ 0x80770824
    if (!=) goto 0x0x80770854;
    /* li r3, 0x18 */ // 0x80770830
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8077084c;
    /* lis r4, 0 */ // 0x80770840
}