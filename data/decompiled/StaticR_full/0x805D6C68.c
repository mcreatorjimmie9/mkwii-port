/* Function at 0x805D6C68, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805D6C68(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 1 */ // 0x805D6C70
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805D6C80
    r30 = r4 + -0x7340; // 0x805D6C84
    *(0x14 + r1) = r29; // stw @ 0x805D6C88
    /* li r29, 0 */ // 0x805D6C8C
    /* clrlwi r0, r29, 0x18 */ // 0x805D6C90
    r0 = r0 * r30; // 0x805D6C94
    r3 = r31 + r0; // 0x805D6C98
    r3 = r3 + 8; // 0x805D6C9C
    FUN_805D6E64(r3); // bl 0x805D6E64
    r29 = r29 + 1; // 0x805D6CA4
    if (<) goto 0x0x805d6c90;
    /* addis r3, r31, 2 */ // 0x805D6CB0
    /* li r4, 0 */ // 0x805D6CB4
    /* li r5, 0x3804 */ // 0x805D6CB8
    r3 = r3 + 0x3308; // 0x805D6CBC
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}