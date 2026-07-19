/* Function at 0x805B4858, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805B4858(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B4868
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B4870
    r30 = r3;
    if (==) goto 0x0x805b48b8;
    /* lis r4, 0 */ // 0x805B487C
    r4 = r4 + 0; // 0x805B4880
    *(0 + r3) = r4; // stw @ 0x805B4884
    r3 = *(0x10 + r3); // lwz @ 0x805B4888
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(4 + r30); // lwz @ 0x805B4890
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(8 + r30); // lwz @ 0x805B4898
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0xc + r30); // lwz @ 0x805B48A0
    FUN_805E3430(); // bl 0x805E3430
}