/* Function at 0x80833248, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80833248(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80833254
    r31 = r3;
    FUN_808236E0(); // bl 0x808236E0
    r3 = r31 + 0x88; // 0x80833260
    /* li r4, 1 */ // 0x80833264
    FUN_80841FBC(r3, r4); // bl 0x80841FBC
    /* lis r3, 0 */ // 0x8083326C
    r0 = *(0 + r3); // lbz @ 0x80833270
    if (==) goto 0x0x80833288;
    /* li r3, 3 */ // 0x8083327C
    /* li r4, 0xc */ // 0x80833280
    FUN_808272B4(r3, r4); // bl 0x808272B4
    r0 = *(0x14 + r1); // lwz @ 0x80833288
    r31 = *(0xc + r1); // lwz @ 0x8083328C
    return;
}