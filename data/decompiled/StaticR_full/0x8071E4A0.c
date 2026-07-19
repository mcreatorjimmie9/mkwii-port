/* Function at 0x8071E4A0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8071E4A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8071E4B4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8071E4BC
    r29 = r3;
    if (==) goto 0x0x8071e5a0;
    /* lis r4, 0 */ // 0x8071E4C8
    /* li r0, 0 */ // 0x8071E4CC
    /* lis r31, 0 */ // 0x8071E4D0
    *(0 + r4) = r0; // stw @ 0x8071E4D4
    r4 = r31 + 0; // 0x8071E4D8
    /* li r5, 0xc */ // 0x8071E4DC
    /* li r6, 4 */ // 0x8071E4E0
    r3 = r3 + 0x87c; // 0x8071E4E4
    FUN_805E3430(r4, r5, r6, r3); // bl 0x805E3430
    r3 = r29 + 0x84c; // 0x8071E4EC
    r4 = r31 + 0; // 0x8071E4F0
    /* li r5, 0xc */ // 0x8071E4F4
    /* li r6, 4 */ // 0x8071E4F8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x7ec; // 0x8071E500
    r4 = r31 + 0; // 0x8071E504
    /* li r5, 0xc */ // 0x8071E508
}