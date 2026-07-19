/* Function at 0x805AC638, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805AC638(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x805AC640
    *(0x14 + r1) = r0; // stw @ 0x805AC644
    *(0xc + r1) = r31; // stw @ 0x805AC648
    r31 = r4;
    /* li r4, 0 */ // 0x805AC650
    r0 = *(0 + r3); // lbz @ 0x805AC654
    if (==) goto 0x0x805ac670;
    r0 = *(0xd4 + r3); // lwz @ 0x805AC660
    if (==) goto 0x0x805ac670;
    /* li r4, 1 */ // 0x805AC66C
    if (==) goto 0x0x805ac694;
    r4 = r31;
    FUN_805AC420(r4, r4); // bl 0x805AC420
    r3 = r31;
    /* li r4, 0x27fc */ // 0x805AC684
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    *(0x27fc + r31) = r3; // stw @ 0x805AC68C
    /* li r5, 1 */ // 0x805AC690
    r31 = *(0xc + r1); // lwz @ 0x805AC694
    r3 = r5;
    r0 = *(0x14 + r1); // lwz @ 0x805AC69C
}