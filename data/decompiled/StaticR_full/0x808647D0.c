/* Function at 0x808647D0, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808647D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808647E4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808647EC
    r29 = r3;
    if (==) goto 0x0x80864854;
    if (==) goto 0x0x80864844;
    /* lis r5, 0 */ // 0x808647FC
    /* lis r4, 0 */ // 0x80864800
    r5 = r5 + 0; // 0x80864804
    *(0 + r3) = r5; // stw @ 0x80864808
    r31 = *(0 + r4); // lwz @ 0x8086480C
    if (==) goto 0x0x80864838;
    /* li r0, 0 */ // 0x80864818
    *(0 + r4) = r0; // stw @ 0x8086481C
    if (==) goto 0x0x80864838;
    r3 = r31;
    /* li r4, -1 */ // 0x80864828
    FUN_808643BC(r3, r4); // bl 0x808643BC
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8086483C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80864854;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80864854
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8086485C
    r29 = *(0x14 + r1); // lwz @ 0x80864860
    r0 = *(0x24 + r1); // lwz @ 0x80864864
    return;
}