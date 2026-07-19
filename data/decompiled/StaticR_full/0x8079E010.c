/* Function at 0x8079E010, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8079E010(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x8079E018
    *(0x24 + r1) = r0; // stw @ 0x8079E01C
    /* stfd f31, 0x18(r1) */ // 0x8079E020
    /* fmr f31, f1 */ // 0x8079E024
    *(0x14 + r1) = r31; // stw @ 0x8079E028
    /* lis r31, 0 */ // 0x8079E02C
    /* stfs f1, 0x68(r3) */ // 0x8079E030
    r3 = *(0 + r31); // lwz @ 0x8079E034
    r3 = *(0x5bc + r3); // lwz @ 0x8079E038
    FUN_805E3430(); // bl 0x805E3430
}