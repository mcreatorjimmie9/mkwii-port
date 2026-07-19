/* Function at 0x80782064, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80782064(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80782074
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078207C
    r30 = r3;
    if (==) goto 0x0x807820c4;
    /* lis r4, 0 */ // 0x80782088
    r4 = r4 + 0; // 0x8078208C
    *(0 + r3) = r4; // stw @ 0x80782090
    r3 = *(0xb0 + r3); // lwz @ 0x80782094
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8078209C
    *(0xb0 + r30) = r0; // stw @ 0x807820A0
    r3 = r30;
    /* li r4, 0 */ // 0x807820A8
    *(0xb4 + r30) = r0; // stw @ 0x807820AC
    FUN_807813D8(r3, r4); // bl 0x807813D8
}