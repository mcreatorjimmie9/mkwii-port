/* Function at 0x8084714C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8084714C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80847168
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80847170
    r28 = r3;
    FUN_80843670(); // bl 0x80843670
    *(0x68 + r28) = r3; // stw @ 0x8084717C
    /* lfs f2, 0(r30) */ // 0x80847180
    /* lfs f0, 0(r29) */ // 0x80847184
    /* stfs f0, 0x3c(r28) */ // 0x80847188
    /* lfs f1, 4(r30) */ // 0x8084718C
    /* lfs f0, 4(r29) */ // 0x80847190
    /* stfs f0, 0x40(r28) */ // 0x80847194
    /* lfs f0, 8(r30) */ // 0x80847198
    /* lfs f3, 8(r29) */ // 0x8084719C
    /* stfs f3, 0x44(r28) */ // 0x808471A0
}