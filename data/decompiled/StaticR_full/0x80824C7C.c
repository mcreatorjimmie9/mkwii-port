/* Function at 0x80824C7C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80824C7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80824C8C
    *(8 + r1) = r30; // stw @ 0x80824C90
    if (==) goto 0x0x80824ce8;
    /* mulli r0, r3, 0x1c */ // 0x80824C98
    /* lis r4, 0 */ // 0x80824C9C
    /* lis r3, 0 */ // 0x80824CA0
    r4 = r4 + 0; // 0x80824CA4
    r3 = *(0 + r3); // lwz @ 0x80824CA8
    r4 = r4 + r0; // 0x80824CAC
    r0 = *(4 + r4); // lwz @ 0x80824CB0
    r31 = *(8 + r4); // lwz @ 0x80824CB4
    /* mulli r0, r0, 0x24 */ // 0x80824CB8
    r3 = r3 + r0; // 0x80824CBC
    r30 = r3 + 0x48; // 0x80824CC0
    r3 = r30;
    FUN_80822540(r3); // bl 0x80822540
    r0 = *(0xc + r30); // lwz @ 0x80824CCC
    /* srwi r4, r31, 0x1f */ // 0x80824CD0
    /* subf r0, r3, r0 */ // 0x80824CD4
    r3 = r0 >> 0x1f; // srawi
    /* subfc r0, r31, r0 */ // 0x80824CDC
    /* adde r3, r3, r4 */ // 0x80824CE0
    /* b 0x80824cec */ // 0x80824CE4
    /* li r3, 0 */ // 0x80824CE8
    r0 = *(0x14 + r1); // lwz @ 0x80824CEC
    r31 = *(0xc + r1); // lwz @ 0x80824CF0
    r30 = *(8 + r1); // lwz @ 0x80824CF4
    return;
}