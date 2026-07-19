/* Function at 0x808C260C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808C260C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808C2614
    /* li r4, 0x61 */ // 0x808C2618
    *(0x14 + r1) = r0; // stw @ 0x808C261C
    /* lfs f1, 0(r5) */ // 0x808C2620
    *(0xc + r1) = r31; // stw @ 0x808C2624
    FUN_808B39D8(r5, r4); // bl 0x808B39D8
    /* lis r4, 0 */ // 0x808C262C
    /* li r3, 0x41 */ // 0x808C2630
    r31 = *(0 + r4); // lwz @ 0x808C2634
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r31;
    /* li r5, 0 */ // 0x808C2644
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    r0 = *(0x14 + r1); // lwz @ 0x808C264C
    r31 = *(0xc + r1); // lwz @ 0x808C2650
    return;
}