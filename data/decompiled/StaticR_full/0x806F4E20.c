/* Function at 0x806F4E20, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806F4E20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806F4E30
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806F4E38
    r30 = r3;
    if (==) goto 0x0x806f4e5c;
    r3 = *(0x9d8 + r3); // lwz @ 0x806F4E44
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x806f4e5c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806F4E60
    r30 = *(8 + r1); // lwz @ 0x806F4E64
}