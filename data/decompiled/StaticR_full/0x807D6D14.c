/* Function at 0x807D6D14, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D6D14(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D6D24
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D6D2C
    r30 = r3;
    if (==) goto 0x0x807d6d7c;
    /* lis r4, 0 */ // 0x807D6D38
    r4 = r4 + 0; // 0x807D6D3C
    *(0x34 + r3) = r4; // stw @ 0x807D6D40
    r3 = *(0x1f4 + r3); // lwz @ 0x807D6D44
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0x208 + r30); // lwz @ 0x807D6D4C
    /* li r0, 0 */ // 0x807D6D50
    *(0x1f4 + r30) = r0; // stw @ 0x807D6D54
    if (==) goto 0x0x807d6d64;
    FUN_805E3430(); // bl 0x805E3430
}