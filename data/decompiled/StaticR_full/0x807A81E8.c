/* Function at 0x807A81E8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807A81E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807A81F0
    *(0x14 + r1) = r0; // stw @ 0x807A81F4
    *(0xc + r1) = r31; // stw @ 0x807A81F8
    r0 = *(0 + r3); // lwz @ 0x807A81FC
    if (!=) goto 0x0x807a8254;
    /* li r3, 0x44 */ // 0x807A8208
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807a824c;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A8220
    /* lis r4, 0 */ // 0x807A8224
    r3 = r3 + 0; // 0x807A8228
}