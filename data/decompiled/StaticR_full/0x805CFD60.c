/* Function at 0x805CFD60, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805CFD60(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* slwi r31, r4, 2 */ // 0x805CFD70
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x805CFD7C
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805CFD84
    r28 = r3;
    r7 = *(4 + r3); // lwz @ 0x805CFD8C
    /* lwzx r3, r7, r31 */ // 0x805CFD90
    FUN_805BA42C(); // bl 0x805BA42C
    if (==) goto 0x0x805cfdb8;
    r3 = *(4 + r28); // lwz @ 0x805CFDA0
    r4 = r29;
    r5 = r30;
    /* lwzx r3, r3, r31 */ // 0x805CFDAC
    FUN_805BA38C(r4, r5); // bl 0x805BA38C
    /* b 0x805cfdbc */ // 0x805CFDB4
    /* li r3, 0 */ // 0x805CFDB8
    r0 = *(0x24 + r1); // lwz @ 0x805CFDBC
    r31 = *(0x1c + r1); // lwz @ 0x805CFDC0
    r30 = *(0x18 + r1); // lwz @ 0x805CFDC4
    r29 = *(0x14 + r1); // lwz @ 0x805CFDC8
    r28 = *(0x10 + r1); // lwz @ 0x805CFDCC
    return;
}