/* Function at 0x80794394, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80794394(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8079439C
    *(0xc + r1) = r31; // stw @ 0x807943A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807943AC
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x807943B4
    FUN_805E3430(); // bl 0x805E3430
}