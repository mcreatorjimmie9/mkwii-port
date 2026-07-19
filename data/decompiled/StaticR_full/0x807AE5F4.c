/* Function at 0x807AE5F4, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807AE5F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807AE600
    r31 = r4;
    FUN_807B207C(); // bl 0x807B207C
    /* subf r3, r3, r31 */ // 0x807AE60C
    r31 = *(0xc + r1); // lwz @ 0x807AE610
    r0 = *(0x14 + r1); // lwz @ 0x807AE614
    return;
}