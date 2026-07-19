/* Function at 0x8079C1BC, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8079C1BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8079C1D0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8079C1D8
    r29 = r3;
    if (==) goto 0x0x8079c274;
    /* addic. r3, r3, 0x1c */ // 0x8079C1E4
    if (==) goto 0x0x8079c1f0;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r29, 0x18 */ // 0x8079C1F0
    if (==) goto 0x0x8079c1fc;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8079c264;
    /* lis r4, 0 */ // 0x8079C204
    /* lis r3, 0 */ // 0x8079C208
    r4 = r4 + 0; // 0x8079C20C
    *(0 + r29) = r4; // stw @ 0x8079C210
    r31 = *(0 + r3); // lwz @ 0x8079C214
    if (==) goto 0x0x8079c258;
    /* li r0, 0 */ // 0x8079C220
    *(0 + r3) = r0; // stw @ 0x8079C224
    if (==) goto 0x0x8079c258;
    /* addic. r3, r31, 0x1c */ // 0x8079C22C
    if (==) goto 0x0x8079c238;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r31, 0x18 */ // 0x8079C238
    if (==) goto 0x0x8079c244;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    /* li r4, -1 */ // 0x8079C248
    FUN_8079BEB4(r3, r4); // bl 0x8079BEB4
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8079C25C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8079c274;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8079C274
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8079C27C
    r29 = *(0x14 + r1); // lwz @ 0x8079C280
    r0 = *(0x24 + r1); // lwz @ 0x8079C284
    return;
}