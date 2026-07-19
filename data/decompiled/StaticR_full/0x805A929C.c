/* Function at 0x805A929C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A929C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805A92A8
    *(0xc + r1) = r31; // stw @ 0x805A92AC
    r31 = r3;
    if (==) goto 0x0x805a92c4;
    if (<=) goto 0x0x805a92c4;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805A92C8
    r0 = *(0x14 + r1); // lwz @ 0x805A92CC
    return;
}