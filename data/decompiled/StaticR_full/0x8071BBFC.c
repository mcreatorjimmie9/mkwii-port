/* Function at 0x8071BBFC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8071BBFC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8071BC10
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8071BC18
    r29 = r3;
    if (==) goto 0x0x8071bc80;
    /* lis r4, 0 */ // 0x8071BC24
    /* lis r31, 0 */ // 0x8071BC28
    r4 = r4 + 0; // 0x8071BC2C
    *(0 + r3) = r4; // stw @ 0x8071BC30
    r3 = *(0xac + r3); // lwz @ 0x8071BC34
    r4 = r31 + 0; // 0x8071BC38
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb0 + r29); // lwz @ 0x8071BC40
    r4 = r31 + 0; // 0x8071BC44
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb4 + r29); // lwz @ 0x8071BC4C
    r4 = r31 + 0; // 0x8071BC50
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb8 + r29); // lwz @ 0x8071BC58
    r4 = r31 + 0; // 0x8071BC5C
}