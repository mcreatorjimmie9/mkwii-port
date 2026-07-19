/* Function at 0x807937BC, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807937BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807937C4
    *(0xc + r1) = r31; // stw @ 0x807937CC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807937D4
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x807937DC
    FUN_805E3430(); // bl 0x805E3430
}