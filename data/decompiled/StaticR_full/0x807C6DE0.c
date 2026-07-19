/* Function at 0x807C6DE0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C6DE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807C6DE8
    /* lis r5, 0 */ // 0x807C6DEC
    *(0x14 + r1) = r0; // stw @ 0x807C6DF0
    *(0xc + r1) = r31; // stw @ 0x807C6DF4
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807C6DFC
    r4 = *(0 + r4); // lha @ 0x807C6E00
    FUN_807C03BC(); // bl 0x807C03BC
    /* lis r4, 0 */ // 0x807C6E08
    r0 = *(0 + r4); // lha @ 0x807C6E0C
    r0 = r0 + r3; // 0x807C6E10
    *(0x184 + r31) = r0; // stw @ 0x807C6E14
    r31 = *(0xc + r1); // lwz @ 0x807C6E18
    r0 = *(0x14 + r1); // lwz @ 0x807C6E1C
    return;
}