/* Function at 0x80810268, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80810268(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80810270
    *(0x14 + r1) = r0; // stw @ 0x80810278
    r5 = r5 + 0; // 0x8081027C
    *(0xc + r1) = r31; // stw @ 0x80810280
    r31 = r3;
    if (==) goto 0x0x808102bc;
    r0 = *(0 + r5); // lwz @ 0x8081028C
    if (==) goto 0x0x808102ac;
    /* li r0, 0 */ // 0x80810298
    *(0 + r5) = r0; // stw @ 0x8081029C
    *(4 + r5) = r0; // stw @ 0x808102A0
    *(8 + r5) = r0; // stw @ 0x808102A4
    *(0xc + r5) = r0; // stw @ 0x808102A8
    if (<=) goto 0x0x808102bc;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808102C0
    r0 = *(0x14 + r1); // lwz @ 0x808102C4
    return;
}