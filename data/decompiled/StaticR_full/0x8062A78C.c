/* Function at 0x8062A78C, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8062A78C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8062A79C
    /* lfs f2, 0(r31) */ // 0x8062A7A0
    *(0x18 + r1) = r30; // stw @ 0x8062A7A4
    /* lis r30, 0 */ // 0x8062A7A8
    /* fmr f3, f2 */ // 0x8062A7AC
    /* lfs f1, 0(r30) */ // 0x8062A7B0
    *(0x14 + r1) = r29; // stw @ 0x8062A7B4
    /* fmr f4, f2 */ // 0x8062A7B8
    r29 = r3;
    r3 = r3 + 0x24; // 0x8062A7C0
    FUN_805E3430(r3); // bl 0x805E3430
}