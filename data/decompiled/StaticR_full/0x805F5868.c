/* Function at 0x805F5868, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F5868(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805F5874
    *(0xc + r1) = r31; // stw @ 0x805F5878
    r31 = r3;
    if (==) goto 0x0x805f5890;
    if (<=) goto 0x0x805f5890;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805F5894
    r0 = *(0x14 + r1); // lwz @ 0x805F5898
    return;
}