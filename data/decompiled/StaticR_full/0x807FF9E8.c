/* Function at 0x807FF9E8, size=64 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807FF9E8(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lfs f0, 0x18(r4) */ // 0x807FF9F0
    *(0x58 + r1) = r30; // stw @ 0x807FF9FC
    r30 = r4;
    r4 = *(0xc + r4); // lwz @ 0x807FFA04
    *(0x54 + r1) = r29; // stw @ 0x807FFA08
    r29 = r3;
    r5 = *(0x15c + r3); // lwz @ 0x807FFA10
    /* stfs f0, 0x10(r5) */ // 0x807FFA14
    FUN_807FF480(); // bl 0x807FF480
    r4 = *(0 + r30); // lwz @ 0x807FFA1C
    FUN_805E3430(r3); // bl 0x805E3430
}