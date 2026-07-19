/* Function at 0x8076FC9C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076FC9C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8076FCAC
    *(8 + r1) = r30; // stw @ 0x8076FCB0
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8076FCB8
    r4 = *(4 + r30); // lha @ 0x8076FCBC
    FUN_80770F48(); // bl 0x80770F48
    r0 = *(8 + r3); // lhz @ 0x8076FCC4
    *(6 + r30) = r0; // sth @ 0x8076FCC8
    r4 = *(4 + r30); // lha @ 0x8076FCCC
    r3 = *(0 + r31); // lwz @ 0x8076FCD0
    FUN_80770F48(); // bl 0x80770F48
    r0 = *(0xc + r3); // lwz @ 0x8076FCD8
    *(8 + r30) = r0; // stw @ 0x8076FCDC
    r31 = *(0xc + r1); // lwz @ 0x8076FCE0
    r30 = *(8 + r1); // lwz @ 0x8076FCE4
    r0 = *(0x14 + r1); // lwz @ 0x8076FCE8
    return;
}