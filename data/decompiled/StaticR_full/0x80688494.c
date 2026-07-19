/* Function at 0x80688494, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80688494(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806884A0
    r31 = r3;
    FUN_808CE454(); // bl 0x808CE454
    /* lis r4, 0 */ // 0x806884AC
    r3 = r31;
    r4 = r4 + 0; // 0x806884B4
    *(0 + r31) = r4; // stw @ 0x806884B8
    r31 = *(0xc + r1); // lwz @ 0x806884BC
    r0 = *(0x14 + r1); // lwz @ 0x806884C0
    return;
}