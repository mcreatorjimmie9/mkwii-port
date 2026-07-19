/* Function at 0x806B496C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B496C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806B4974
    *(0x24 + r1) = r0; // stw @ 0x806B4978
    *(0x1c + r1) = r31; // stw @ 0x806B497C
    r3 = *(0 + r3); // lwz @ 0x806B4980
    r31 = *(0x98 + r3); // lwz @ 0x806B4984
    if (!=) goto 0x0x806b4998;
    /* li r0, 0 */ // 0x806B4990
    /* b 0x806b4a24 */ // 0x806B4994
    /* lis r7, 0 */ // 0x806B4998
    /* li r0, 0x74 */ // 0x806B499C
    r7 = r7 + 0; // 0x806B49A0
    r3 = r31;
    r5 = *(1 + r7); // lbz @ 0x806B49A8
    *(9 + r1) = r5; // stb @ 0x806B49B0
    r6 = *(0 + r7); // lbz @ 0x806B49B4
    r5 = *(2 + r7); // lbz @ 0x806B49B8
    *(8 + r1) = r6; // stb @ 0x806B49BC
    *(0xa + r1) = r5; // stb @ 0x806B49C0
    *(9 + r1) = r0; // stb @ 0x806B49C4
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b49dc;
    /* li r0, 0 */ // 0x806B49D4
    /* b 0x806b4a24 */ // 0x806B49D8
    if (==) goto 0x0x806b49f0;
    r0 = *(-1 + r3); // lbz @ 0x806B49E4
    if (!=) goto 0x0x806b4a20;
    /* lis r4, 0 */ // 0x806B49F0
    r4 = r4 + 0; // 0x806B49F8
    r4 = r4 + 0x24; // 0x806B49FC
    /* crclr cr1eq */ // 0x806B4A00
}