/* Function at 0x805F7A5C, size=76 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F7A5C(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F7A6C
    r31 = r31 + 0; // 0x805F7A70
    *(0x48 + r1) = r30; // stw @ 0x805F7A74
    r30 = r4;
    /* lfs f2, 0(r31) */ // 0x805F7A7C
    *(0x44 + r1) = r29; // stw @ 0x805F7A80
    r29 = r3;
    /* fmr f3, f2 */ // 0x805F7A88
    /* lfs f1, 4(r31) */ // 0x805F7A8C
    *(0x40 + r1) = r28; // stw @ 0x805F7A90
    /* fmr f4, f2 */ // 0x805F7A94
    r28 = r5;
    *(0x20 + r3) = r4; // stw @ 0x805F7A9C
    r3 = r3 + 0xb0; // 0x805F7AA0
    FUN_805E3430(r3); // bl 0x805E3430
}