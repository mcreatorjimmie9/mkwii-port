/* Function at 0x8070833C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_8070833C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0x7a */ // 0x80708344
    /* li r5, 0 */ // 0x80708348
    *(0x14 + r1) = r0; // stw @ 0x8070834C
    *(0xc + r1) = r31; // stw @ 0x80708350
    /* lis r31, 0 */ // 0x80708354
    r3 = *(0 + r31); // lwz @ 0x80708358
    FUN_80698C44(r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x80708360
    /* li r4, 0 */ // 0x80708364
    /* li r5, 0xff */ // 0x80708368
    FUN_80698CD0(r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x80708370
    r31 = *(0xc + r1); // lwz @ 0x80708374
    return;
}