/* Function at 0x805AC3BC, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AC3BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805AC3D0
    r30 = r3;
    FUN_805AC15C(); // bl 0x805AC15C
    if (==) goto 0x0x805ac3f8;
    r3 = *(0xe + r31); // lhz @ 0x805AC3E4
    r0 = r31 + 0x88; // 0x805AC3E8
    *(0xd0 + r30) = r3; // stw @ 0x805AC3EC
    *(0xd4 + r30) = r0; // stw @ 0x805AC3F0
    /* b 0x805ac404 */ // 0x805AC3F4
    /* li r0, 0 */ // 0x805AC3F8
    *(0xd0 + r30) = r0; // stw @ 0x805AC3FC
    *(0xd4 + r30) = r0; // stw @ 0x805AC400
    r3 = *(0 + r30); // lbz @ 0x805AC404
    r31 = *(0xc + r1); // lwz @ 0x805AC408
    r30 = *(8 + r1); // lwz @ 0x805AC40C
    r0 = *(0x14 + r1); // lwz @ 0x805AC410
    return;
}