/* Function at 0x80782968, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80782968(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8078297C
    /* lis r30, 0 */ // 0x80782980
    r5 = r30 + 0; // 0x80782984
    *(0x14 + r1) = r29; // stw @ 0x80782988
    r29 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80782994
    /* li r3, 0x7c */ // 0x80782998
    r4 = r4 + 0; // 0x8078299C
    *(0 + r31) = r4; // stw @ 0x807829A0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}