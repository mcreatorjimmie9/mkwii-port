/* Function at 0x8071B780, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8071B780(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8071B794
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8071B79C
    r29 = r3;
    if (==) goto 0x0x8071b804;
    /* lis r4, 0 */ // 0x8071B7A8
    /* lis r31, 0 */ // 0x8071B7AC
    r4 = r4 + 0; // 0x8071B7B0
    *(0 + r3) = r4; // stw @ 0x8071B7B4
    r3 = *(0xac + r3); // lwz @ 0x8071B7B8
    r4 = r31 + 0; // 0x8071B7BC
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb0 + r29); // lwz @ 0x8071B7C4
    r4 = r31 + 0; // 0x8071B7C8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb4 + r29); // lwz @ 0x8071B7D0
    r4 = r31 + 0; // 0x8071B7D4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb8 + r29); // lwz @ 0x8071B7DC
    r4 = r31 + 0; // 0x8071B7E0
}