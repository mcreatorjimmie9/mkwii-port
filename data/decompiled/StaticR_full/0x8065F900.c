/* Function at 0x8065F900, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8065F900(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r0 = r4 + -2; // 0x8065F90C
    *(0x18 + r1) = r30; // stw @ 0x8065F918
    *(0x14 + r1) = r29; // stw @ 0x8065F91C
    r29 = r6;
    *(0x10 + r1) = r28; // stw @ 0x8065F924
    r28 = r4;
    if (<=) goto 0x0x8065f954;
    if (!=) goto 0x0x8065f948;
    /* slwi r0, r5, 2 */ // 0x8065F938
    r3 = r3 + r0; // 0x8065F93C
    r31 = *(0x54 + r3); // lwz @ 0x8065F940
    /* b 0x8065f984 */ // 0x8065F944
    r0 = r4 + -7; // 0x8065F948
    if (>) goto 0x0x8065f95c;
    r31 = *(0x64 + r3); // lwz @ 0x8065F954
    /* b 0x8065f984 */ // 0x8065F958
    if (!=) goto 0x0x8065f96c;
    r31 = *(0x68 + r3); // lwz @ 0x8065F964
    /* b 0x8065f984 */ // 0x8065F968
    if (!=) goto 0x0x8065f97c;
    r31 = *(0x6c + r3); // lwz @ 0x8065F974
    /* b 0x8065f984 */ // 0x8065F978
    /* li r3, 0 */ // 0x8065F97C
    /* b 0x8065f9ec */ // 0x8065F980
    if (!=) goto 0x0x8065f994;
    /* li r3, 0 */ // 0x8065F98C
    /* b 0x8065f9ec */ // 0x8065F990
    /* li r30, 0 */ // 0x8065F994
    /* b 0x8065f9dc */ // 0x8065F998
    r3 = r31;
    /* clrlwi r4, r30, 0x10 */ // 0x8065F9A0
    FUN_805ACCB0(r3); // bl 0x805ACCB0
    if (==) goto 0x0x8065f9d8;
    r0 = *(0 + r3); // lbz @ 0x8065F9B0
    if (==) goto 0x0x8065f9d8;
    r0 = *(0xc4 + r3); // lwz @ 0x8065F9BC
    if (!=) goto 0x0x8065f9d8;
    r0 = *(0xb8 + r3); // lwz @ 0x8065F9C8
    if (!=) goto 0x0x8065f9d8;
    /* b 0x8065f9ec */ // 0x8065F9D4
    r30 = r30 + 1; // 0x8065F9D8
    r0 = *(4 + r31); // lhz @ 0x8065F9DC
    if (<) goto 0x0x8065f99c;
    /* li r3, 0 */ // 0x8065F9E8
    r0 = *(0x24 + r1); // lwz @ 0x8065F9EC
    r31 = *(0x1c + r1); // lwz @ 0x8065F9F0
    r30 = *(0x18 + r1); // lwz @ 0x8065F9F4
    r29 = *(0x14 + r1); // lwz @ 0x8065F9F8
    r28 = *(0x10 + r1); // lwz @ 0x8065F9FC
    return;
}