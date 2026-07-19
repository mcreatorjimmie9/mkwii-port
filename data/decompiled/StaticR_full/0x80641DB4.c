/* Function at 0x80641DB4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80641DB4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80641DBC
    *(0x14 + r1) = r0; // stw @ 0x80641DC0
    *(0xc + r1) = r31; // stw @ 0x80641DC4
    r0 = *(0 + r3); // lwz @ 0x80641DC8
    if (!=) goto 0x0x80641e58;
    /* li r3, 0x48 */ // 0x80641DD4
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80641e50;
    /* lis r4, 0 */ // 0x80641DE8
    r4 = r4 + 0; // 0x80641DEC
    *(0x10 + r3) = r4; // stw @ 0x80641DF0
    FUN_805E3430(r4, r4); // bl 0x805E3430
}