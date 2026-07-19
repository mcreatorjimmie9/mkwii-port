/* Function at 0x808B6464, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808B6464(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808B6470
    r31 = r3;
    r4 = *(0x48 + r3); // lwz @ 0x808B6478
    r3 = *(0 + r4); // lwz @ 0x808B647C
    FUN_80649F54(); // bl 0x80649F54
    r4 = *(0x48 + r31); // lwz @ 0x808B6484
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x808B648C
    FUN_808B3CF4(r3); // bl 0x808B3CF4
    r0 = *(0x14 + r1); // lwz @ 0x808B6494
    r31 = *(0xc + r1); // lwz @ 0x808B6498
    return;
}