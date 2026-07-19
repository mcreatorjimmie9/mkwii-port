/* Function at 0x807D327C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807D327C(int r3, int r4, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807D3284
    *(0x18 + r1) = r30; // stw @ 0x807D3290
    *(0x14 + r1) = r29; // stw @ 0x807D3294
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x807D329C
    r30 = *(0 + r3); // lbz @ 0x807D32A0
    if (==) goto 0x0x807d32f0;
    /* li r3, 0x44 */ // 0x807D32AC
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807d32ec;
    /* lis r4, 0 */ // 0x807D32C0
    /* lis r7, 0 */ // 0x807D32C4
    r0 = *(0 + r4); // lwz @ 0x807D32C8
    /* lis r4, 0 */ // 0x807D32CC
}