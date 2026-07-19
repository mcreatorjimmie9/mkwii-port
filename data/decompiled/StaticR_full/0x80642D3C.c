/* Function at 0x80642D3C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80642D3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80642D48
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x80642D54
    /* li r3, 0x18 */ // 0x80642D58
    r4 = r4 + 0; // 0x80642D5C
    *(0xc + r31) = r4; // stw @ 0x80642D60
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}