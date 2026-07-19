/* Function at 0x805AC6AC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805AC6AC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x805AC6B4
    *(0xc + r1) = r31; // stw @ 0x805AC6BC
    r31 = r4;
    /* li r4, 0 */ // 0x805AC6C4
    *(8 + r1) = r30; // stw @ 0x805AC6C8
    r30 = r3;
    r0 = *(0 + r3); // lbz @ 0x805AC6D0
    if (==) goto 0x0x805ac6ec;
    r0 = *(0xd4 + r3); // lwz @ 0x805AC6DC
    if (==) goto 0x0x805ac6ec;
    /* li r4, 1 */ // 0x805AC6E8
    if (==) goto 0x0x805ac72c;
    r3 = r30;
    r4 = r31;
    FUN_805AC420(r4, r3, r4); // bl 0x805AC420
    r0 = *(0xd0 + r30); // lwz @ 0x805AC700
    r3 = r31 + 0x88; // 0x805AC704
    *(0xe + r31) = r0; // sth @ 0x805AC708
    /* li r5, 0x2774 */ // 0x805AC70C
    r4 = *(0xd4 + r30); // lwz @ 0x805AC710
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0x27fc */ // 0x805AC71C
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    *(0x27fc + r31) = r3; // stw @ 0x805AC724
    /* li r5, 1 */ // 0x805AC728
    r31 = *(0xc + r1); // lwz @ 0x805AC72C
    r3 = r5;
}