/* Function at 0x8080334C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8080334C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80803358
    r31 = r3;
    r3 = *(8 + r3); // lwz @ 0x80803360
    r4 = *(0xc0 + r31); // lwz @ 0x80803364
    FUN_805ECA00(); // bl 0x805ECA00
    r3 = *(8 + r31); // lwz @ 0x8080336C
    FUN_805EEF04(); // bl 0x805EEF04
    /* li r0, 0 */ // 0x80803374
    *(0x120 + r31) = r0; // stb @ 0x80803378
    r3 = *(8 + r31); // lwz @ 0x8080337C
    /* li r4, 3 */ // 0x80803380
    /* li r5, 0 */ // 0x80803384
    FUN_805EF304(r4, r5); // bl 0x805EF304
    /* lis r3, 0 */ // 0x8080338C
    /* li r0, 3 */ // 0x80803390
    /* lfs f0, 0(r3) */ // 0x80803394
    r3 = r31;
    *(0xb0 + r31) = r0; // stw @ 0x8080339C
    /* li r4, 0 */ // 0x808033A0
    /* stfs f0, 0x110(r31) */ // 0x808033A4
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x808033AC
    r31 = *(0xc + r1); // lwz @ 0x808033B0
    return;
}