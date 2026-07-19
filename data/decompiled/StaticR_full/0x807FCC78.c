/* Function at 0x807FCC78, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FCC78(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCC84
    r31 = r3;
    FUN_8080F35C(); // bl 0x8080F35C
    r3 = *(0xa0 + r31); // lwz @ 0x807FCC90
    r3 = *(0 + r3); // lwz @ 0x807FCC94
    r0 = *(0x30 + r3); // lha @ 0x807FCC98
    if (!=) goto 0x0x807fccb0;
    /* lis r3, 0 */ // 0x807FCCA4
    r0 = *(0 + r3); // lwz @ 0x807FCCA8
    *(0xb4 + r31) = r0; // stw @ 0x807FCCAC
    r0 = *(0x14 + r1); // lwz @ 0x807FCCB0
    r31 = *(0xc + r1); // lwz @ 0x807FCCB4
    return;
}