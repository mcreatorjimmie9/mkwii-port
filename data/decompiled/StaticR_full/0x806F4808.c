/* Function at 0x806F4808, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806F4808(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806F481C
    r29 = r3;
    r0 = *(0 + r3); // lbz @ 0x806F4824
    if (!=) goto 0x0x806f48e4;
    /* li r4, 0 */ // 0x806F4830
    /* li r5, 0xc0 */ // 0x806F4834
    r3 = r3 + 8; // 0x806F4838
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r30 = r29 + 0xc8; // 0x806F4840
    /* li r31, 0 */ // 0x806F4844
    r3 = r30;
    /* li r4, 0 */ // 0x806F484C
    /* li r5, 0xc0 */ // 0x806F4850
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r31 = r31 + 1; // 0x806F4858
}