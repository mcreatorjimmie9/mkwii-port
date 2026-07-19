/* Function at 0x8080BD18, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080BD18(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080BD24
    r31 = r3;
    FUN_807F39BC(); // bl 0x807F39BC
    /* lis r4, 0 */ // 0x8080BD30
    r3 = r31;
    r4 = r4 + 0; // 0x8080BD38
    *(0 + r31) = r4; // stw @ 0x8080BD3C
    r31 = *(0xc + r1); // lwz @ 0x8080BD40
    r0 = *(0x14 + r1); // lwz @ 0x8080BD44
    return;
}