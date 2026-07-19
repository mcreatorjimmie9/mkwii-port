/* Function at 0x8070AF30, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8070AF30(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8070AF38
    /* lis r4, 0 */ // 0x8070AF3C
    *(0x14 + r1) = r0; // stw @ 0x8070AF40
    r5 = r5 + 0; // 0x8070AF44
    *(0xc + r1) = r31; // stw @ 0x8070AF48
    r31 = r3;
    *(0 + r3) = r5; // stw @ 0x8070AF50
    r3 = *(0 + r4); // lwz @ 0x8070AF54
    r0 = *(0xb68 + r3); // lwz @ 0x8070AF58
    if (!=) goto 0x0x8070af88;
    /* li r3, 0x7c */ // 0x8070AF64
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8070af84;
    /* lis r4, 0 */ // 0x8070AF74
    /* li r5, 0 */ // 0x8070AF78
    r4 = r4 + 0; // 0x8070AF7C
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
}