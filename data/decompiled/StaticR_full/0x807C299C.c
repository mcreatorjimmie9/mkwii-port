/* Function at 0x807C299C, size=104 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807C299C(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x58 + r1) = r30; // stw @ 0x807C29B0
    r30 = r3;
    r4 = *(0x14 + r3); // lwz @ 0x807C29B8
    FUN_807D9D8C(r3); // bl 0x807D9D8C
    r4 = *(0x14 + r30); // lwz @ 0x807C29C4
    FUN_807D9DE0(r3, r3); // bl 0x807D9DE0
    r4 = *(0x14 + r30); // lwz @ 0x807C29D0
    FUN_807D9E34(r3, r3); // bl 0x807D9E34
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    FUN_805A4498(r5, r3, r4, r5); // bl 0x805A4498
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
}