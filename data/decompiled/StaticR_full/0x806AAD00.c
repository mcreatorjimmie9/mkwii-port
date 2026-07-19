/* Function at 0x806AAD00, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806AAD00(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AAD0C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AAD18
    r3 = r31 + 0x44; // 0x806AAD1C
    r4 = r4 + 0; // 0x806AAD20
    *(0 + r31) = r4; // stw @ 0x806AAD24
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* li r0, 0 */ // 0x806AAD2C
    *(0x54 + r31) = r0; // stb @ 0x806AAD30
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806AAD38
    r0 = *(0x14 + r1); // lwz @ 0x806AAD3C
    return;
}