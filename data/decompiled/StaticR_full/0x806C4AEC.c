/* Function at 0x806C4AEC, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_806C4AEC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0x7c */ // 0x806C4AF4
    /* li r5, 0 */ // 0x806C4AF8
    *(0x14 + r1) = r0; // stw @ 0x806C4AFC
    *(0xc + r1) = r31; // stw @ 0x806C4B00
    /* lis r31, 0 */ // 0x806C4B04
    r3 = *(0 + r31); // lwz @ 0x806C4B08
    FUN_80698C44(r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806C4B10
    /* li r4, 0 */ // 0x806C4B14
    /* li r5, 0xff */ // 0x806C4B18
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806C4B20
    r31 = *(0xc + r1); // lwz @ 0x806C4B24
    return;
}