/* Function at 0x80735618, size=240 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80735618(int r3, int r4)
{
    /* Stack frame: -288(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    /* li r4, 0 */ // 0x8073562C
    *(0x118 + r1) = r30; // stw @ 0x80735630
    r30 = r3;
    *(0x114 + r1) = r29; // stw @ 0x80735638
    *(0x110 + r1) = r28; // stw @ 0x8073563C
    r29 = *(0x724 + r3); // lwz @ 0x80735640
    if (<) goto 0x0x80735664;
    /* lis r3, 0 */ // 0x8073564C
    r3 = r3 + 0; // 0x80735650
    r0 = *(4 + r3); // lwz @ 0x80735654
    if (>=) goto 0x0x80735664;
    /* li r4, 1 */ // 0x80735660
    if (!=) goto 0x0x80735680;
    /* lis r3, 0 */ // 0x8073566C
    r12 = *(0 + r3); // lwzu @ 0x80735670
    r12 = *(0x18 + r12); // lwz @ 0x80735674
    /* mtctr r12 */ // 0x80735678
    /* bctrl  */ // 0x8073567C
    /* lis r28, 0 */ // 0x80735680
    /* slwi r0, r29, 2 */ // 0x80735684
    r28 = r28 + 0; // 0x80735688
    r4 = *(8 + r28); // lwz @ 0x80735690
    /* lwzx r4, r4, r0 */ // 0x80735694
    r4 = *(0x6c + r4); // lwz @ 0x80735698
    r12 = *(0 + r4); // lwz @ 0x8073569C
    r12 = *(0x20 + r12); // lwz @ 0x807356A0
    /* mtctr r12 */ // 0x807356A4
    /* bctrl  */ // 0x807356A8
    r29 = *(0x724 + r30); // lwz @ 0x807356AC
    /* li r3, 0 */ // 0x807356B0
    if (<) goto 0x0x807356cc;
    r0 = *(4 + r28); // lwz @ 0x807356BC
    if (>=) goto 0x0x807356cc;
    /* li r3, 1 */ // 0x807356C8
    if (!=) goto 0x0x807356e8;
    /* lis r3, 0 */ // 0x807356D4
    r12 = *(0 + r3); // lwzu @ 0x807356D8
    r12 = *(0x18 + r12); // lwz @ 0x807356DC
    /* mtctr r12 */ // 0x807356E0
    /* bctrl  */ // 0x807356E4
    /* lis r28, 0 */ // 0x807356E8
    /* slwi r0, r29, 2 */ // 0x807356EC
    r28 = r28 + 0; // 0x807356F0
    r4 = *(8 + r28); // lwz @ 0x807356F8
    /* lwzx r4, r4, r0 */ // 0x807356FC
    r4 = *(0x6c + r4); // lwz @ 0x80735700
    FUN_805E3430(r3); // bl 0x805E3430
}