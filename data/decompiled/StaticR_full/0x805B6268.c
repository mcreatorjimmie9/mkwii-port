/* Function at 0x805B6268, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805B6268(int r3, int r4, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r7;
    *(0x10 + r1) = r28; // stw @ 0x805B6284
    r28 = r3;
    r0 = *(0xa4 + r3); // lbz @ 0x805B628C
    if (!=) goto 0x0x805b62a0;
    /* li r3, 0 */ // 0x805B6298
    /* b 0x805b63c0 */ // 0x805B629C
    if (==) goto 0x0x805b62c0;
    r3 = r4;
    r7 = r8;
    /* li r8, 0 */ // 0x805B62B4
    FUN_805E3430(r3, r7, r4, r8); // bl 0x805E3430
    /* b 0x805b62d4 */ // 0x805B62BC
    r3 = r4;
    r7 = r8;
    /* li r8, 1 */ // 0x805B62CC
    FUN_805E3430(r3, r7, r4, r8); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x805b63bc;
    if (==) goto 0x0x805b62f4;
    r4 = r29 + 0x110; // 0x805B62E8
    FUN_805E3430(r4); // bl 0x805E3430
}