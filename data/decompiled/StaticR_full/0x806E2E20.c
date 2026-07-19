/* Function at 0x806E2E20, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E2E20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806E2E28
    *(0x14 + r1) = r0; // stw @ 0x806E2E2C
    *(0xc + r1) = r31; // stw @ 0x806E2E30
    r0 = *(0 + r3); // lwz @ 0x806E2E34
    if (!=) goto 0x0x806e2e88;
    /* li r3, 0x1c8 */ // 0x806E2E40
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x806e2e80;
    /* li r4, 0 */ // 0x806E2E54
    *(0 + r3) = r4; // stb @ 0x806E2E58
}