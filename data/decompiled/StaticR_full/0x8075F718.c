/* Function at 0x8075F718, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8075F718(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8075F730
    r29 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = r29 + 0x58; // 0x8075F740
    /* li r5, 2 */ // 0x8075F744
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lis r31, 0 */ // 0x8075F74C
    /* lfs f0, 0(r31) */ // 0x8075F754
    /* stfs f0, 0x18(r1) */ // 0x8075F758
    FUN_805E3430(r3); // bl 0x805E3430
}