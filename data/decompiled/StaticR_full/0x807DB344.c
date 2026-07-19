/* Function at 0x807DB344, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DB344(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 0 */ // 0x807DB34C
    *(0xc + r1) = r31; // stw @ 0x807DB354
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DB35C
    r30 = r3;
    r0 = *(0x20 + r4); // lwz @ 0x807DB364
    if (>) goto 0x0x807db4d8;
    /* lis r5, 0 */ // 0x807DB370
    /* slwi r0, r0, 2 */ // 0x807DB374
    r5 = r5 + 0; // 0x807DB378
    /* lwzx r5, r5, r0 */ // 0x807DB37C
    /* mtctr r5 */ // 0x807DB380
    /* bctr  */ // 0x807DB384
    FUN_807DB4F4(r5); // bl 0x807DB4F4
    r6 = r3;
    /* b 0x807db4d8 */ // 0x807DB390
    r3 = *(0x34 + r3); // lwz @ 0x807DB394
    /* li r5, 0 */ // 0x807DB398
    if (==) goto 0x0x807db3b8;
}