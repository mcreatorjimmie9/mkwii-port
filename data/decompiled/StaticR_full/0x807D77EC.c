/* Function at 0x807D77EC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D77EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D77F8
    r31 = r3;
    r4 = *(0x1fc + r3); // lwz @ 0x807D7800
    r0 = r4 + 1; // 0x807D7804
    *(0x1fc + r3) = r0; // stw @ 0x807D7808
    if (<=) goto 0x0x807d781c;
    r4 = r3 + 0x64; // 0x807D7814
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    r0 = *(0x20c + r31); // lbz @ 0x807D781C
    if (==) goto 0x0x807d7834;
    r3 = r31;
    r4 = r31 + 0x140; // 0x807D782C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D7834
    r31 = *(0xc + r1); // lwz @ 0x807D7838
    return;
}