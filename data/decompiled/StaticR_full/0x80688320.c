/* Function at 0x80688320, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80688320(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8068832C
    r31 = r3;
    FUN_808CE454(); // bl 0x808CE454
    /* lis r3, 0 */ // 0x80688338
    /* lis r4, 0 */ // 0x8068833C
    /* li r0, 0 */ // 0x80688340
    *(0x1b2 + r31) = r0; // stb @ 0x80688344
    r3 = r3 + 0; // 0x80688348
    r4 = r4 + 0; // 0x8068834C
    *(0 + r31) = r3; // stw @ 0x80688350
    r3 = r31 + 0x1b8; // 0x80688354
    *(0x1a8 + r31) = r4; // stw @ 0x80688358
    *(0x1ac + r31) = r0; // sth @ 0x8068835C
    *(0x1ae + r31) = r0; // stb @ 0x80688360
    *(0x1b0 + r31) = r0; // sth @ 0x80688364
    FUN_806A0418(r3); // bl 0x806A0418
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80688370
    r0 = *(0x14 + r1); // lwz @ 0x80688374
    return;
}