/* Function at 0x806AB940, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806AB940(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AB94C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AB958
    r3 = r31 + 0x44; // 0x806AB95C
    r4 = r4 + 0; // 0x806AB960
    *(0 + r31) = r4; // stw @ 0x806AB964
    FUN_8066D3F0(r4, r3, r4); // bl 0x8066D3F0
    r3 = r31 + 0x1b8; // 0x806AB96C
    FUN_8066CFDC(r3, r4, r3); // bl 0x8066CFDC
    r3 = r31 + 0x32c; // 0x806AB974
    FUN_8066D278(r3, r3); // bl 0x8066D278
    r3 = r31 + 0x4a0; // 0x806AB97C
    FUN_80668134(r3, r3, r3); // bl 0x80668134
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806AB988
    r0 = *(0x14 + r1); // lwz @ 0x806AB98C
    return;
}