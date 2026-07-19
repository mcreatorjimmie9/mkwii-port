/* Function at 0x806EA58C, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EA58C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806EA59C
    *(8 + r1) = r30; // stw @ 0x806EA5A0
    if (==) goto 0x0x806ea5c4;
    if (==) goto 0x0x806ea5d0;
    if (==) goto 0x0x806ea5dc;
    if (==) goto 0x0x806ea5e8;
    /* b 0x806ea5f0 */ // 0x806EA5C0
    /* li r0, 9 */ // 0x806EA5C4
    /* li r30, -1 */ // 0x806EA5C8
    /* b 0x806ea5f0 */ // 0x806EA5CC
    /* li r0, 9 */ // 0x806EA5D0
    /* li r30, -2 */ // 0x806EA5D4
    /* b 0x806ea5f0 */ // 0x806EA5D8
    /* li r0, 6 */ // 0x806EA5DC
    /* li r30, -0xa */ // 0x806EA5E0
    /* b 0x806ea5f0 */ // 0x806EA5E4
    /* li r0, 6 */ // 0x806EA5E8
    /* li r30, -0x14 */ // 0x806EA5EC
    if (==) goto 0x0x806ea604;
    if (==) goto 0x0x806ea64c;
    /* b 0x806ea688 */ // 0x806EA600
    /* lis r3, 0 */ // 0x806EA604
    r31 = *(0 + r3); // lwz @ 0x806EA608
    r3 = r31 + 8; // 0x806EA60C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r0 = *(0x2c + r31); // lwz @ 0x806EA614
    if (==) goto 0x0x806ea640;
    /* addis r3, r30, -1 */ // 0x806EA620
    /* li r4, 1 */ // 0x806EA624
    r0 = r3 + -0x1558; // 0x806EA628
    *(0x2c + r31) = r4; // stw @ 0x806EA62C
    /* neg r3, r0 */ // 0x806EA630
    *(0x30 + r31) = r3; // stw @ 0x806EA634
    /* li r0, 7 */ // 0x806EA638
}