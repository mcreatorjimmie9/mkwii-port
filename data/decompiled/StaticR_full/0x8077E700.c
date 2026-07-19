/* Function at 0x8077E700, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8077E700(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8077E714
    r0 = *(0xbc + r3); // lwz @ 0x8077E718
    if (<) goto 0x0x8077e774;
    /* li r5, -1 */ // 0x8077E724
    /* li r6, 0 */ // 0x8077E728
    *(0xb8 + r3) = r0; // sth @ 0x8077E72C
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc8 + r3); // lwz @ 0x8077E734
    *(0xbc + r3) = r5; // stw @ 0x8077E738
    r5 = *(0xcc + r3); // lwz @ 0x8077E73C
    *(0xc0 + r3) = r6; // stw @ 0x8077E740
    /* lhzx r0, r4, r0 */ // 0x8077E744
    /* mulli r0, r0, 0x1c */ // 0x8077E748
    r30 = r5 + r0; // 0x8077E74C
    r3 = r30 + 4; // 0x8077E750
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8077e79c;
    r3 = *(0xd0 + r31); // lwz @ 0x8077E760
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x8077e79c */ // 0x8077E770
    r4 = *(0xc0 + r3); // lwz @ 0x8077E774
    r0 = *(0xb8 + r3); // lhz @ 0x8077E778
    r4 = r4 + 1; // 0x8077E77C
    *(0xc0 + r3) = r4; // stw @ 0x8077E780
    r4 = *(0xc8 + r3); // lwz @ 0x8077E784
}