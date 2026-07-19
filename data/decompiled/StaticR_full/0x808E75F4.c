/* Function at 0x808E75F4, size=64 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E75F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808E75FC
    /* lis r4, 0 */ // 0x808E7600
    *(0x84 + r1) = r0; // stw @ 0x808E7604
    r5 = r5 + 0; // 0x808E7608
    /* li r6, 0 */ // 0x808E760C
    *(0x7c + r1) = r31; // stw @ 0x808E7610
    r31 = r3;
    *(0x78 + r1) = r30; // stw @ 0x808E7618
    r3 = *(0 + r4); // lwz @ 0x808E761C
    /* li r4, 2 */ // 0x808E7620
    FUN_805CFD60(r4); // bl 0x805CFD60
    r30 = r3;
    /* li r3, 0x20 */ // 0x808E762C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}