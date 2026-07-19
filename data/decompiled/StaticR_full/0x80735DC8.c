/* Function at 0x80735DC8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80735DC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80735DD4
    r31 = r3;
    r4 = *(0x2a8 + r3); // lwz @ 0x80735DDC
    r3 = r4 + 0x74; // 0x80735DE0
    FUN_805E3430(r3); // bl 0x805E3430
}