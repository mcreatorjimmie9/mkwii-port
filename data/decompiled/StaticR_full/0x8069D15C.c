/* Function at 0x8069D15C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8069D15C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8069D16C
    *(8 + r1) = r30; // stw @ 0x8069D170
    r30 = r3;
    r3 = *(0x1880 + r3); // lwz @ 0x8069D178
    FUN_80661194(); // bl 0x80661194
    if (==) goto 0x0x8069d19c;
    r3 = *(0x1884 + r30); // lwz @ 0x8069D188
    FUN_806611CC(); // bl 0x806611CC
    if (==) goto 0x0x8069d19c;
    /* li r31, 1 */ // 0x8069D198
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8069D1A0
    r30 = *(8 + r1); // lwz @ 0x8069D1A4
    r0 = *(0x14 + r1); // lwz @ 0x8069D1A8
    return;
}