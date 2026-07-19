/* Function at 0x8074F35C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8074F35C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8074F368
    *(0xc + r1) = r31; // stw @ 0x8074F36C
    r31 = r3;
    if (==) goto 0x0x8074f390;
    /* lis r4, 0 */ // 0x8074F37C
    /* li r0, 0 */ // 0x8074F380
    *(0 + r4) = r0; // stb @ 0x8074F384
    if (<=) goto 0x0x8074f390;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8074F394
    r0 = *(0x14 + r1); // lwz @ 0x8074F398
    return;
}