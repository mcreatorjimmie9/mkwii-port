/* Function at 0x806FA6D0, size=84 bytes */
/* Stack frame: 896 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806FA6D0(int r3, int r4, int r5)
{
    /* Stack frame: -896(r1) */
    /* saved r26 */
    /* stmw r26, 0x368(r1) */ // 0x806FA6DC
    r30 = r3;
    r31 = r4;
    r26 = r5;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FA6EC
    if (!=) goto 0x0x806fa708;
    /* li r0, 2 */ // 0x806FA6F8
    *(0x14 + r3) = r0; // stw @ 0x806FA6FC
    /* li r3, 0 */ // 0x806FA700
    /* b 0x806fa970 */ // 0x806FA704
    r3 = *(0x757c + r3); // lwz @ 0x806FA708
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fa728;
    /* li r0, 6 */ // 0x806FA718
    *(0x14 + r30) = r0; // stw @ 0x806FA71C
    /* li r3, 0 */ // 0x806FA720
}