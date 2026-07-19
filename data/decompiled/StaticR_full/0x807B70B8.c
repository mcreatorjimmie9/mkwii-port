/* Function at 0x807B70B8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807B70B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807B70C8
    r30 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807B70D0
    r3 = *(0 + r4); // lwz @ 0x807B70D4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807B70DC
    /* clrlwi r31, r3, 0x18 */ // 0x807B70E0
    r3 = *(0 + r4); // lwz @ 0x807B70E4
    /* li r4, 0 */ // 0x807B70E8
    r3 = *(0xc + r3); // lwz @ 0x807B70EC
    if (==) goto 0x0x807b7108;
    r0 = *(4 + r3); // lhz @ 0x807B70F8
    if (==) goto 0x0x807b7108;
    /* li r4, 1 */ // 0x807B7104
    if (==) goto 0x0x807b712c;
    r3 = *(0x3c + r30); // lwz @ 0x807B7110
    r4 = r31;
    FUN_807C22A8(r4, r4); // bl 0x807C22A8
    r3 = *(0x3c + r30); // lwz @ 0x807B711C
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x807B7124
    FUN_807D9920(r4, r4); // bl 0x807D9920
    r0 = *(0x14 + r1); // lwz @ 0x807B712C
    r31 = *(0xc + r1); // lwz @ 0x807B7130
    r30 = *(8 + r1); // lwz @ 0x807B7134
    return;
}