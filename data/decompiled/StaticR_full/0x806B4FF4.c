/* Function at 0x806B4FF4, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806B4FF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806B4FFC
    *(0x1c + r1) = r31; // stw @ 0x806B5004
    *(0x18 + r1) = r30; // stw @ 0x806B5008
    r30 = r5;
    r3 = *(0 + r3); // lwz @ 0x806B5010
    r31 = *(0x98 + r3); // lwz @ 0x806B5014
    if (!=) goto 0x0x806b5028;
    /* li r3, 0 */ // 0x806B5020
    /* b 0x806b50bc */ // 0x806B5024
    /* lis r6, 0 */ // 0x806B5028
    r3 = r31;
    r6 = r6 + 0; // 0x806B5030
    r0 = *(1 + r6); // lbz @ 0x806B5034
    *(9 + r1) = r0; // stb @ 0x806B5038
    r5 = *(0 + r6); // lbz @ 0x806B503C
    r0 = *(2 + r6); // lbz @ 0x806B5040
    *(9 + r1) = r4; // stb @ 0x806B5044
    *(8 + r1) = r5; // stb @ 0x806B504C
    *(0xa + r1) = r0; // stb @ 0x806B5050
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x806b5068;
    /* li r3, 0 */ // 0x806B5060
    /* b 0x806b50bc */ // 0x806B5064
    if (==) goto 0x0x806b507c;
}