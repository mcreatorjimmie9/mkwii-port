/* Function at 0x805E2D90, size=128 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805E2D90(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E2D98
    *(0x14 + r1) = r0; // stw @ 0x805E2D9C
    r0 = *(0 + r3); // lbz @ 0x805E2DA0
    if (!=) goto 0x0x805e2db4;
    /* li r0, 1 */ // 0x805E2DAC
    *(0 + r3) = r0; // stb @ 0x805E2DB0
    /* lis r3, 0 */ // 0x805E2DB4
    r0 = *(0 + r3); // lwz @ 0x805E2DB8
    /* clrlwi. r0, r0, 0x1f */ // 0x805E2DBC
    if (!=) goto 0x0x805e2dd0;
    r0 = *(0 + r3); // lwz @ 0x805E2DC4
    r0 = r0 | 1; // 0x805E2DC8
    *(0 + r3) = r0; // stw @ 0x805E2DCC
    FUN_80818E48(); // bl 0x80818E48
    if (!=) goto 0x0x805e2de8;
    /* lis r3, 0 */ // 0x805E2DDC
    /* li r0, 1 */ // 0x805E2DE0
    *(0 + r3) = r0; // stb @ 0x805E2DE4
    /* lis r3, 0 */ // 0x805E2DE8
    r0 = *(0 + r3); // lbz @ 0x805E2DEC
    if (!=) goto 0x0x805e2e00;
    /* li r0, 1 */ // 0x805E2DF8
    *(0 + r3) = r0; // stb @ 0x805E2DFC
    r0 = *(0x14 + r1); // lwz @ 0x805E2E00
    return;
}