/* Function at 0x805CFE84, size=152 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805CFE84(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r0, r4, 0x1c */ // 0x805CFE90
    r3 = r3 + r0; // 0x805CFE98
    *(0x98 + r1) = r30; // stw @ 0x805CFE9C
    r31 = r3 + 8; // 0x805CFEA0
    r30 = r6;
    *(0x94 + r1) = r29; // stw @ 0x805CFEA8
    r29 = r5;
    r3 = r31;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (!=) goto 0x0x805cfec8;
    /* li r3, 0 */ // 0x805CFEC0
    /* b 0x805cff10 */ // 0x805CFEC4
    /* lis r3, 0 */ // 0x805CFEC8
    r3 = r3 + 0; // 0x805CFED0
    /* li r4, 0x80 */ // 0x805CFED4
    r3 = r3 + 0x117; // 0x805CFED8
    if (<) goto 0x0x805cfee8;
    /* li r5, 0 */ // 0x805CFEE0
    /* b 0x805cfef8 */ // 0x805CFEE4
    /* lis r5, 0 */ // 0x805CFEE8
    /* slwi r0, r29, 2 */ // 0x805CFEEC
    r5 = r5 + 0; // 0x805CFEF0
    /* lwzx r5, r5, r0 */ // 0x805CFEF4
    /* crclr cr1eq */ // 0x805CFEF8
    FUN_805E3430(r5, r5); // bl 0x805E3430
    r3 = r31;
    r5 = r30;
    FUN_805BA38C(r3, r5, r4); // bl 0x805BA38C
    r0 = *(0xa4 + r1); // lwz @ 0x805CFF10
    r31 = *(0x9c + r1); // lwz @ 0x805CFF14
    r30 = *(0x98 + r1); // lwz @ 0x805CFF18
}