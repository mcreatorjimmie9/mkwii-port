/* Function at 0x808EC9B8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808EC9B8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808EC9C4
    /* li r31, 0 */ // 0x808EC9C8
    r3 = r31;
    FUN_808F0FAC(r3); // bl 0x808F0FAC
    if (==) goto 0x0x808ec9e4;
    r3 = r31;
    /* b 0x808ec9f4 */ // 0x808EC9E0
    r31 = r31 + 1; // 0x808EC9E4
    if (<) goto 0x0x808ec9cc;
    /* li r3, -1 */ // 0x808EC9F0
    r0 = *(0x14 + r1); // lwz @ 0x808EC9F4
    r31 = *(0xc + r1); // lwz @ 0x808EC9F8
    return;
}