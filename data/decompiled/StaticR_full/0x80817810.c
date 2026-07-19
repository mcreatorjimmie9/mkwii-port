/* Function at 0x80817810, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80817810(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8081781C
    r31 = r4;
    r3 = *(0 + r4); // lwz @ 0x80817824
    /* li r4, 8 */ // 0x80817828
    FUN_80816C30(r4); // bl 0x80816C30
    *(0x1c + r31) = r3; // sth @ 0x80817830
    r31 = *(0xc + r1); // lwz @ 0x80817834
    r0 = *(0x14 + r1); // lwz @ 0x80817838
    return;
}