/* Function at 0x8070170C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8070170C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80701724
    r29 = r3;
    r31 = *(0x20 + r3); // lbz @ 0x8070172C
    if (==) goto 0x0x8070177c;
    r3 = *(0x758c + r3); // lwz @ 0x80701738
    r12 = *(0x18 + r3); // lwz @ 0x8070173C
    r12 = *(0x10 + r12); // lwz @ 0x80701740
    /* mtctr r12 */ // 0x80701744
    /* bctrl  */ // 0x80701748
    if (!=) goto 0x0x80701760;
    /* li r0, 0 */ // 0x80701754
    *(0x20 + r29) = r0; // stb @ 0x80701758
    /* b 0x8070176c */ // 0x8070175C
    r3 = *(0x758c + r29); // lwz @ 0x80701760
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80701770 */ // 0x80701768
    /* li r3, 0 */ // 0x8070176C
    if (==) goto 0x0x8070177c;
    /* b 0x80701828 */ // 0x80701778
    r4 = r30;
    /* li r3, 2 */ // 0x80701780
    /* li r5, 0 */ // 0x80701784
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x807017ac;
    FUN_805E3430(r5); // bl 0x805E3430
    *(0x1c + r29) = r3; // stw @ 0x8070179C
    r3 = r30;
}