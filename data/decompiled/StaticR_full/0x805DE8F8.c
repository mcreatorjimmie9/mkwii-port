/* Function at 0x805DE8F8, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DE8F8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x805DE908
    *(0xc + r1) = r31; // stw @ 0x805DE90C
    /* lis r31, 0 */ // 0x805DE910
    r31 = r31 + 0; // 0x805DE914
    if (==) goto 0x0x805de950;
    r6 = r31 + 0x320; // 0x805DE91C
    /* lis r4, 0 */ // 0x805DE920
    r8 = r3;
    r3 = r31 + 8; // 0x805DE928
    r4 = r4 + 0; // 0x805DE92C
    r6 = r6 + 0x1000; // 0x805DE930
    /* li r7, 0x1000 */ // 0x805DE934
    /* li r9, 1 */ // 0x805DE938
    FUN_805E3430(r3, r4, r6, r7, r9); // bl 0x805E3430
    if (!=) goto 0x0x805de988;
    /* li r3, 0 */ // 0x805DE948
    /* b 0x805de9b4 */ // 0x805DE94C
    r5 = r31 + 0x320; // 0x805DE950
    /* lis r4, 0 */ // 0x805DE954
    r8 = r3;
    r3 = r31 + 8; // 0x805DE95C
    r6 = r5 + 0x1000; // 0x805DE960
    r4 = r4 + 0; // 0x805DE964
}