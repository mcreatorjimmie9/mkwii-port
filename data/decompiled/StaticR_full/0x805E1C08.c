/* Function at 0x805E1C08, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805E1C08(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805E1C10
    *(0x14 + r1) = r0; // stw @ 0x805E1C14
    r4 = r4 + 0; // 0x805E1C18
    *(0xc + r1) = r31; // stw @ 0x805E1C1C
    r31 = r3;
    FUN_805A9E0C(r4, r4); // bl 0x805A9E0C
    /* lis r4, 0 */ // 0x805E1C28
    r3 = r31 + 0x254c; // 0x805E1C2C
    r4 = r4 + 0; // 0x805E1C30
    *(0 + r31) = r4; // stw @ 0x805E1C34
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}