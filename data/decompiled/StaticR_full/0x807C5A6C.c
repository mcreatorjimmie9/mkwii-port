/* Function at 0x807C5A6C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807C5A6C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C5A78
    r31 = r3;
    r3 = *(0x168 + r3); // lwz @ 0x807C5A80
    FUN_807C3B00(); // bl 0x807C3B00
    r3 = *(0x16c + r31); // lwz @ 0x807C5A88
    FUN_807C3B00(); // bl 0x807C3B00
    r3 = *(0x170 + r31); // lwz @ 0x807C5A90
    FUN_807C3B00(); // bl 0x807C3B00
    r0 = *(0x14 + r1); // lwz @ 0x807C5A98
    r31 = *(0xc + r1); // lwz @ 0x807C5A9C
    return;
}