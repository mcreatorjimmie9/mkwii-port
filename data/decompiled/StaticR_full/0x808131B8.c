/* Function at 0x808131B8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808131B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808131C0
    *(0xc + r1) = r31; // stw @ 0x808131C8
    *(8 + r1) = r30; // stw @ 0x808131CC
    r31 = *(0 + r4); // lwz @ 0x808131D0
    if (==) goto 0x0x80813254;
    /* li r0, 0 */ // 0x808131DC
    *(0 + r4) = r0; // stw @ 0x808131E0
    if (==) goto 0x0x80813254;
    if (==) goto 0x0x8081324c;
    /* lis r3, 0 */ // 0x808131EC
    r3 = r3 + 0; // 0x808131F0
    *(0 + r31) = r3; // stw @ 0x808131F4
    r30 = *(0 + r4); // lwz @ 0x808131F8
    if (==) goto 0x0x80813240;
    *(0 + r4) = r0; // stw @ 0x80813204
    if (==) goto 0x0x80813240;
    if (==) goto 0x0x80813238;
    *(0 + r30) = r3; // stw @ 0x80813210
    r3 = *(0 + r4); // lwz @ 0x80813214
    if (==) goto 0x0x8081322c;
    *(0 + r4) = r0; // stw @ 0x80813220
    /* li r4, 1 */ // 0x80813224
    FUN_8081326C(r4); // bl 0x8081326C
    r3 = r30;
    /* li r4, 0 */ // 0x80813230
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80813244
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x80813254
    r31 = *(0xc + r1); // lwz @ 0x80813258
    r30 = *(8 + r1); // lwz @ 0x8081325C
    return;
}