/* Function at 0x8083335C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8083335C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0x1c2 */ // 0x80833364
    *(0x14 + r1) = r0; // stw @ 0x80833368
    *(0xc + r1) = r31; // stw @ 0x8083336C
    r31 = r3;
    r3 = r3 + 0x88; // 0x80833374
    FUN_808420F0(r4, r3); // bl 0x808420F0
    r3 = r31;
    FUN_808236E0(r3, r3); // bl 0x808236E0
    r3 = r31 + 0x88; // 0x80833384
    /* li r4, 0xc */ // 0x80833388
    FUN_80842110(r3, r3, r4); // bl 0x80842110
    r0 = *(0x14 + r1); // lwz @ 0x80833390
    r31 = *(0xc + r1); // lwz @ 0x80833394
    return;
}