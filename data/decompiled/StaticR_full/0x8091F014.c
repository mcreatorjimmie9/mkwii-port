/* Function at 0x8091F014, size=92 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8091F014(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x8091F01C
    *(0x14 + r1) = r0; // stw @ 0x8091F020
    r4 = *(0 + r6); // lwz @ 0x8091F024
    if (!=) goto 0x0x8091f038;
    /* li r3, -1 */ // 0x8091F030
    /* b 0x8091f060 */ // 0x8091F034
    /* mulli r0, r4, 0xc */ // 0x8091F038
    /* lis r5, 0 */ // 0x8091F03C
    r4 = r4 + 1; // 0x8091F040
    *(0 + r6) = r4; // stw @ 0x8091F044
    r5 = r5 + 0; // 0x8091F048
    r4 = r3;
    r5 = r5 + r0; // 0x8091F050
    /* li r3, 0 */ // 0x8091F054
    FUN_8091EFA4(r5, r4, r3); // bl 0x8091EFA4
    /* li r3, 0 */ // 0x8091F05C
    r0 = *(0x14 + r1); // lwz @ 0x8091F060
    return;
}