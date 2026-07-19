/* Function at 0x8068558C, size=344 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_8068558C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x806855A0
    *(0x14 + r1) = r29; // stw @ 0x806855A4
    *(0x10 + r1) = r28; // stw @ 0x806855A8
    r28 = r3;
    r31 = r28;
    r29 = *(0x380 + r31); // lwz @ 0x806855B4
    if (==) goto 0x0x80685610;
    r3 = r29;
    FUN_806714E4(r3); // bl 0x806714E4
    r0 = *(8 + r29); // lwz @ 0x806855C8
    if (!=) goto 0x0x806855dc;
    r3 = r29;
    FUN_806713C8(r3); // bl 0x806713C8
    r0 = *(8 + r29); // lwz @ 0x806855DC
    if (!=) goto 0x0x80685610;
    r12 = *(0 + r29); // lwz @ 0x806855E8
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806855F0
    /* mtctr r12 */ // 0x806855F4
    /* bctrl  */ // 0x806855F8
    if (==) goto 0x0x80685610;
    r3 = r29;
    FUN_806712AC(r3); // bl 0x806712AC
    /* b 0x806855c0 */ // 0x8068560C
    r30 = r30 + 1; // 0x80685610
    r31 = r31 + 4; // 0x80685614
    if (<) goto 0x0x806855b4;
    r0 = *(0x389 + r28); // lbz @ 0x80685620
    /* li r31, 1 */ // 0x80685624
    if (!=) goto 0x0x80685640;
    r0 = *(0x38a + r28); // lbz @ 0x80685630
    if (!=) goto 0x0x80685640;
    /* li r31, 0 */ // 0x8068563C
    r3 = *(0 + r28); // lwz @ 0x80685640
    FUN_80694774(); // bl 0x80694774
    if (!=) goto 0x0x80685694;
    if (!=) goto 0x0x80685674;
    r0 = *(0x38b + r28); // lbz @ 0x80685658
    if (!=) goto 0x0x80685674;
    /* lis r3, 0 */ // 0x80685664
    r3 = *(0 + r3); // lwz @ 0x80685668
    FUN_807A255C(r3); // bl 0x807A255C
    /* b 0x80685694 */ // 0x80685670
    if (!=) goto 0x0x80685694;
    r0 = *(0x38b + r28); // lbz @ 0x8068567C
    if (!=) goto 0x0x80685694;
    /* lis r3, 0 */ // 0x80685688
    r3 = *(0 + r3); // lwz @ 0x8068568C
    FUN_807A24C8(r3); // bl 0x807A24C8
    r0 = *(0x389 + r28); // lbz @ 0x80685694
    /* li r3, 0 */ // 0x80685698
    *(0x38b + r28) = r31; // stb @ 0x8068569C
    if (!=) goto 0x0x806856b4;
    r0 = *(0x388 + r28); // lbz @ 0x806856A8
    if (==) goto 0x0x806856b8;
    /* li r3, 1 */ // 0x806856B4
    r0 = *(0x388 + r28); // lbz @ 0x806856B8
    *(0x38c + r28) = r3; // stb @ 0x806856BC
    *(0x38d + r28) = r0; // stb @ 0x806856C0
    r31 = *(0x1c + r1); // lwz @ 0x806856C4
    r30 = *(0x18 + r1); // lwz @ 0x806856C8
    r29 = *(0x14 + r1); // lwz @ 0x806856CC
    r28 = *(0x10 + r1); // lwz @ 0x806856D0
    r0 = *(0x24 + r1); // lwz @ 0x806856D4
    return;
}