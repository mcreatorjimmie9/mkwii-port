/* Function at 0x808F6B08, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808F6B08(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808F6B1C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808F6B24
    r29 = r3;
    if (==) goto 0x0x808f6b9c;
    /* addic. r31, r3, 0x18 */ // 0x808F6B30
    if (==) goto 0x0x808f6b80;
    /* lis r3, 0 */ // 0x808F6B38
    /* lis r4, 0 */ // 0x808F6B3C
    r3 = r3 + 0; // 0x808F6B40
    *(0 + r31) = r3; // stw @ 0x808F6B44
    r3 = *(0 + r4); // lwz @ 0x808F6B48
    if (==) goto 0x0x808f6b74;
    /* li r0, 0 */ // 0x808F6B54
    *(0 + r4) = r0; // stw @ 0x808F6B58
    if (==) goto 0x0x808f6b74;
    r12 = *(0 + r3); // lwz @ 0x808F6B60
    /* li r4, 1 */ // 0x808F6B64
    r12 = *(8 + r12); // lwz @ 0x808F6B68
    /* mtctr r12 */ // 0x808F6B6C
    /* bctrl  */ // 0x808F6B70
    r3 = r31;
    /* li r4, 0 */ // 0x808F6B78
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x808F6B84
    FUN_805E35B8(r3, r4, r3, r4); // bl 0x805E35B8
    if (<=) goto 0x0x808f6b9c;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808F6B9C
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x808F6BA4
    r29 = *(0x14 + r1); // lwz @ 0x808F6BA8
    r0 = *(0x24 + r1); // lwz @ 0x808F6BAC
    return;
}