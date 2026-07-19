/* Function at 0x805C1C04, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805C1C04(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805C1C10
    *(0xc + r1) = r31; // stw @ 0x805C1C14
    r31 = r3;
    if (==) goto 0x0x805c1c2c;
    if (<=) goto 0x0x805c1c2c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805C1C30
    r0 = *(0x14 + r1); // lwz @ 0x805C1C34
    return;
}