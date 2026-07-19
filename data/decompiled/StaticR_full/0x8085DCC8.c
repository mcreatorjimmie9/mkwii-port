/* Function at 0x8085DCC8, size=132 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8085DCC8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x8085DCDC
    r30 = r3;
    r0 = *(0x23e + r3); // lbz @ 0x8085DCE4
    if (!=) goto 0x0x8085dd34;
    /* addic. r0, r1, 8 */ // 0x8085DCF0
    if (==) goto 0x0x8085dd04;
    r3 = *(0 + r4); // lwz @ 0x8085DCF8
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = *(0x28c + r30); // lbz @ 0x8085DD04
    if (==) goto 0x0x8085dd28;
    r3 = r30;
    r6 = r30 + 0x294; // 0x8085DD18
    /* li r5, 1 */ // 0x8085DD1C
    /* li r7, 0 */ // 0x8085DD20
    FUN_8085CBC8(r3, r4, r6, r5, r7); // bl 0x8085CBC8
    r4 = *(0 + r31); // lwz @ 0x8085DD28
    FUN_805E3430(r5, r7, r3); // bl 0x805E3430
    r0 = *(0x44 + r1); // lwz @ 0x8085DD34
    r31 = *(0x3c + r1); // lwz @ 0x8085DD38
    r30 = *(0x38 + r1); // lwz @ 0x8085DD3C
    return;
}