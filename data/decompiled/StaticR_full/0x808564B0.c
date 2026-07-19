/* Function at 0x808564B0, size=48 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_808564B0(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r24 */
    /* lis r5, 0 */ // 0x808564B8
    *(0x74 + r1) = r0; // stw @ 0x808564BC
    /* stmw r24, 0x50(r1) */ // 0x808564C0
    r25 = r4;
    r24 = r3;
    r0 = *(0xc + r3); // lwz @ 0x808564CC
    *(0xc + r1) = r0; // stw @ 0x808564D4
    r4 = *(0 + r5); // lwz @ 0x808564D8
    FUN_805E3430(r3); // bl 0x805E3430
}