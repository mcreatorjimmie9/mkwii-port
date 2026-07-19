/* Function at 0x808256F0, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_808256F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x808256F8
    *(0x24 + r1) = r0; // stw @ 0x808256FC
    /* stmw r27, 0xc(r1) */ // 0x80825700
    r27 = r3;
    /* li r30, 0 */ // 0x80825708
    /* li r29, 0 */ // 0x8082570C
    /* lis r31, 0 */ // 0x80825710
    r28 = *(0 + r4); // lbz @ 0x80825714
    /* b 0x80825740 */ // 0x80825718
    /* clrlwi r0, r29, 0x18 */ // 0x8082571C
    r3 = *(0 + r31); // lwz @ 0x80825720
    /* mulli r0, r0, 0x248 */ // 0x80825724
    r4 = r27;
    r3 = *(0x14 + r3); // lwz @ 0x8082572C
    r3 = r3 + r0; // 0x80825730
    FUN_80823FA0(r4); // bl 0x80823FA0
    r30 = r30 + r3; // 0x80825738
    r29 = r29 + 1; // 0x8082573C
    /* clrlwi r0, r29, 0x18 */ // 0x80825740
    if (<) goto 0x0x8082571c;
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x80825754
    return;
}