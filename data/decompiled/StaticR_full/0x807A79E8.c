/* Function at 0x807A79E8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A79E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807A79F4
    *(0xc + r1) = r31; // stw @ 0x807A79F8
    r31 = r3;
    if (==) goto 0x0x807a7a1c;
    /* lis r4, 0 */ // 0x807A7A08
    /* li r0, 0 */ // 0x807A7A0C
    *(0 + r4) = r0; // stw @ 0x807A7A10
    if (<=) goto 0x0x807a7a1c;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807A7A20
    r0 = *(0x14 + r1); // lwz @ 0x807A7A24
    return;
}