/* Function at 0x808AC704, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_808AC704(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808AC710
    r27 = r3;
    r30 = *(4 + r3); // lha @ 0x808AC718
    r28 = r4;
    /* li r29, 0 */ // 0x808AC720
    /* li r31, 0 */ // 0x808AC724
    /* b 0x808ac760 */ // 0x808AC728
    r0 = *(8 + r27); // lwz @ 0x808AC72C
    r3 = r28;
    r4 = r0 + r31; // 0x808AC734
    r4 = r4 + 2; // 0x808AC738
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x808ac758;
    /* mulli r0, r29, 0x74 */ // 0x808AC748
    r3 = *(8 + r27); // lwz @ 0x808AC74C
    /* lhzx r3, r3, r0 */ // 0x808AC750
    /* b 0x808ac76c */ // 0x808AC754
    r31 = r31 + 0x74; // 0x808AC758
    r29 = r29 + 1; // 0x808AC75C
}