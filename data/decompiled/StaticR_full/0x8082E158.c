/* Function at 0x8082E158, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082E158(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8082E164
    r31 = r3;
    r3 = *(0x134 + r3); // lwz @ 0x8082E16C
    FUN_80842EA4(); // bl 0x80842EA4
    r0 = *(0x78 + r31); // lwz @ 0x8082E174
    r0 = r0 | 0x10; // 0x8082E178
    *(0x78 + r31) = r0; // stw @ 0x8082E17C
    r31 = *(0xc + r1); // lwz @ 0x8082E180
    r0 = *(0x14 + r1); // lwz @ 0x8082E184
    return;
}