/* Function at 0x806784E8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806784E8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806784F4
    r31 = r3;
    r0 = *(0x44 + r3); // lwz @ 0x806784FC
    if (!=) goto 0x0x80678524;
    /* lis r3, 0 */ // 0x80678508
    r3 = *(0 + r3); // lwz @ 0x8067850C
    FUN_806E6A88(r3); // bl 0x806E6A88
    if (==) goto 0x0x80678524;
    r3 = r31;
    FUN_80671C64(r3); // bl 0x80671C64
    r0 = *(0x14 + r1); // lwz @ 0x80678524
    r31 = *(0xc + r1); // lwz @ 0x80678528
    return;
}