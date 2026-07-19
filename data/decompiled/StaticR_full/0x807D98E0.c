/* Function at 0x807D98E0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D98E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807D98EC
    *(0xc + r1) = r31; // stw @ 0x807D98F0
    r31 = r3;
    if (==) goto 0x0x807d9908;
    if (<=) goto 0x0x807d9908;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807D990C
    r0 = *(0x14 + r1); // lwz @ 0x807D9910
    return;
}