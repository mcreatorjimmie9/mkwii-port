/* Function at 0x8080E384, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8080E384(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8080E398
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8080E3A0
    r29 = r3;
    if (==) goto 0x0x8080e420;
    /* addic. r0, r3, 0xc8 */ // 0x8080E3AC
    /* lis r4, 0 */ // 0x8080E3B0
    /* li r31, 0 */ // 0x8080E3B4
    *(0 + r4) = r31; // stw @ 0x8080E3B8
    if (==) goto 0x0x8080e3e4;
    r0 = *(0xd0 + r3); // lwz @ 0x8080E3C0
    /* lis r4, 0 */ // 0x8080E3C4
    r4 = r4 + 0; // 0x8080E3C8
    *(0xc8 + r3) = r4; // stw @ 0x8080E3CC
    if (==) goto 0x0x8080e3e4;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    *(0xd0 + r29) = r31; // stw @ 0x8080E3E0
    /* addic. r0, r29, 0xb4 */ // 0x8080E3E4
    if (==) goto 0x0x8080e410;
    r3 = *(0xbc + r29); // lwz @ 0x8080E3EC
    /* lis r4, 0 */ // 0x8080E3F0
    r4 = r4 + 0; // 0x8080E3F4
    *(0xb4 + r29) = r4; // stw @ 0x8080E3F8
    if (==) goto 0x0x8080e410;
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080E408
    *(0xbc + r29) = r0; // stw @ 0x8080E40C
    if (<=) goto 0x0x8080e420;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8080E420
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8080E428
    r29 = *(0x14 + r1); // lwz @ 0x8080E42C
    r0 = *(0x24 + r1); // lwz @ 0x8080E430
}