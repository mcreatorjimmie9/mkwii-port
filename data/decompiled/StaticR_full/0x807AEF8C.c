/* Function at 0x807AEF8C, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807AEF8C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807AEF9C
    r31 = r31 + 0; // 0x807AEFA0
    *(0x28 + r1) = r30; // stw @ 0x807AEFA4
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x807AEFAC
    r29 = r3;
    r5 = *(0x100 + r3); // lwz @ 0x807AEFB4
    r0 = *(0x104 + r3); // lwz @ 0x807AEFB8
    *(0xc + r1) = r0; // stw @ 0x807AEFBC
    *(8 + r1) = r5; // stw @ 0x807AEFC0
    r0 = *(0x108 + r3); // lwz @ 0x807AEFC4
    *(0x10 + r1) = r0; // stw @ 0x807AEFCC
    FUN_805E3430(r3); // bl 0x805E3430
}