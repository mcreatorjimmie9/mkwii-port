/* Function at 0x8091C120, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8091C120(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8091C130
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8091C138
    r30 = r3;
    if (==) goto 0x0x8091c174;
    r3 = *(0x80c + r3); // lwz @ 0x8091C144
    if (==) goto 0x0x8091c154;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x808 + r30); // lwz @ 0x8091C154
    if (==) goto 0x0x8091c164;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x8091c174;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8091C178
    r30 = *(8 + r1); // lwz @ 0x8091C17C
    r0 = *(0x14 + r1); // lwz @ 0x8091C180
    return;
}