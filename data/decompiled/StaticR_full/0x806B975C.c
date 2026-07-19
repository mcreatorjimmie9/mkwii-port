/* Function at 0x806B975C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806B975C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806B9770
    r29 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r31, 0 */ // 0x806B977C
    r30 = r29 + 0x174; // 0x806B9780
    r31 = r31 + 0; // 0x806B9784
    *(0 + r29) = r31; // stw @ 0x806B9788
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    *(0 + r30) = r31; // stw @ 0x806B9794
    r3 = r29;
    r31 = *(0x1c + r1); // lwz @ 0x806B979C
    r30 = *(0x18 + r1); // lwz @ 0x806B97A0
    r29 = *(0x14 + r1); // lwz @ 0x806B97A4
    r0 = *(0x24 + r1); // lwz @ 0x806B97A8
    return;
}