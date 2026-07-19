/* Function at 0x806384E8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806384E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806384F8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80638500
    r30 = r3;
    if (==) goto 0x0x80638564;
    /* lis r5, 0 */ // 0x8063850C
    /* lis r4, 0 */ // 0x80638510
    r5 = r5 + 0; // 0x80638514
    *(0 + r3) = r5; // stw @ 0x80638518
    r3 = *(0 + r4); // lwz @ 0x8063851C
    if (==) goto 0x0x80638548;
    /* li r0, 0 */ // 0x80638528
    *(0 + r4) = r0; // stw @ 0x8063852C
    if (==) goto 0x0x80638548;
    r12 = *(0 + r3); // lwz @ 0x80638534
    /* li r4, 1 */ // 0x80638538
    r12 = *(8 + r12); // lwz @ 0x8063853C
    /* mtctr r12 */ // 0x80638540
    /* bctrl  */ // 0x80638544
    r3 = r30;
    /* li r4, 0 */ // 0x8063854C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80638564;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80638568
    r30 = *(8 + r1); // lwz @ 0x8063856C
}