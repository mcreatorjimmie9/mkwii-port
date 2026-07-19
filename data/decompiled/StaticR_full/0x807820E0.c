/* Function at 0x807820E0, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807820E0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x807820F4
    r5 = r30 + 0; // 0x807820F8
    *(0x14 + r1) = r29; // stw @ 0x807820FC
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80782108
    /* lis r4, 0 */ // 0x8078210C
    r3 = r3 + 0; // 0x80782110
    *(0 + r29) = r3; // stw @ 0x80782114
    /* lis r31, 0 */ // 0x80782118
    r0 = *(0 + r4); // lbz @ 0x8078211C
    *(0xb4 + r29) = r0; // stb @ 0x80782120
    r0 = *(0 + r31); // lwz @ 0x80782124
    r3 = *(0 + r4); // lbz @ 0x80782128
    r0 = r3 + 1; // 0x80782130
    *(0 + r4) = r0; // stb @ 0x80782134
    if (!=) goto 0x0x807821a8;
    /* lis r3, 0 */ // 0x8078213C
    r3 = *(0 + r3); // lwz @ 0x80782140
    r0 = *(0x25 + r3); // lbz @ 0x80782144
    if (!=) goto 0x0x8078217c;
    /* li r3, 0x7c */ // 0x80782150
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80782170;
    r4 = r30 + 0; // 0x80782160
    /* li r5, 0 */ // 0x80782164
}