/* Function at 0x8086ACB0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8086ACB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8086ACB8
    *(0x14 + r1) = r0; // stw @ 0x8086ACBC
    *(0xc + r1) = r31; // stw @ 0x8086ACC0
    r31 = r3;
    r3 = r3 + 0x88; // 0x8086ACC8
    FUN_80841FBC(r4, r3); // bl 0x80841FBC
    /* lis r3, 0 */ // 0x8086ACD0
    r4 = *(0x18 + r31); // lbz @ 0x8086ACD4
    r3 = *(0 + r3); // lwz @ 0x8086ACD8
    FUN_8082532C(r3, r3); // bl 0x8082532C
    r0 = *(0x14 + r1); // lwz @ 0x8086ACE0
    r31 = *(0xc + r1); // lwz @ 0x8086ACE4
    return;
}