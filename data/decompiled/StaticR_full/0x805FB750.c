/* Function at 0x805FB750, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805FB750(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FB75C
    r31 = r3;
    FUN_8061E160(); // bl 0x8061E160
    r6 = r3;
    r3 = r31;
    r4 = r31 + 0xa8; // 0x805FB770
    r5 = r31 + 0xd8; // 0x805FB774
    r6 = r6 + 8; // 0x805FB778
    FUN_80620474(r6, r3, r4, r5, r6); // bl 0x80620474
    r0 = *(0x14 + r1); // lwz @ 0x805FB780
    r31 = *(0xc + r1); // lwz @ 0x805FB784
    return;
}