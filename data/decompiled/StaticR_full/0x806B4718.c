/* Function at 0x806B4718, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B4718(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4720
    *(0x24 + r1) = r0; // stw @ 0x806B4724
    *(0x1c + r1) = r31; // stw @ 0x806B4728
    r3 = *(0 + r3); // lwz @ 0x806B472C
    r31 = *(0x98 + r3); // lwz @ 0x806B4730
    if (!=) goto 0x0x806b4744;
    /* li r0, 0 */ // 0x806B473C
    /* b 0x806b47d0 */ // 0x806B4740
    /* lis r7, 0 */ // 0x806B4744
    /* li r0, 0x6c */ // 0x806B4748
    r7 = r7 + 0; // 0x806B474C
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4754
    *(9 + r1) = r5; // stb @ 0x806B475C
    r6 = *(0 + r7); // lbz @ 0x806B4760
    r5 = *(2 + r7); // lbz @ 0x806B4764
    *(8 + r1) = r6; // stb @ 0x806B4768
    *(0xa + r1) = r5; // stb @ 0x806B476C
    *(9 + r1) = r0; // stb @ 0x806B4770
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4788;
    /* li r0, 0 */ // 0x806B4780
    /* b 0x806b47d0 */ // 0x806B4784
    if (==) goto 0x0x806b479c;
    r0 = *(-1 + r3); // lbz @ 0x806B4790
    if (!=) goto 0x0x806b47cc;
    /* lis r4, 0 */ // 0x806B479C
    r4 = r4 + 0; // 0x806B47A4
    r4 = r4 + 0x1e; // 0x806B47A8
    /* crclr cr1eq */ // 0x806B47AC
}