/* Function at 0x807A3B9C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

void FUN_807A3B9C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807A3BA8
    FUN_807A9818(); // bl 0x807A9818
    /* lis r31, 0 */ // 0x807A3BB0
    /* li r4, 1 */ // 0x807A3BB4
    r3 = *(0 + r31); // lwz @ 0x807A3BB8
    /* li r5, 0 */ // 0x807A3BBC
    FUN_807A9C14(r4, r5); // bl 0x807A9C14
    r3 = *(0 + r31); // lwz @ 0x807A3BC4
    FUN_807A9CE4(r4, r5); // bl 0x807A9CE4
    /* li r31, 0 */ // 0x807A3BCC
    FUN_805E3430(r5); // bl 0x805E3430
}