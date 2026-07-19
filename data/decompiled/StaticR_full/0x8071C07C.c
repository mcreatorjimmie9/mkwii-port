/* Function at 0x8071C07C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8071C07C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8071C090
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8071C098
    r29 = r3;
    if (==) goto 0x0x8071c100;
    /* lis r4, 0 */ // 0x8071C0A4
    /* lis r31, 0 */ // 0x8071C0A8
    r4 = r4 + 0; // 0x8071C0AC
    *(0 + r3) = r4; // stw @ 0x8071C0B0
    r3 = *(0xac + r3); // lwz @ 0x8071C0B4
    r4 = r31 + 0; // 0x8071C0B8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb0 + r29); // lwz @ 0x8071C0C0
    r4 = r31 + 0; // 0x8071C0C4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb4 + r29); // lwz @ 0x8071C0CC
    r4 = r31 + 0; // 0x8071C0D0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb8 + r29); // lwz @ 0x8071C0D8
    r4 = r31 + 0; // 0x8071C0DC
}