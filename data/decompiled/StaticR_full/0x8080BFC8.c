/* Function at 0x8080BFC8, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8080BFC8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8080BFD8
    r5 = r31 + 0; // 0x8080BFDC
    *(0x18 + r1) = r30; // stw @ 0x8080BFE0
    *(0x14 + r1) = r29; // stw @ 0x8080BFE4
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8080BFF0
    /* li r3, 0x7c */ // 0x8080BFF4
    r4 = r4 + 0; // 0x8080BFF8
    *(0 + r29) = r4; // stw @ 0x8080BFFC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}