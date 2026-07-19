/* Function at 0x807A3E48, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807A3E48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = r4 + -1; // 0x807A3E54
    *(0xc + r1) = r31; // stw @ 0x807A3E5C
    r31 = r3;
    if (>) goto 0x0x807a3e88;
    /* li r3, 0 */ // 0x807A3E68
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 1 */ // 0x807A3E70
    *(0x8a5 + r31) = r0; // stb @ 0x807A3E74
    /* li r3, 0 */ // 0x807A3E78
    /* li r4, 0 */ // 0x807A3E7C
    FUN_805E0580(r3, r4); // bl 0x805E0580
    /* b 0x807a3ebc */ // 0x807A3E84
    /* lis r3, 0 */ // 0x807A3E88
    /* li r5, 0 */ // 0x807A3E8C
    r4 = *(0 + r3); // lwz @ 0x807A3E90
    if (==) goto 0x0x807a3eb0;
    /* lis r3, 0 */ // 0x807A3E9C
    r0 = *(0 + r3); // lwz @ 0x807A3EA0
}