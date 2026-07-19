/* Function at 0x80863388, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80863388(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80863390
    *(0x14 + r1) = r0; // stw @ 0x80863394
    *(0xc + r1) = r31; // stw @ 0x80863398
    r0 = *(0 + r3); // lwz @ 0x8086339C
    if (!=) goto 0x0x80863468;
    /* li r3, 0xac */ // 0x808633A8
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80863460;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808633C0
    r3 = r31 + 0x18; // 0x808633C4
    r4 = r4 + 0; // 0x808633C8
}