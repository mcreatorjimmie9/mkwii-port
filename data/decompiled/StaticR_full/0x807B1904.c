/* Function at 0x807B1904, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B1904(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807B1914
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B191C
    r30 = r3;
    if (==) goto 0x0x807b1940;
    /* li r4, 0 */ // 0x807B1928
    FUN_807D01A4(r4); // bl 0x807D01A4
    if (<=) goto 0x0x807b1940;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807B1944
    r30 = *(8 + r1); // lwz @ 0x807B1948
    r0 = *(0x14 + r1); // lwz @ 0x807B194C
    return;
}