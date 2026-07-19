/* Function at 0x8069CA34, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8069CA34(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069CA40
    r31 = r3;
    r3 = *(0x1880 + r3); // lwz @ 0x8069CA48
    FUN_80661124(); // bl 0x80661124
    r3 = *(0x1884 + r31); // lwz @ 0x8069CA50
    FUN_8066115C(); // bl 0x8066115C
    r0 = *(0x14 + r1); // lwz @ 0x8069CA58
    r31 = *(0xc + r1); // lwz @ 0x8069CA5C
    return;
}