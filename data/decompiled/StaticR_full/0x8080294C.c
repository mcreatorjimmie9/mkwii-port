/* Function at 0x8080294C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080294C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80802958
    r31 = r3;
    r0 = *(0x100 + r3); // lwz @ 0x80802960
    /* addic. r0, r0, -1 */ // 0x80802964
    *(0x100 + r3) = r0; // stw @ 0x80802968
    if (!=) goto 0x0x80802974;
    FUN_80802E80(); // bl 0x80802E80
    r3 = *(8 + r31); // lwz @ 0x80802974
    /* li r4, 3 */ // 0x80802978
    r5 = *(0x108 + r31); // lbz @ 0x8080297C
    FUN_805EF304(r4); // bl 0x805EF304
    r0 = *(0x14 + r1); // lwz @ 0x80802984
    r31 = *(0xc + r1); // lwz @ 0x80802988
    return;
}