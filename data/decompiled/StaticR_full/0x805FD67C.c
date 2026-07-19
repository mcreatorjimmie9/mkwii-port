/* Function at 0x805FD67C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FD67C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805FD688
    *(0xc + r1) = r31; // stw @ 0x805FD68C
    r31 = r3;
    if (==) goto 0x0x805fd6a4;
    if (<=) goto 0x0x805fd6a4;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805FD6A8
    r0 = *(0x14 + r1); // lwz @ 0x805FD6AC
    return;
}