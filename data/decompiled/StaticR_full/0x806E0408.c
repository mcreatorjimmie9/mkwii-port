/* Function at 0x806E0408, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E0408(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E0414
    r0 = *(8 + r3); // lwz @ 0x806E0418
    if (!=) goto 0x0x806e0464;
    /* lis r31, 0 */ // 0x806E0424
    r5 = *(0 + r31); // lwz @ 0x806E0428
    r0 = *(0x30 + r5); // lwz @ 0x806E042C
    if (!=) goto 0x0x806e0464;
    r0 = *(0x20 + r3); // lwz @ 0x806E0438
    if (<=) goto 0x0x806e0464;
    r4 = *(4 + r5); // lwz @ 0x806E0444
    r3 = r5;
    /* li r5, 0 */ // 0x806E044C
    FUN_80698C44(r3, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806E0454
    /* li r4, 0 */ // 0x806E0458
    /* li r5, 0xff */ // 0x806E045C
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806E0464
    r31 = *(0xc + r1); // lwz @ 0x806E0468
    return;
}