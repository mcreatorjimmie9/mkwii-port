/* Function at 0x808B4954, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808B4954(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r3;
    /* li r5, 0 */ // 0x808B4960
    *(0x14 + r1) = r0; // stw @ 0x808B4964
    *(0xc + r1) = r31; // stw @ 0x808B4968
    /* lis r31, 0 */ // 0x808B496C
    r3 = *(0 + r31); // lwz @ 0x808B4970
    r4 = *(0x3f0 + r4); // lwz @ 0x808B4974
    FUN_80698C44(); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x808B497C
    /* li r4, 0 */ // 0x808B4980
    /* li r5, 0xff */ // 0x808B4984
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x808B498C
    r31 = *(0xc + r1); // lwz @ 0x808B4990
    return;
}