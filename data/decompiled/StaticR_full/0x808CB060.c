/* Function at 0x808CB060, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_808CB060(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x808CB068
    *(0x24 + r1) = r0; // stw @ 0x808CB06C
    /* stmw r27, 0xc(r1) */ // 0x808CB070
    r27 = r3;
    r3 = *(0 + r4); // lwz @ 0x808CB078
    if (==) goto 0x0x808cb0e0;
    r0 = *(0x1d4 + r3); // lwz @ 0x808CB084
    if (==) goto 0x0x808cb0e0;
    /* lis r3, 0 */ // 0x808CB090
    /* li r30, 1 */ // 0x808CB094
    r3 = *(0 + r3); // lwz @ 0x808CB098
    r0 = *(0x26 + r3); // lbz @ 0x808CB09C
    if (<) goto 0x0x808cb0ac;
    r30 = r0;
    /* li r28, 0 */ // 0x808CB0AC
    /* li r29, 0 */ // 0x808CB0B0
    /* lis r31, 0 */ // 0x808CB0B4
    /* b 0x808cb0d8 */ // 0x808CB0B8
    r3 = *(0 + r31); // lwz @ 0x808CB0BC
    r4 = r27;
    r0 = *(0x1d4 + r3); // lwz @ 0x808CB0C4
    r3 = r0 + r29; // 0x808CB0C8
    FUN_8087B82C(r4); // bl 0x8087B82C
    r29 = r29 + 0xc4; // 0x808CB0D0
    r28 = r28 + 1; // 0x808CB0D4
    if (<) goto 0x0x808cb0bc;
    r0 = *(0x24 + r1); // lwz @ 0x808CB0E4
    return;
}