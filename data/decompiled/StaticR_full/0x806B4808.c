/* Function at 0x806B4808, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B4808(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4810
    *(0x24 + r1) = r0; // stw @ 0x806B4814
    *(0x1c + r1) = r31; // stw @ 0x806B4818
    r3 = *(0 + r3); // lwz @ 0x806B481C
    r31 = *(0x98 + r3); // lwz @ 0x806B4820
    if (!=) goto 0x0x806b4834;
    /* li r0, 0 */ // 0x806B482C
    /* b 0x806b48c0 */ // 0x806B4830
    /* lis r7, 0 */ // 0x806B4834
    /* li r0, 0x70 */ // 0x806B4838
    r7 = r7 + 0; // 0x806B483C
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B4844
    *(9 + r1) = r5; // stb @ 0x806B484C
    r6 = *(0 + r7); // lbz @ 0x806B4850
    r5 = *(2 + r7); // lbz @ 0x806B4854
    *(8 + r1) = r6; // stb @ 0x806B4858
    *(0xa + r1) = r5; // stb @ 0x806B485C
    *(9 + r1) = r0; // stb @ 0x806B4860
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b4878;
    /* li r0, 0 */ // 0x806B4870
    /* b 0x806b48c0 */ // 0x806B4874
    if (==) goto 0x0x806b488c;
    r0 = *(-1 + r3); // lbz @ 0x806B4880
    if (!=) goto 0x0x806b48bc;
    /* lis r4, 0 */ // 0x806B488C
    r4 = r4 + 0; // 0x806B4894
    r4 = r4 + 0x21; // 0x806B4898
    /* crclr cr1eq */ // 0x806B489C
    r3 = r3 + 2; // 0x806B48A0
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B48A8
    r0 = r3 + 1; // 0x806B48AC
    r0 = r4 | r0; // 0x806B48B0
    /* srwi r0, r0, 0x1f */ // 0x806B48B4
    /* b 0x806b48c0 */ // 0x806B48B8
    /* li r0, 0 */ // 0x806B48BC
    if (!=) goto 0x0x806b48d0;
    /* li r3, 0 */ // 0x806B48C8
    /* b 0x806b4958 */ // 0x806B48CC
    r3 = *(0xc + r1); // lwz @ 0x806B48D0
    if (>=) goto 0x0x806b491c;
    if (>=) goto 0x0x806b4904;
    if (==) goto 0x0x806b4958;
    if (>=) goto 0x0x806b4954;
    if (>=) goto 0x0x806b4954;
    if (>=) goto 0x0x806b4958;
    /* b 0x806b4954 */ // 0x806B4900
    if (==) goto 0x0x806b4958;
    if (>=) goto 0x0x806b4954;
}