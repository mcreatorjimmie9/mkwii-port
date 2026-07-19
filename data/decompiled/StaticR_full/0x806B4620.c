/* Function at 0x806B4620, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B4620(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4628
    *(0x24 + r1) = r0; // stw @ 0x806B462C
    *(0x1c + r1) = r31; // stw @ 0x806B4630
    r3 = *(0 + r3); // lwz @ 0x806B4634
    r31 = *(0x98 + r3); // lwz @ 0x806B4638
    if (!=) goto 0x0x806b464c;
    /* li r0, 0 */ // 0x806B4644
    /* b 0x806b46d8 */ // 0x806B4648
    /* lis r7, 0 */ // 0x806B464C
    /* li r0, 0x73 */ // 0x806B4650
    r7 = r7 + 0; // 0x806B4654
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B465C
    *(9 + r1) = r5; // stb @ 0x806B4664
    r6 = *(0 + r7); // lbz @ 0x806B4668
    r5 = *(2 + r7); // lbz @ 0x806B466C
    *(8 + r1) = r6; // stb @ 0x806B4670
    *(0xa + r1) = r5; // stb @ 0x806B4674
    *(9 + r1) = r0; // stb @ 0x806B4678
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4690;
    /* li r0, 0 */ // 0x806B4688
    /* b 0x806b46d8 */ // 0x806B468C
    if (==) goto 0x0x806b46a4;
    r0 = *(-1 + r3); // lbz @ 0x806B4698
    if (!=) goto 0x0x806b46d4;
    /* lis r4, 0 */ // 0x806B46A4
    r4 = r4 + 0; // 0x806B46AC
    r4 = r4 + 0x1b; // 0x806B46B0
    /* crclr cr1eq */ // 0x806B46B4
    r3 = r3 + 2; // 0x806B46B8
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
}