/* Function at 0x805CFDDC, size=148 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805CFDDC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x98 + r1) = r30; // stw @ 0x805CFDF0
    r30 = r4;
    *(0x94 + r1) = r29; // stw @ 0x805CFDF8
    r29 = r3;
    r6 = *(4 + r3); // lwz @ 0x805CFE00
    r3 = *(0x18 + r6); // lwz @ 0x805CFE04
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805cfe1c;
    /* li r3, 0 */ // 0x805CFE14
    /* b 0x805cfe68 */ // 0x805CFE18
    /* lis r3, 0 */ // 0x805CFE1C
    r3 = r3 + 0; // 0x805CFE24
    /* li r4, 0x80 */ // 0x805CFE28
    r3 = r3 + 0x10e; // 0x805CFE2C
    if (<) goto 0x0x805cfe3c;
    /* li r5, 0 */ // 0x805CFE34
    /* b 0x805cfe4c */ // 0x805CFE38
    /* lis r5, 0 */ // 0x805CFE3C
    /* slwi r0, r30, 2 */ // 0x805CFE40
    r5 = r5 + 0; // 0x805CFE44
    /* lwzx r5, r5, r0 */ // 0x805CFE48
    /* crclr cr1eq */ // 0x805CFE4C
    FUN_805E3430(r5, r5); // bl 0x805E3430
    r3 = *(4 + r29); // lwz @ 0x805CFE54
    r5 = r31;
    r3 = *(0x18 + r3); // lwz @ 0x805CFE60
    FUN_805BA38C(r5, r4); // bl 0x805BA38C
    r0 = *(0xa4 + r1); // lwz @ 0x805CFE68
    r31 = *(0x9c + r1); // lwz @ 0x805CFE6C
}