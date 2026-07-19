/* Function at 0x8091A0DC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8091A0DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8091A0E8
    *(0xc + r1) = r31; // stw @ 0x8091A0EC
    r31 = r3;
    if (==) goto 0x0x8091a114;
    /* lis r5, 0 */ // 0x8091A0F8
    r4 = *(0 + r5); // lwz @ 0x8091A100
    r0 = r4 + -1; // 0x8091A104
    *(0 + r5) = r0; // stw @ 0x8091A108
    if (<=) goto 0x0x8091a114;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8091A118
    r0 = *(0x14 + r1); // lwz @ 0x8091A11C
    return;
}