/* Function at 0x808BAD84, size=420 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_808BAD84(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808BADA0
    *(0x10 + r1) = r28; // stw @ 0x808BADA4
    r0 = *(8 + r3); // lwz @ 0x808BADA8
    if (!=) goto 0x0x808baf08;
    r28 = *(0x143c + r4); // lwz @ 0x808BADB4
    /* lis r29, 0 */ // 0x808BADB8
    *(0x23d4 + r3) = r28; // stw @ 0x808BADBC
    r4 = *(0 + r29); // lwz @ 0x808BADC0
    r3 = *(0 + r4); // lwz @ 0x808BADC4
    r0 = *(0 + r3); // lwz @ 0x808BADC8
    if (==) goto 0x0x808bae0c;
    if (==) goto 0x0x808bae0c;
    r3 = *(0x98 + r4); // lwz @ 0x808BADDC
    r3 = *(0x14c + r3); // lwz @ 0x808BADE0
    FUN_806622BC(); // bl 0x806622BC
    if (==) goto 0x0x808bae0c;
    r3 = *(0 + r29); // lwz @ 0x808BADF0
    /* lis r4, 0 */ // 0x808BADF4
    /* slwi r0, r28, 4 */ // 0x808BADF8
    r4 = r4 + 0; // 0x808BADFC
    r3 = *(0x98 + r3); // lwz @ 0x808BAE00
    /* lwzx r0, r4, r0 */ // 0x808BAE04
    *(0x14c + r3) = r0; // stw @ 0x808BAE08
    /* lis r29, 0 */ // 0x808BAE0C
    r3 = *(0 + r29); // lwz @ 0x808BAE10
    r3 = *(0 + r3); // lwz @ 0x808BAE14
    r3 = *(0 + r3); // lwz @ 0x808BAE18
    if (==) goto 0x0x808bae2c;
    if (!=) goto 0x0x808bae40;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6f */ // 0x808BAE34
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808baf08 */ // 0x808BAE3C
    FUN_808CF8D8(r3, r5, r4); // bl 0x808CF8D8
    if (!=) goto 0x0x808baeb0;
    /* lis r5, 0 */ // 0x808BAE4C
    /* lis r4, 0 */ // 0x808BAE50
    r3 = *(0 + r5); // lwz @ 0x808BAE54
    r4 = r4 + 0; // 0x808BAE58
    r0 = *(0x23d4 + r30); // lwz @ 0x808BAE5C
    *(0x1778 + r3) = r0; // stw @ 0x808BAE60
    r0 = *(0x23d4 + r30); // lwz @ 0x808BAE64
    r3 = *(0 + r5); // lwz @ 0x808BAE68
    /* slwi r0, r0, 4 */ // 0x808BAE6C
    /* lwzx r0, r4, r0 */ // 0x808BAE70
    *(0x1758 + r3) = r0; // stw @ 0x808BAE74
    r3 = *(0 + r5); // lwz @ 0x808BAE78
    r0 = *(0x1760 + r3); // lwz @ 0x808BAE7C
    if (!=) goto 0x0x808bae9c;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x19 */ // 0x808BAE90
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808baf08 */ // 0x808BAE98
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6f */ // 0x808BAEA4
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808baf08 */ // 0x808BAEAC
    r3 = *(0 + r29); // lwz @ 0x808BAEB0
    r3 = *(0 + r3); // lwz @ 0x808BAEB4
    r3 = *(0x250 + r3); // lwz @ 0x808BAEB8
    if (==) goto 0x0x808baef8;
    /* lis r28, 0 */ // 0x808BAEC4
    r28 = r28 + 0; // 0x808BAEC8
    if (==) goto 0x0x808baef8;
    r12 = *(0 + r3); // lwz @ 0x808BAED0
    r12 = *(0x60 + r12); // lwz @ 0x808BAED4
    /* mtctr r12 */ // 0x808BAED8
    /* bctrl  */ // 0x808BAEDC
    /* b 0x808baef0 */ // 0x808BAEE0
    if (==) goto 0x0x808baef8;
    r3 = *(0 + r3); // lwz @ 0x808BAEEC
    if (!=) goto 0x0x808baee4;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6f */ // 0x808BAF00
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808BAF08
    r31 = *(0x1c + r1); // lwz @ 0x808BAF0C
    r30 = *(0x18 + r1); // lwz @ 0x808BAF10
    r29 = *(0x14 + r1); // lwz @ 0x808BAF14
    r28 = *(0x10 + r1); // lwz @ 0x808BAF18
    return;
}