/* Function at 0x807318E0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807318E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0x22 */ // 0x807318E8
    /* li r6, 0x23 */ // 0x807318EC
    *(0x14 + r1) = r0; // stw @ 0x807318F0
    /* li r7, 0 */ // 0x807318F4
    *(0xc + r1) = r31; // stw @ 0x807318F8
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80731900
    FUN_807315F0(r7); // bl 0x807315F0
    r4 = *(0x530 + r31); // lwz @ 0x80731908
    r3 = r31;
    /* li r5, 0x23 */ // 0x80731910
    /* li r6, 0x24 */ // 0x80731914
    /* li r7, 1 */ // 0x80731918
    FUN_807315F0(r3, r5, r6, r7); // bl 0x807315F0
    r0 = *(0x14 + r1); // lwz @ 0x80731920
    r31 = *(0xc + r1); // lwz @ 0x80731924
    return;
}