/* Function at 0x805D93CC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805D93CC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 1 */ // 0x805D93D4
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805D93E8
    r29 = r4 + -0x7340; // 0x805D93EC
    *(0x10 + r1) = r28; // stw @ 0x805D93F0
    /* li r28, 0 */ // 0x805D93F4
    r31 = *(0x14 + r3); // lwz @ 0x805D93F8
    /* clrlwi r0, r28, 0x18 */ // 0x805D93FC
    r0 = r0 * r29; // 0x805D9400
    r3 = r31 + r0; // 0x805D9404
    r3 = r3 + 8; // 0x805D9408
    FUN_805D6E64(r3); // bl 0x805D6E64
    r28 = r28 + 1; // 0x805D9410
    if (<) goto 0x0x805d93fc;
    /* addis r3, r31, 2 */ // 0x805D941C
    /* li r4, 0 */ // 0x805D9420
    /* li r5, 0x3804 */ // 0x805D9424
    r3 = r3 + 0x3308; // 0x805D9428
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}