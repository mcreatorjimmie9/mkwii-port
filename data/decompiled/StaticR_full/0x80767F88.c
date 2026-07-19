/* Function at 0x80767F88, size=148 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80767F88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80767F98
    r31 = r31 + 0; // 0x80767F9C
    *(0xa8 + r1) = r30; // stw @ 0x80767FA0
    r30 = r3;
    *(0xa4 + r1) = r29; // stw @ 0x80767FA8
    r0 = *(0xb8 + r3); // lwz @ 0x80767FAC
    if (<) goto 0x0x80768008;
    /* li r5, -1 */ // 0x80767FB8
    /* li r6, 0 */ // 0x80767FBC
    *(0xb4 + r3) = r0; // sth @ 0x80767FC0
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc4 + r3); // lwz @ 0x80767FC8
    *(0xb8 + r3) = r5; // stw @ 0x80767FCC
    r5 = *(0xc8 + r3); // lwz @ 0x80767FD0
    *(0xbc + r3) = r6; // stw @ 0x80767FD4
    /* lhzx r0, r4, r0 */ // 0x80767FD8
    /* mulli r0, r0, 0x1c */ // 0x80767FDC
    r29 = r5 + r0; // 0x80767FE0
    r3 = r29 + 4; // 0x80767FE4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80768030;
    r3 = *(0xcc + r30); // lwz @ 0x80767FF4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80768030 */ // 0x80768004
    r4 = *(0xbc + r3); // lwz @ 0x80768008
    r0 = *(0xb4 + r3); // lhz @ 0x8076800C
    r4 = r4 + 1; // 0x80768010
    *(0xbc + r3) = r4; // stw @ 0x80768014
    r4 = *(0xc4 + r3); // lwz @ 0x80768018
}