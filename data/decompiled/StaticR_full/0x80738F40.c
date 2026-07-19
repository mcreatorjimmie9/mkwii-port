/* Function at 0x80738F40, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80738F40(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80738F4C
    r31 = *(0x210 + r3); // lwz @ 0x80738F50
    if (==) goto 0x0x80738fac;
    r3 = r31 + 0x74; // 0x80738F5C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80738f74;
    /* li r3, 0 */ // 0x80738F6C
    /* b 0x80738f78 */ // 0x80738F70
    r3 = *(0xc + r3); // lwz @ 0x80738F74
}