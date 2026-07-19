/* Function at 0x8070D970, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8070D970(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8070D978
    /* lis r4, 0 */ // 0x8070D97C
    *(0x14 + r1) = r0; // stw @ 0x8070D980
    r5 = r5 + 0; // 0x8070D984
    *(0xc + r1) = r31; // stw @ 0x8070D988
    r31 = r3;
    *(0x18 + r3) = r5; // stw @ 0x8070D990
    r4 = *(0 + r4); // lwz @ 0x8070D994
    r0 = *(0x24 + r4); // lbz @ 0x8070D998
    *(0x14 + r3) = r0; // stw @ 0x8070D99C
    r3 = r0;
    FUN_805E3430(r3); // bl 0x805E3430
}