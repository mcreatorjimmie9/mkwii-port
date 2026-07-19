/* Function at 0x805E2B14, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805E2B14(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805E2B1C
    *(0x14 + r1) = r0; // stw @ 0x805E2B20
    *(0xc + r1) = r31; // stw @ 0x805E2B24
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x805E2B2C
    FUN_805BF81C(r4); // bl 0x805BF81C
    r3 = r31;
    /* li r4, 0 */ // 0x805E2B38
    FUN_805AABB0(r3, r4); // bl 0x805AABB0
    r0 = *(0x14 + r1); // lwz @ 0x805E2B40
    r31 = *(0xc + r1); // lwz @ 0x805E2B44
    return;
}