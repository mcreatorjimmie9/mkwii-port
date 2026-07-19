/* Function at 0x805E3024, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E3024(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805E302C
    *(0x14 + r1) = r0; // stw @ 0x805E3030
    r4 = r4 + 0; // 0x805E3034
    *(0xc + r1) = r31; // stw @ 0x805E3038
    r31 = r3;
    FUN_805A9E0C(r4, r4); // bl 0x805A9E0C
    /* lis r4, 0 */ // 0x805E3044
    r3 = r31;
    r4 = r4 + 0; // 0x805E304C
    *(0 + r31) = r4; // stw @ 0x805E3050
    r31 = *(0xc + r1); // lwz @ 0x805E3054
    r0 = *(0x14 + r1); // lwz @ 0x805E3058
    return;
}