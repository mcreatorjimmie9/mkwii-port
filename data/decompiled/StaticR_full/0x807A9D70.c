/* Function at 0x807A9D70, size=36 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r19 */
/* Calls: 1 function(s) */

int FUN_807A9D70(int r3, int r4)
{
    /* Stack frame: -192(r1) */
    /* saved r19 */
    /* li r4, 0 */ // 0x807A9D78
    *(0xc4 + r1) = r0; // stw @ 0x807A9D7C
    /* stmw r19, 0x8c(r1) */ // 0x807A9D80
    /* lis r19, 0 */ // 0x807A9D84
    /* li r27, 0 */ // 0x807A9D88
    FUN_805E3430(r3); // bl 0x805E3430
}