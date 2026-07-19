/* Function at 0x80804540, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80804540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80804550
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80804558
    r30 = r3;
    if (==) goto 0x0x808045a4;
    /* addic. r0, r3, 0xb0 */ // 0x80804564
    if (==) goto 0x0x80804594;
    r0 = *(0xb8 + r3); // lwz @ 0x8080456C
    /* lis r4, 0 */ // 0x80804570
    r4 = r4 + 0; // 0x80804574
    *(0xb0 + r3) = r4; // stw @ 0x80804578
    if (==) goto 0x0x80804594;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080458C
    *(0xb8 + r30) = r0; // stw @ 0x80804590
    if (<=) goto 0x0x808045a4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808045A8
    r30 = *(8 + r1); // lwz @ 0x808045AC
    r0 = *(0x14 + r1); // lwz @ 0x808045B0
}