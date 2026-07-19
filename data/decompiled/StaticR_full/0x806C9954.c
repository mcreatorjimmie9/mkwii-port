/* Function at 0x806C9954, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_806C9954(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0x3f */ // 0x806C995C
    /* li r5, 0 */ // 0x806C9960
    *(0x14 + r1) = r0; // stw @ 0x806C9964
    *(0xc + r1) = r31; // stw @ 0x806C9968
    /* lis r31, 0 */ // 0x806C996C
    r3 = *(0 + r31); // lwz @ 0x806C9970
    FUN_80698C44(r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806C9978
    /* li r4, 0 */ // 0x806C997C
    /* li r5, 0xff */ // 0x806C9980
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806C9988
    r31 = *(0xc + r1); // lwz @ 0x806C998C
    return;
}