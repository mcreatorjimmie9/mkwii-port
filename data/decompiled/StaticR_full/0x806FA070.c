/* Function at 0x806FA070, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806FA070(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* addis r5, r3, 1 */ // 0x806FA078
    /* li r31, 0 */ // 0x806FA084
    *(0x18 + r1) = r30; // stw @ 0x806FA088
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806FA090
    r29 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FA098
    *(-0x7650 + r5) = r31; // stb @ 0x806FA09C
    if (!=) goto 0x0x806fa0b8;
    /* li r0, 2 */ // 0x806FA0A8
    *(0x14 + r3) = r0; // stw @ 0x806FA0AC
    /* li r3, 0 */ // 0x806FA0B0
    /* b 0x806fa114 */ // 0x806FA0B4
    r3 = *(0x757c + r3); // lwz @ 0x806FA0B8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fa0d8;
    /* li r0, 6 */ // 0x806FA0C8
    *(0x14 + r29) = r0; // stw @ 0x806FA0CC
    /* li r3, 0 */ // 0x806FA0D0
    /* b 0x806fa114 */ // 0x806FA0D4
    /* li r7, 1 */ // 0x806FA0D8
}