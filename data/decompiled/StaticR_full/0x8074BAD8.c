/* Function at 0x8074BAD8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8074BAD8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8074BAEC
    r30 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8074BAF8
    r3 = r3 + 0; // 0x8074BAFC
    *(0 + r30) = r3; // stw @ 0x8074BB00
    r3 = *(0 + r31); // lwz @ 0x8074BB04
    r0 = *(0x2e + r3); // lha @ 0x8074BB08
    *(0xb0 + r30) = r0; // stw @ 0x8074BB0C
    if (!=) goto 0x0x8074bb20;
    /* li r0, 0x258 */ // 0x8074BB18
    *(0xb0 + r30) = r0; // stw @ 0x8074BB1C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8074BB24
    r30 = *(8 + r1); // lwz @ 0x8074BB28
    r0 = *(0x14 + r1); // lwz @ 0x8074BB2C
    return;
}