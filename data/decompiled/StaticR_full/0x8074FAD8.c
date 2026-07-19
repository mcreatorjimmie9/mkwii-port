/* Function at 0x8074FAD8, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8074FAD8(int r3, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x8074FAE8
    r5 = r31 + 0; // 0x8074FAEC
    *(0x28 + r1) = r30; // stw @ 0x8074FAF0
    *(0x24 + r1) = r29; // stw @ 0x8074FAF4
    *(0x20 + r1) = r28; // stw @ 0x8074FAF8
    r28 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8074FB04
    /* li r30, 0 */ // 0x8074FB08
    r3 = r3 + 0; // 0x8074FB0C
    *(0 + r28) = r3; // stw @ 0x8074FB10
    /* li r3, 0x5c */ // 0x8074FB14
    *(0xb4 + r28) = r30; // stw @ 0x8074FB18
    FUN_805E3430(r3, r3); // bl 0x805E3430
}