/* Function at 0x805BBD94, size=164 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805BBD94(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r3 = r4;
    *(0xac + r1) = r31; // stw @ 0x805BBDA8
    *(0xa8 + r1) = r30; // stw @ 0x805BBDAC
    r30 = r7;
    *(0xa4 + r1) = r29; // stw @ 0x805BBDB4
    r29 = r6;
    *(0xa0 + r1) = r28; // stw @ 0x805BBDBC
    r28 = r5;
    /* li r5, 1 */ // 0x805BBDC4
    FUN_805BAB90(r5); // bl 0x805BAB90
    r31 = r3;
    if (!=) goto 0x0x805bbe14;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_805BAE54(r4, r5, r6, r3); // bl 0x805BAE54
    r31 = r3;
    FUN_805BAD70(r6, r3, r3); // bl 0x805BAD70
    if (==) goto 0x0x805bbe08;
    /* li r31, 8 */ // 0x805BBE00
    /* b 0x805bbe14 */ // 0x805BBE04
    if (!=) goto 0x0x805bbe14;
    r31 = r3;
    r3 = r31;
    r31 = *(0xac + r1); // lwz @ 0x805BBE18
    r30 = *(0xa8 + r1); // lwz @ 0x805BBE1C
    r29 = *(0xa4 + r1); // lwz @ 0x805BBE20
    r28 = *(0xa0 + r1); // lwz @ 0x805BBE24
    r0 = *(0xb4 + r1); // lwz @ 0x805BBE28
    return;
}