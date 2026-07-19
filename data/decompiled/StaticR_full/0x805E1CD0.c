/* Function at 0x805E1CD0, size=132 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r17 */
/* Calls: 5 function(s) */

int FUN_805E1CD0(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r17 */
    /* lis r4, 0 */ // 0x805E1CD8
    *(0x74 + r1) = r0; // stw @ 0x805E1CDC
    /* stmw r17, 0x34(r1) */ // 0x805E1CE0
    r17 = r3;
    r3 = *(0 + r4); // lwz @ 0x805E1CE8
    r0 = *(0x1760 + r3); // lwz @ 0x805E1CEC
    if (!=) goto 0x0x805e1d00;
    FUN_805BFDBC(); // bl 0x805BFDBC
    /* b 0x805e1d14 */ // 0x805E1CFC
    if (!=) goto 0x0x805e1d10;
    FUN_805C05C8(); // bl 0x805C05C8
    /* b 0x805e1d14 */ // 0x805E1D0C
    FUN_805BF81C(); // bl 0x805BF81C
    /* lis r4, 0 */ // 0x805E1D14
    /* lis r3, 5 */ // 0x805E1D18
    r4 = *(0 + r4); // lwz @ 0x805E1D1C
    r3 = r3 + -0x5000; // 0x805E1D20
    /* lis r0, 0x32 */ // 0x805E1D24
    r4 = *(0x24 + r4); // lbz @ 0x805E1D28
    r18 = r4 * r3; // 0x805E1D2C
    if (<=) goto 0x0x805e1d3c;
    /* lis r18, 0x32 */ // 0x805E1D38
    FUN_805ABAFC(); // bl 0x805ABAFC
    r4 = r3;
    r3 = r18;
    r4 = *(0x18d4 + r4); // lwz @ 0x805E1D48
    /* li r5, 0 */ // 0x805E1D4C
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}