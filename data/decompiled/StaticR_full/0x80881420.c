/* Function at 0x80881420, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80881420(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    /* lis r3, 0 */ // 0x8088142C
    *(0x14 + r1) = r0; // stw @ 0x80881430
    r4 = *(0x1a8 + r4); // lbz @ 0x80881434
    r3 = *(0 + r3); // lwz @ 0x80881438
    FUN_805C14C8(r4, r3); // bl 0x805C14C8
    r0 = *(0x14 + r1); // lwz @ 0x80881440
    /* clrlwi r3, r3, 0x18 */ // 0x80881444
    return;
}