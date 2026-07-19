/* Function at 0x806D4778, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806D4778(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806D4780
    *(0x14 + r1) = r0; // stw @ 0x806D4784
    *(0xc + r1) = r31; // stw @ 0x806D4788
    r31 = r3;
    r3 = r3 + 0x290; // 0x806D4790
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31;
    /* li r4, 0x50 */ // 0x806D479C
    /* li r5, -1 */ // 0x806D47A0
    FUN_806724B8(r3, r3, r4, r5); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x806D47A8
    r31 = *(0xc + r1); // lwz @ 0x806D47AC
    return;
}