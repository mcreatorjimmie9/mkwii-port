/* Function at 0x806CC8C8, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806CC8C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806CC8E0
    r29 = r4;
    r0 = *(0x90 + r3); // lbz @ 0x806CC8E8
    if (!=) goto 0x0x806cc958;
    /* mulli r0, r4, 0xc */ // 0x806CC8F4
    r5 = r3 + r0; // 0x806CC8F8
    r0 = *(0x5d + r5); // lbz @ 0x806CC8FC
    if (==) goto 0x0x806cc90c;
    /* b 0x806cc958 */ // 0x806CC908
    /* li r0, 1 */ // 0x806CC90C
    *(0x5d + r5) = r0; // stb @ 0x806CC910
    /* li r0, 0 */ // 0x806CC914
    /* lis r3, 0 */ // 0x806CC918
    *(0x5c + r5) = r0; // stb @ 0x806CC91C
    /* clrlwi r4, r4, 0x18 */ // 0x806CC920
    r3 = *(0 + r3); // lwz @ 0x806CC924
    FUN_806475D8(r3); // bl 0x806475D8
    /* li r31, 2 */ // 0x806CC92C
    FUN_808CFEE0(); // bl 0x808CFEE0
    if (==) goto 0x0x806cc940;
    /* li r31, 0 */ // 0x806CC93C
    /* lis r3, 0 */ // 0x806CC940
    r5 = r30;
    r3 = *(0 + r3); // lwz @ 0x806CC948
    r6 = r31;
    /* clrlwi r4, r29, 0x18 */ // 0x806CC950
    FUN_805D0D74(r3, r5, r6); // bl 0x805D0D74
    r0 = *(0x24 + r1); // lwz @ 0x806CC958
    r31 = *(0x1c + r1); // lwz @ 0x806CC95C
    r30 = *(0x18 + r1); // lwz @ 0x806CC960
    r29 = *(0x14 + r1); // lwz @ 0x806CC964
    return;
}