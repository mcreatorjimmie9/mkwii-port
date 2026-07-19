/* Function at 0x807E2E30, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807E2E30(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807E2E48
    r4 = r31 + 0xcc; // 0x807E2E4C
    *(0x24 + r1) = r29; // stw @ 0x807E2E50
    /* lis r29, 0 */ // 0x807E2E54
    r29 = r29 + 0; // 0x807E2E58
    FUN_805A4400(r4); // bl 0x805A4400
    /* lfs f0, 0(r29) */ // 0x807E2E60
    /* stfs f0, 0x18(r1) */ // 0x807E2E68
    FUN_805E3430(r3); // bl 0x805E3430
}