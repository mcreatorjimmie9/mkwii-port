/* Function at 0x806FBA08, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806FBA08(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806FBA14
    r31 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FBA1C
    if (!=) goto 0x0x806fba38;
    /* li r0, 2 */ // 0x806FBA28
    *(0x14 + r3) = r0; // stw @ 0x806FBA2C
    /* li r3, 0 */ // 0x806FBA30
    /* b 0x806fba94 */ // 0x806FBA34
    r3 = *(0x757c + r3); // lwz @ 0x806FBA38
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fba58;
    /* li r0, 6 */ // 0x806FBA48
    *(0x14 + r31) = r0; // stw @ 0x806FBA4C
    /* li r3, 0 */ // 0x806FBA50
}