/* Function at 0x8079DF5C, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8079DF5C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x8079DF64
    *(0x24 + r1) = r0; // stw @ 0x8079DF68
    /* stfd f31, 0x18(r1) */ // 0x8079DF6C
    /* fmr f31, f1 */ // 0x8079DF70
    *(0x14 + r1) = r31; // stw @ 0x8079DF74
    /* lis r31, 0 */ // 0x8079DF78
    r3 = *(0 + r31); // lwz @ 0x8079DF7C
    r3 = *(0x5bc + r3); // lwz @ 0x8079DF80
    FUN_805E3430(); // bl 0x805E3430
}