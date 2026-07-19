/* Function at 0x808B2750, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808B2750(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808B2764
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808B276C
    r29 = r3;
    if (==) goto 0x0x808b27b0;
    /* lis r4, 0 */ // 0x808B2778
    /* lis r31, 0 */ // 0x808B277C
    r4 = r4 + 0; // 0x808B2780
    *(0 + r3) = r4; // stw @ 0x808B2784
    r3 = *(0x24 + r3); // lwz @ 0x808B2788
    r4 = r31 + 0; // 0x808B278C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0x28 + r29); // lwz @ 0x808B2794
    r4 = r31 + 0; // 0x808B2798
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x808b27b0;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808B27B0
}