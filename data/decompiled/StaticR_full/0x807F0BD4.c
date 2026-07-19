/* Function at 0x807F0BD4, size=72 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807F0BD4(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807F0BE4
    /* lfs f0, 0(r31) */ // 0x807F0BE8
    *(0xb8 + r1) = r30; // stw @ 0x807F0BEC
    r30 = r3;
    r5 = *(0x20 + r3); // lwz @ 0x807F0BF4
    r4 = *(0x24 + r5); // lwz @ 0x807F0BFC
    r0 = *(0x28 + r5); // lwz @ 0x807F0C00
    *(0x18 + r1) = r0; // stw @ 0x807F0C04
    *(0x14 + r1) = r4; // stw @ 0x807F0C08
    r0 = *(0x2c + r5); // lwz @ 0x807F0C0C
    *(0x1c + r1) = r0; // stw @ 0x807F0C10
    /* stfs f0, 0x18(r1) */ // 0x807F0C14
    FUN_805E3430(); // bl 0x805E3430
}