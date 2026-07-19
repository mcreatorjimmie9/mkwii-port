/* Function at 0x80735594, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80735594(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807355A0
    r31 = r3;
    r4 = *(0x2a0 + r3); // lwz @ 0x807355A8
    r3 = r4 + 0x74; // 0x807355AC
    FUN_805E3430(r3); // bl 0x805E3430
}