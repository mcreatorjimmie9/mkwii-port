/* Function at 0x80685CCC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80685CCC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80685CD8
    r31 = r3;
    r4 = *(0x37c + r3); // lwz @ 0x80685CE0
    if (<=) goto 0x0x80685d00;
    r0 = r4 + -1; // 0x80685CEC
    /* slwi r0, r0, 2 */ // 0x80685CF0
    r3 = r3 + r0; // 0x80685CF4
    r3 = *(0x354 + r3); // lwz @ 0x80685CF8
    FUN_80671B38(); // bl 0x80671B38
    r3 = *(0x400 + r31); // lwz @ 0x80685D00
    if (==) goto 0x0x80685d10;
    FUN_80670990(); // bl 0x80670990
    /* lis r3, 0 */ // 0x80685D10
    /* li r4, 1 */ // 0x80685D14
    r3 = *(0 + r3); // lwz @ 0x80685D18
    r3 = r3 + 0x34; // 0x80685D1C
    FUN_8067FD78(r3, r4, r3); // bl 0x8067FD78
    r0 = *(0x14 + r1); // lwz @ 0x80685D24
    r31 = *(0xc + r1); // lwz @ 0x80685D28
    return;
}